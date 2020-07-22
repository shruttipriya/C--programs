select ProductID,SUM(LineTotal) as 'Total' from sales.SalesOrderDetail
                 Group by ROLLUP(ProductID)
