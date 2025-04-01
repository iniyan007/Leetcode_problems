# Write your MySQL query statement below
SELECT p.email AS Email FROM Person p
GROUP BY Email having count(Email)>1;