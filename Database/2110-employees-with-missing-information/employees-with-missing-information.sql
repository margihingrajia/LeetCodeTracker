
select employee_id 
from 
(select employee_id 
from employees
union
select employee_id 
from salaries) e
where not exists (
    select employee_id
    from employees
    where employee_id = e.employee_id)
    OR NOT exists
    (select employee_id
    from salaries
    where employee_id = e.employee_id);
