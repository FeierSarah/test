<body>
    <%
    session.invalidate();//销毁session
    response.sendRedirect("login.jsp");//重定向页面
    %>
</body>
