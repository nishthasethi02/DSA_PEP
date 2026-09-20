select v.customer_id, count(*) AS count_no_trans
FROM Visits v LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE transaction_id is null
group by v.customer_id;