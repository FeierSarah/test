package homework;

import java.sql.*;
public class BookDAOImpl {
	private static  Connection con;
	public static void main(String args[]) throws SQLException, ClassNotFoundException 
	{
		Class.forName("com.mysql.jdbc.Driver");
		String url="jdbc:mysql://localhost:3306/test";
		con=DriverManager.getConnection(url,"test","1");
		
	}
	public BookDAOImpl() throws ClassNotFoundException, SQLException {
		Class.forName("com.mysql.jdbc.Driver");
		String url="jdbc:mysql://localhost:3306/test";
		con=DriverManager.getConnection(url,"test","1");
	}
	public BookBean searchBook(String bookid) throws SQLException, ClassNotFoundException 
	{
		BookBean bookbean=new BookBean();
		Statement st=con.createStatement();
		String sql="select * from book where bookid="+bookid;
		ResultSet rs=st.executeQuery(sql);
		if(rs.next()) 
		{
				bookbean.setBookid(rs.getString(1));
				bookbean.setTitle(rs.getString(2));
				bookbean.setAuthor(rs.getString(3));
				bookbean.setPublisher(rs.getString(4));
				bookbean.setPrice(rs.getFloat(5));
		}else 
		{
			return null;
		}
		return bookbean;
	
	}
	public boolean insertBook(BookBean book) throws SQLException
	{
		Statement st=con.createStatement();
		String sql="insert into book values('"+book.getBookid()+"','"+book.getTitle()+"','"+book.getAuthor()+"','"+book.getPublisher()+"',"+book.getPrice()+")";
	    boolean rs=st.execute(sql);
		if(!rs) 
		{
			return true;
		}
		return false;
	}
	
}

