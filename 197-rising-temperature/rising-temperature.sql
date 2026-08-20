# Write your MySQL query statement below
select wi.id from Weather wi JOIN Weather wj
ON DATEDIFF(wi.recordDate,wj.recordDate)=1
where wi.temperature>wj.temperature;