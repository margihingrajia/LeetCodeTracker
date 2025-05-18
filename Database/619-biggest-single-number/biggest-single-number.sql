# Write your MySQL query statement below

# Here coalesce is a function that is used to put a value when it doesn;t find anything before it. 

# If it will not find a num value, it will return NULL

SELECT COALESCE( (  select num
                    from mynumbers
                    group by num
                    having count(*)=1 
                    order by num desc
                  LIMIT  1), NULL) AS num;