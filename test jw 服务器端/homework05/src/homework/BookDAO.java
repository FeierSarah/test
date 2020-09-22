package homework;

import java.sql.*;
import java.sql.SQLException;

public class BookDAO {
	private static  Connection con;
	public BookDAO() {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/test";
			 con=DriverManager.getConnection(url,"test","1");
		}
		catch(Exception e) 
		{
			
		}
	}
  public ResultSet result() throws ClassNotFoundException, SQLException {
   	   Statement stmt=con.createStatement();
   	    String sql="select * from book";
   	    ResultSet rs=stmt.executeQuery(sql);
		return rs;
	}
  
	public static  String bookid(int i)throws SQLException {
		Statement stmt=con.createStatement();
	    String sql="select * from book";
	    ResultSet rs=stmt.executeQuery(sql);
	    BookBean book=new BookBean();
		String result="";
		try 
		{
		    int rowCount=0;
		    while(rs.next()) 
		       {
		    	rowCount++;
		    	    if(rowCount==i)
		    	    {
		    	    	book.setBookid(rs.getString(1));
			    		result=book.getBookid();
			    		System.out.print(result);
			    		break;
		    	    }
		    	
			   }
		    //conn.close();
		}catch(Exception e) 
		{}
		return result;
		
	}
}

