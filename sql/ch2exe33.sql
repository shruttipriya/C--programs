select * from sales.SalesOrderDetail
select sum (UnitPrice) as 'total' from sales.SalesOrderDetail 
group by ModifiedDate
