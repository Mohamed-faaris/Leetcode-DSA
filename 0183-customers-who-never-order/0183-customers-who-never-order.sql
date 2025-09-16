# Write your MySQL query statement below
SELECT name AS Customers       
FROM Customers AS C
WHERE NOT EXISTS(
    SELECT 1
    FROM Orders
    WHERE C.id = customerId
);