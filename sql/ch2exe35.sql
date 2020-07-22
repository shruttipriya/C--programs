select SalesOrderID, MIN(LineTotal)as Minimum, MAX(LineTotal)as Maximum from Sales.SalesOrderDetail
  where LineTotal>5000
                   group by SalesOrderID