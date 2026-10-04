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

-- Query #DONT WRITE THE FOLLOWING

-- create table stock(item_code int primary key,item_name varchar(20),manufacturer_code varchar(20),quantity int,unit_price decimal(10,2));
-- insert into stock values(101,'Rice','M01',0,42.50);
-- insert into stock values(102,'Wheat','M02',25,30.00);
-- insert into stock values(103,'Oil','M01',12,84.75);
-- insert into stock values(104,'Soap','M03',0,18.90);
-- insert into stock values(105,'Sugar','M02',40,36.20);
-- select * from stock;

-- a) select item_name from stock where quantity=0;
-- b) select manufacturer_code,count(*) from stock group by manufacturer_code;
-- c) select max(unit_price),min(quantity) from stock;
-- d) update stock set unit_price=unit_price+(unit_price*0.10);