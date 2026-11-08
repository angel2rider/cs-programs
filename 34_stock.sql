Aim: Create a table stock, which stores daily sales of items in a shop, with the following fields and insert at least 5 records into the table.

Item_code Integer Primary Key
Item_name varchar(20)
Manufacturer_code varchar(20)
Quantity Integer
Unit_price Decimal(10,2)

a) Display the item names with stock zero

b) Display the number of items manufactured by the same Manufacturer

c) Display the highest price and lowest quantity in the stock

d) Increase the unit price of all items by 10%

Query

create table stock(item_code int primary key,item_name varchar(20),mfr_code varchar(20),qty int,unit_price decimal(10,2));
insert into stock values(1001,'Soap','ABC',120,200);
insert into stock values(1002,'Bulb','WIPRO',0,400);
insert into stock values(1003,'Powder','TATA',200,2000);
insert into stock values(1004,'Fan','XYZ',95,10000);
insert into stock values(1005,'Perfume','CRT',0,250);
select * from stock;

a) select item_name from stock where qty=0;
b) select mfr_code,count(*) from stock group by mfr_code;
c) select max(unit_price),min(qty) from stock;
d) update stock set unit_price=unit_price+(unit_price*0.10);
select * from stock;