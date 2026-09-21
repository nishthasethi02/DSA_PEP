# Write your MySQL query statement below
select a.machine_id, round(AVG(b.timestamp-a.timestamp),3) as processing_time
from Activity a JOIN Activity b
ON a.machine_id = b.machine_id
AND a.activity_type = 'start'
AND b.activity_type = 'end'
group by a.machine_id;