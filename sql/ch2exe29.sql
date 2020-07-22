Select Top 5 SalesOrderID from sales.SalesOrderHeader
where Datepart(yyyy,orderDate)=2011 order by totalDue desc