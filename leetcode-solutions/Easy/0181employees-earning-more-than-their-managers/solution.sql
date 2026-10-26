-- ==========================================================================
-- Problem: 181. Employees Earning More Than Their Managers (Easy)
-- LeetCode: https://leetcode.com/problems/employees-earning-more-than-their-managers/
-- Language: SQL
-- Synced by Code_Raginii
-- ==========================================================================
# Write your MySQL query statement below
select e.name AS Employee 
from Employee e 
JOIN  Employee m 
on e.managerId=m.id
Where e.salary>m.salary;
