# Write your MySQL query statement below
select e.name as Employee 
from Employee as e, Employee as m
where (m.salary < e.salary) and e.managerId = m.id