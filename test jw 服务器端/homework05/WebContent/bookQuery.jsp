<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
     <jsp:useBean  id="book" class="homework.BookBean" scope="session"/>
     <jsp:setProperty name="book" property="*"/>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<body>
书号：<jsp:getProperty name="book" property="bookid"/><br><br>
书名：<jsp:getProperty name="book" property="title"/><br><br>
作者：<jsp:getProperty name="book" property="author"/><br><br>
出版社：<jsp:getProperty name="book" property="publisher"/><br><br>
价格：<jsp:getProperty name="book" property="price"/><br><br>
</body></html>


