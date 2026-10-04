# Write your MySQL query statement below
select class from Courses GROUP by class having count(class)>=5;