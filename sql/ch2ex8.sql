Select *from Sales.SalesOrderDetail
Select SalesOrderDetailID , UnitPrice from Sales.SalesOrderDetail where UnitPrice between 2000 and 2100
Select SalesOrderDetailID , UnitPrice from Sales.SalesOrderDetail where LineTotal =UnitPrice * (1 - UnitPriceDiscount) * OrderQty