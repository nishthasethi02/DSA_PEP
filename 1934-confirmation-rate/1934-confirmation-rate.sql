# Write your MySQL query statement below
-- select s.user_id, round(count(case when c.action = 'confirmed' then 1 end)/count(c.user_id),2)
-- AS confirmation_rate from Signups s left join Confirmations c
-- ON s.user_id = c.user_id group by s.user_id;
SELECT 
    s.user_id,
    ROUND(
        COALESCE(
            COUNT(CASE WHEN c.action = 'confirmed' THEN 1 END) 
            / NULLIF(COUNT(c.user_id), 0),
            0
        ),
        2
    ) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
    ON s.user_id = c.user_id
GROUP BY s.user_id;