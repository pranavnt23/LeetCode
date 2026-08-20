# Write your MySQL query statement below
select wi.id from 
Weather wi join Weather wj
on DATEDIFF(wi.recordDate,wj.recordDate)=1
where wi.temperature>wj.temperature;