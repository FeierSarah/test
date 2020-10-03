package homework;

import java.io.IOException;
import java.sql.SQLException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class InsertCustomerServlet
 */
@WebServlet("/InsertCustomerServlet")
public class InsertCustomerServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public InsertCustomerServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
       response.setCharacterEncoding("utf-8");
       request.setCharacterEncoding("utf-8");
       
		CustomerBean  customer = new CustomerBean(
                request.getParameter("custName"),request.getParameter("email"),
                request.getParameter("phone"));
      
        
        try {
        	CustomerDAO customerdao = new CustomerDAO();
			if(customerdao.insertCustomer(customer)){
				RequestDispatcher view = request.getRequestDispatcher("jsp/showCustomer.jsp");
		        view.forward(request, response);
			//request.setAttribute("result",message);
		}
			} catch (SQLException e) {
			// TODO 自动生成的 catch 块
			e.printStackTrace();
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}

