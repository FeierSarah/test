<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<jsp:useBean id="calculator" class="homework.Calculator">
    <jsp:setProperty name="calculator" property="*"/>
</jsp:useBean>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>计算器</title>
</head>
<body>
<form action="calculate.jsp" method="post">
第一个数：<input type="text" name="a">
<select name="operator">
	<option value="+">+</option>
	<option value="-">-</option>
	<option value="*">*</option>
	<option value="/">/</option>
</select>
第二个数：<input type="text" name="b">
<input type="submit" value="计算">
</form>

<%
try{
double a=calculator.getA();
double b=calculator.getB();
String operator=calculator.getOperator();
out.println(calculator.fun(a, b, operator));
}catch(Exception e){
	e.printStackTrace();
}
%>
</body>
</html>