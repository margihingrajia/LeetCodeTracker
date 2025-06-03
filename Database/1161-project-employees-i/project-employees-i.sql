# Write your MySQL query statement below
select project_id, ROUND(avg(experience_years),2) as average_years
from project natural join employee
group by project_id