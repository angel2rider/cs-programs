Aim: Create a table Bank with the following fields and insert atleast 5 records into the table

Acc_No      integer
Acc_Name    varchar(20)
Branch_Name varchar(10)
Acc_Type    varchar(10)
Amount      Decimal(10,2)

a) Display the account details of 'saving' account in Kollam branch

b) Change the branch name "Trivandrum" to "TVPM"

c) Display the details of customer in Kollam,Thrissur and Ernakulam branch

d) List the details of customers in Thrissur branch having a balance of Rs:5000 or more

e) Remove the details of customers with account number 10012020

Query

create table bank(accNo int primary key,accName varchar(20),branchName varchar(25),accType varchar(10),amount decimal(10,2));
insert into bank values(10012010,'Thara','Trivandrum','saving',5000);
insert into bank values(10012020,'Rahul','Kollam','saving',6000);
insert into bank values(10012030,'Jai','Thrissur','saving',2000);
insert into bank values(10012040,'Anjali','Ernakulam','current',10000);
insert into bank values(10012050,'Maya','Trivandrum','saving',4200);
select * from bank;

a) select * from bank where accType='saving' and branchName='Kollam';
b) update bank set branchName='TVPM' where branchName='Trivandrum';
select * from bank;
c) select * from bank where branchName in ('Kollam','Thrissur','Ernakulam');
d) select * from bank where branchName='Thrissur' and amount>=5000;
e) delete from bank where accNo=10012020;
select * from bank;
