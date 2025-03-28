# Write your MySQL query statement below
select pp.product_name,ss.year,ss.price 
from Sales ss LEFT JOIN Product pp 
ON ss.product_id=pp.product_id;