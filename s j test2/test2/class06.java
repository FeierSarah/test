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
		System.out.println("�γ̱��:" + cNumber +" �γ���:" + Cname + " ѧ����:" + Cuit);
	}
}
public class class06 {
	public static void main(String[] args) {
		Course c1 = new Course("01", "Java", 5);
		c1.printCourseInfo();
	}
}
