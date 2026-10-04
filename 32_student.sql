Aim: Create a table student with the following fields and insert at least 5 records into the table except for the column Total.

Roll no Integer Primary Key
Name varchar(25)
Batch varchar(15)
Mark 1 Integer
Mark 2 Integer
Mark 3 Integer
Total Integer

a) Update the column Total with the sum of Mark 1, Mark 2 and Mark 3

b) List the details of students in Commerce Batch

c) Display the name and total marks of students who are failed (Total < 90)

d) Display name and batch of those students who scored 90 or more in mark 1 and mark 2

e) Delete the student who scored below 30 in marks

f) Display the name of students in alphabetical order and in batch based

Query

Create table: student(rollno int primary key,name varchar(25),batch varchar(15),m1 int,m2 int,m3 int,total int);
insert into student values(1001,'Rose','Com',97,92,59,null);
insert into student values(1002,'Sam','Sci',92,98,79,null);
insert into student values(1003,'Asha','Hum',11,32,49,null);
insert into student values(1004,'Jinu','Com',15,25,14,null);
insert into student values(1005,'Jewal','Sci',62,65,72,null);
select * from student;

a) update student set total=m1+m2+m3;
select * from student;

b) select * from student where batch='Com';

c) select name,total from student where total<90;

d) select name,batch from student where m1>=90 and m2>=90;

e) delete from student where m3<30;
select * from student;

f) select name,batch from student order by name;