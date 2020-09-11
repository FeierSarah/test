package homework;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Random;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@SuppressWarnings("serial")
@WebServlet("/GuessNumberServlet")
public class GuessNumberServlet extends HttpServlet {
    @SuppressWarnings("deprecation")
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        int magic = new Random().nextInt(100)+1;
        HttpSession session = request.getSession();
        session.setAttribute("num",new Integer(magic));
        response.setContentType("text/html;charset=utf-8");
        PrintWriter out = response.getWriter();
        out.println("<HTML><BODY>");
        out.println("Please guess a number,the number is between 0 and 100!");
        out.println("<form action='./GuessNumberServlet' method='post'> ");
        out.println("<input type='text' name='guess'>");
        out.println("<input type='submit' value='submit'>");
        out.println("</form>");
        out.println("</BODY></HTML>");
    }

    public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        //如果为空，那么久刷新，注意这里使用的是equals方法，而不能选择判定等于null
    	if(request.getParameter("guess").equals("")) {response.setHeader("Refresh","0");}
        else {
    	int guess = Integer.parseInt(request.getParameter("guess"));
        HttpSession session = request.getSession();
        int magic = (Integer)session.getAttribute("num");

        response.setContentType("text/html;charset=utf-8");
        PrintWriter out = response.getWriter();
        out.println("<HTML><BODY>");
        if(guess==magic)
        {
            session.invalidate();
            out.println("Congratulation,you're right!  ");
            out.println("<a href='./GuessNumberServlet'>Guess again</a> ");
        }
        else if(guess<magic)
        {
            out.println("It's too little,please try again! ");
        }
        else
        {
            out.println("It's too large,please try again! ");
        }
        out.println("<form action='./GuessNumberServlet' method='post'> ");
        out.println("<input type='text' name='guess'>");
        out.println("<input type='submit' value='submit'>");
        out.println("</form>");
        out.println("  </BODY></HTML>");
    }
    }
}

