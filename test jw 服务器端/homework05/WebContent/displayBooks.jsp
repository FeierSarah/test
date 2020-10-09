<%@ page language="java" contentType="text/html; charset=utf-8" import="homework.*,java.sql.*"
    pageEncoding="utf-8"%>
 <jsp:useBean id="book" class="homework.BookDAO" scope="session" />
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>diaplayBooks</title>
<style>
td
{
	text-align:center;
}
</style>
</head>
<body>
<table width="500" height="256" border="1" align="center">
  <tr>
    <th scope="col">bookid</th>
    <th scope="col">title</th>
    <th scope="col">author</th>
    <th scope="col">pulbisher</th>
    <th scope="col">price</th>
  </tr>
  <%!int i=1;%>
  <% 
  try
  {  
	ResultSet rs=book.result();
   while(rs.next()){%> 
    <tr>
      <td><%=rs.getString(1)   %> </td>
      <td><%=rs.getString(2)   %> </td>
      <td><%=rs.getString(3)   %> </td>
      <td><%=rs.getString(4)   %> </td>
      <td><%=rs.getString(5)   %> </td>
    </tr>
 
 <% i++; }
  rs.close();
}catch(Exception e)
 {   } %>
</table>
</body>
</html>

