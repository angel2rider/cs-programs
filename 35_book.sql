Aim: To create a table Book with the following fields and insert atleast 5 records into the table.

Book_id        Integer      Primary Key
Book_name      varchar(20)
Author_name    varchar(25)
Pub_name       varchar(25)
Price          Decimal(10,2)

a) Display the details of book with price 100 or more

b) Display the name of all books published by 'SCERT'

c) Increase the price of books by 10% which are published by SCERT

d) List the details of books containing the word 'PROGRAMMING' at the end

e) Display the details of books with highest price

Query

create table book(book_id int primary key,book_name varchar(20),author_name varchar(25),pub_name varchar(25),price decimal(10,2));
insert into book values(1001,'PHP Programming','Steve','SCERT',250);
insert into book values(1002,'Harry Potter','J.K Rownling','ABC',650);
insert into book values(1003,'C++ Programming','Bjarne Strowstroup','SCERT',100);
insert into book values(1004,'Python Programming','Guido Van Rossum','SCERT',764);
insert into book values(1005,'The Bird','Sudha Murthy','ABC',95);
select * from book;

a) select * from book where price>=100;
b) select book_name from book where pub_name='SCERT';
c) update book set price=price+(price*0.10) where pub_name='SCERT';
select * from book;
d) select * from book where book_name like '%Programming';
e) select * from book where price=(select max(price) from book);