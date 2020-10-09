<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
    <jsp:useBean id="customer" class="homework.CustomerBean" scope="session"/>
    <jsp:setProperty name="customer" property="*"/>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>show</title>
</head>
<body>
姓名：<jsp:getProperty name="customer" property="custName"/><br><br>
邮箱：<jsp:getProperty name="customer" property="email"/><br><br>
电话：<jsp:getProperty name="customer" property="phone"/><br><br>
</body>
</html>

