<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<meta charset="UTF-8">
<title>乘法口诀表</title>
<head>
</head>
<body>
</body>
</html>
 <%!
    String fun() {
        String s = "";
        for (int i = 1; i < 10; i ++) {
            for (int j = 1; j <= i; j ++) 
                s += "  " + i + " * " + j + " = " + (i * j) + " ";
            s += "<br />";        
        }
        return s;
    }
%>
<%=fun() %>