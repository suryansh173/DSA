# Write your MySQL query statement below
SELECT 
    d.Name AS Department,
    e.Name AS Employee,
    e.Salary AS Salary
FROM 
    Employee e
JOIN 
    Department d ON e.departmentId = d.id
WHERE 
    (e.departmentId, e.Salary) IN (
        SELECT departmentId, MAX(Salary)
        FROM Employee
        GROUP BY departmentId
    );