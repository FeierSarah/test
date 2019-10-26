package test2;

class Course{
	private String cNumber;
	private String Cname;
	private double Cuit;
	public Course(String cNumber, String Cname, double Cuit) {
		this.cNumber = cNumber;
		this.Cname = Cname;
		this.Cuit = Cuit;
	}
	public void printCourseInfo() {
		System.out.println("课程编号:" + cNumber +" 课程名:" + Cname + " 学分数:" + Cuit);
	}
}
public class class06 {
	public static void main(String[] args) {
		Course c1 = new Course("01", "Java", 5);
		c1.printCourseInfo();
	}
}
