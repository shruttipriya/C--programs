Select *from Sales.SalesOrderHeader
Select *from Sales.SalesOrderHeader where OrderDate='2011-07-01' AND SubTotal>'10000'
Select SalesOrderID as 'Order Nume' , OrderDate ,Status , SubTotal as 'Total cost ' from Sales.SalesOrderHeader where OrderDate='2011-07-01' AND SubTotal>'10000'