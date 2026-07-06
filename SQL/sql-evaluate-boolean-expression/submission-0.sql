-- Write your query below
select e.left_operand,
       e.operator,
       e.right_operand,
       case
            when e.operator = '>' and l.value > r.value then 'true' 
            when e.operator = '<' and l.value < r.value then 'true' 
            when e.operator = '=' and l.value = r.value then 'true'
            else 'false' 
        end as value
from expressions as e
join variables as l 
    on e.left_operand = l.name
join variables as r 
    on e.right_operand = r.name;