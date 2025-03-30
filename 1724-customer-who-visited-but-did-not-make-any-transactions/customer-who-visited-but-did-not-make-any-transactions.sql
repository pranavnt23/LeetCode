# Write your MySQL query statement below
select vs.customer_id,COUNT(*) as count_no_trans 
from Visits vs LEFT JOIN Transactions ts 
ON vs.visit_id=ts.visit_id
where ts.visit_id is NULL
group by customer_id;