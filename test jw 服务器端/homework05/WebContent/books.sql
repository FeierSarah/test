create table books (
bookid varchar (10) not null primary key,
title varchar (50),
author varchar(20),
publisher varchar (40),
price float
);

INSERT INTO books VALUES
('204','Head First Servlets & JSP', 'Bryan Basham', '中国电力出版社',98);
INSERT INTO books VALUES
('201', 'Servlets 与JSP 核心教程', 'Hall Marty','清华大学出版社',45);
INSERT INTO books VALUES
('202', 'Tomcat与Java Web 开发技术祥解', '孙卫琴', '机械工业出版社',45);
INSERT INTO books VALUES
('203', 'JSP 应用开发技术', '柳永坡','人民邮电出版社',52);
INSERT INTO books VALUES
('205', 'J2EE 1.4 编程指南', 'Spielman Sue','电子工业出版社',68);

