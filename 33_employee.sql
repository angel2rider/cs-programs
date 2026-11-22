Aim: Create a table employee with the following fields and insert 5 records into the table except the column gross_pay and DA.

Emp_code Integer Primary Key
Emp_name varchar(20)
Designation varchar(25)
Department varchar(25)
Basic_pay Decimal(10,2)
DA Decimal(10,2)
gross_pay Decimal(10,2)

a) Update DA with 28% of Basic_pay

b) Update gross_pay with the sum of Basic_pay and DA

c) Display the details of employees in Purchase, Sales, and HR Department

d) Display the details of employees with gross_pay below 10,000

e) Delete all the clerks from the table

Query

create table: employee(ecode int primary key,ename varchar(20),desig varchar(25),dept varchar(25),basic decimal(10,2),da decimal(10,2),gross decimal(10,2));
insert into employee values(10101,'Raji','Clerk','Finance',3500,null,null);
insert into employee values(10102,'Kumar','Ast.Manager','Purchase',52000,null,null);
insert into employee values(10103,'Asha','Clerk','Sales',38000,null,null);
insert into employee values(10104,'Smith','Manager','HR',77000,null,null);
insert into employee values(10105,'Ramya','Clerk','Sales',29000,null,null);
select * from employee;

a) update employee set da=0.28*basic;
select * from employee;

b) update employee set gross=basic+da;
select * from employee;

c) select * from employee where dept in ('Purchase','Sales','HR');

d) select * from employee where gross<10000;

e) delete from employee where desig='Clerk';
select * from employee;
