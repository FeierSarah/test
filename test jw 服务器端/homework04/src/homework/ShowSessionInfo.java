package homework;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Date;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@SuppressWarnings("serial")
@WebServlet("/ShowSessionInfo")
public class ShowSessionInfo extends HttpServlet {
    @SuppressWarnings("deprecation")
	@Override
    public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html;charset=gb2312");
        HttpSession session = request.getSession(true);
        String heading = null;
        String info="Information about your session";
        Integer accessCount = (Integer) session.getAttribute("accessCount");
        if(accessCount==null)
        {
            accessCount = new Integer(1);
            heading = "Welcome,enter this page first time! ";
        }
        else
        {
            heading = "Welcome Back! ";
            accessCount = accessCount+1;
        }

        session.setAttribute("accessCount",accessCount);
        PrintWriter out = response.getWriter();
        out.println("<HTML>");
        out.println("  <BODY><center>");
        out.println("<h2>"+heading + "</h2>" +"<h3>" +info+"</h3>");

        out.println("<table border='1'>");
        out.println("<tr bgcolor=\"ffad0\"><td><b>Info Type</b><td><b>Value</b>\n");
        out.println("<tr><td>ID:<td>"+session.getId()+"\n");
        out.println("<tr><td>Create Time:<td>");
        out.println(""+new Date(session.getCreationTime())+"\n");
        out.println("<tr><td>Time of last access:<td>");
        out.println(""+new Date(session.getLastAccessedTime())+"\n");
        out.println("<tr><td>Access number:<td>"+accessCount+"\n");
        out.println("</table>");
        out.println(" </center> </BODY>");
        out.println("</HTML>");
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        doGet(request, response);
    }
}

