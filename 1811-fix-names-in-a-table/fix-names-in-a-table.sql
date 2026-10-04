# Write your MySQL query statement below
select user_id,
concat(
    upper(SUBSTRING(name,1,1)),
    lower(substring(name,2))
    
)as name from Users ORDER by user_id;
