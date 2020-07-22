Select *from HumanResources.Employee
Select  BusinessEntityID ,LoginID , JobTitle from HumanResources.Employee
Select  BusinessEntityID ,LoginID , JobTitle from HumanResources.Employee order by BusinessEntityID OFFSET 5 rows fetch next 10 rows only 
