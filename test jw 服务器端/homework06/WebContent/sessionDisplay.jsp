<%@ page contentType="text/html;charset=gb2312" %>
<%@ page import="java.util.* " %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<html>
<body>
<table border="1">
 <c:forEach var="sess" items="${applicationScope.sessionList}">
  <tr><td><c:out value="${sess.id}" /></td>
     <td><c:out value="${sess.creationTime}"/></td>
  </tr>
 </c:forEach>
</table>
</body>
</html>


