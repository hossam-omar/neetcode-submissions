-- Write your query below
select c.customer_id , c.customer_name
from customers as c
where exists(
    select 1
    from orders as o
    where o.customer_id = c.customer_id
        and o.product_name = 'A'
)
and exists(
    select 1
    from orders as o
    where o.customer_id = c.customer_id
        and o.product_name = 'B'
)
and not exists(
    select 1
    from orders as o
    where o.customer_id = c.customer_id
        and o.product_name = 'C'
)
order by c.customer_name;