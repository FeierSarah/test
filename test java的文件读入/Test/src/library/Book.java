package library;

public class Book {
	private String ISBN;
	private String bname;
	private String writer;
	private String pname;
    private double price;
    private int page;
    public Book() {
    	
    }
    public Book(String ISBN, String bname, String writer,
    		String pname, double price, int page) {
    	this.ISBN = ISBN;
    	this.bname = bname;
    	this.writer =writer;
    	this.pname = pname;
    	this.price = price;
    	this.page = page;
    }
    public String getISBN() {
		return ISBN;
	}
	public void setISBN(String ISBN) {
		this.ISBN = ISBN;
	}
	public String getBname() {
		return bname;
	}
	public void setBname(String bname) {
		this.bname = bname;
	}
	public String getWriter() {
		return writer;
	}
	public void setWriter(String writer) {
		this.writer = writer;
	}
	public String getPname() {
		return pname;
	}
	public void setPname(String pname) {
		this.pname = pname;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	public int getPage() {
		return page;
	}
	public void setPage(int page) {
		this.page = page;
	}
	public String toString() {
		return "ISBN:" + ISBN + ", bname:" + bname + ","
				+ " writer:" + writer + ", price:" + price
				+ ", pname:" + pname + ", page:" + page;
	}
}
