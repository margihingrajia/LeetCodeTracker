# Write your MySQL query statement below
select id, movie, description, rating
from cinema
where id%2 = 1 and description not in ('boring')
order by rating desc