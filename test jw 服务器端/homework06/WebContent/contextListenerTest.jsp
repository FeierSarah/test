<%@ page import="java.io.IOException" %>
<%@ page import="java.io.PrintWriter" %>
<%@ page import="java.util.Date" %>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
<%
    ServletContext context =null;
    context = getServletConfig().getServletContext();
    response.setContentType("text/html");
    out.println("<html><head><title>Event Test</title></head>");
    Integer anInteger =new Integer(100);
    Date aDate = new Date();
    context.setAttribute("obj",anInteger); //添加属性
    out.println(context.getAttribute("obj"));
    context.setAttribute("obj",aDate);  //替换属性
    out.println("<br>"+context.getAttribute("obj"));
    context.removeAttribute("obj");  //删除属性
    out.println("<h3 align=center>"+ "已在ServletContext对象上添加、替换和删除了属性</h3>");
    out.println(context.getAttribute("obj")+"</body></html>");
    out.close();

%>
</body>
</html>

