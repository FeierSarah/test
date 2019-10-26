package test2;

class Rectangle {
	private double width;
	private double height;
	private String color = "��ɫ";
	public Rectangle() {
		this.width = 1.0;
		this.height = 1.0;
		this.color = "��ɫ";
	}
	public Rectangle(double width, double height, String color){
		this.width = width;
		this.height = height;
		this.color = color;
	}
	public double getWidth() {
		return width;
	}
	public void setWidth(double width) {
		this.width = width;
	}
	public double getHeight() {
		return height;
	}
	public void setHeight(double height) {
		this.height = height;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public double getArea() {
		return width * height;
	}
	public double getPerimeter() {
		return (width + height) * 2;
	}
}
public class test03 {
	public static void main(String[] args) {
		Rectangle r1 = new Rectangle(4, 40, "��ɫ");
		Rectangle r2 = new Rectangle(3.5, 35.9, "��ɫ");
		System.out.println("r1��Ϊ:"+r1.getWidth() +" ��Ϊ:" + r1.getHeight() + " ��ɫΪ:"
				+ r1.getColor() + " ���Ϊ:" + r1.getArea() + " �ܳ�Ϊ:" + r1.getPerimeter());
		System.out.println("r2��Ϊ:"+r2.getWidth() +" ��Ϊ:" + r2.getHeight() + " ��ɫΪ:"
				+ r2.getColor() + " ���Ϊ:" + r2.getArea() + " �ܳ�Ϊ:" + r2.getPerimeter());
	}
}
