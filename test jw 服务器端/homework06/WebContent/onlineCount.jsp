<%@ page contentType="text/html;charset=gb2312" %>
<html>
<head><title>Listener test</title>
</head>
<body>
欢迎您，您的IP地址是<%= request.getRemoteAddr() %>
<p>自应用程序启动以来，该页面被访问了
<font color="red" ><%=application.getAttribute("count")%>
</font>次<br>
</body>
</html>

