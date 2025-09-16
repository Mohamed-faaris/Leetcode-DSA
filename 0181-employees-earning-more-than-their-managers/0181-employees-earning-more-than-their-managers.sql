# Write your MySQL query statement below
SELECT E1.name AS Employee
FROM Employee AS E1
LEFT JOIN Employee AS E2
ON E1.managerId = E2.id
WHERE E1.salary > E2.salary; 