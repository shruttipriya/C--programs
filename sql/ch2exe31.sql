Select ProductID,SUM(LineTotal) as Total from Sales.SalesOrderDetail
                   group by ProductID Having SUM(LineTotal)>10000