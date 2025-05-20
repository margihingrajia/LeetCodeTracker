# Write your MySQL query statement below
DELETE t1 FROM Person t1
JOIN Person t2 
ON t1.email = t2.email AND t1.id > t2.id;

# Make sure to use the alias as:
# Delete <alias> from table <alias> JOIN Table <alias2>
# ON <conditions>