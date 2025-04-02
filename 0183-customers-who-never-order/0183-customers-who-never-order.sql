# Write your MySQL query statement below
SELECT name as Customers FROM Customers
where id NOT in (SELECT customerId from Orders);