select ProductID,SUM(UnitPrice)as TotalUnitPrice, SUM(LineTotal)as TotalAmt from Sales.SalesOrderDetail
   where ProductID IN (777,774) group by cube (ProductID)



