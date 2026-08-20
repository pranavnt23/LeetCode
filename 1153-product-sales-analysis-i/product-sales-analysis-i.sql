# Write your MySQL query statement below
select pr.product_name, sal.year, sal.price from Product pr RIGHT JOIN Sales sal on pr.product_id=sal.product_id;