<%@ page contentType="text/html;charset=utf-8" %>
    <form action="" method="post">
      <input type="text" name="username" size="25">
      <input type="submit" value="提交">
      <input type="reset" value="重置">
    </form>
<h4 style="color:blue">Hello, <%=request.getParameter("username") %>!</h4>
