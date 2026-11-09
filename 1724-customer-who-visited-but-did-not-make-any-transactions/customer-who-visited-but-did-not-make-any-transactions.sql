# Write your MySQL query statement below
select vis.customer_id,COUNT(*) as count_no_trans 
from Visits vis LEFT JOIN Transactions trans
on vis.visit_id=trans.visit_id
where trans.visit_id IS NULL
group by vis.customer_id;