# Write your MySQL query statement below
SELECT e2.name AS Employee FROM Employee e
INNER JOIN employee e2 ON e.id = e2.managerID
WHERE e.salary < e2.salary