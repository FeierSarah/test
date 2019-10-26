package test2;

class Rectangle {
	private double width;
	private double height;
	private String color = "白色";
	public Rectangle() {
		this.width = 1.0;
		this.height = 1.0;
		this.color = "白色";
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
		Rectangle r1 = new Rectangle(4, 40, "黄色");
		Rectangle r2 = new Rectangle(3.5, 35.9, "红色");
		System.out.println("r1宽为:"+r1.getWidth() +" 高为:" + r1.getHeight() + " 颜色为:"
				+ r1.getColor() + " 面积为:" + r1.getArea() + " 周长为:" + r1.getPerimeter());
		System.out.println("r2宽为:"+r2.getWidth() +" 高为:" + r2.getHeight() + " 颜色为:"
				+ r2.getColor() + " 面积为:" + r2.getArea() + " 周长为:" + r2.getPerimeter());
	}
}
