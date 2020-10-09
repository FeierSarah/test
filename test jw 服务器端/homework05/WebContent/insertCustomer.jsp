<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>insert</title>
</head>
<body>
<h3>请输入顾客信息：</h3>
<form action = "InsertCustomerServlet" method = "post">
    <table>
        <tr><td>姓名</td> <td><input type="text" name="custName" ></td></tr>
        <tr><td>邮箱</td><td><input type="text" name="email"></td></tr>
        <tr><td>电话</td><td><input type="text" name="phone" ></td></tr>
        <tr><td><input type="submit" value="确定" ></td>
            <td><input type="reset" value="重置" ></td>
        </tr>
    </table>
</form>
</body>
</html>

