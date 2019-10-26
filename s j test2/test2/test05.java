package test2;

class MyPoint{
	private double x;
	private double y;
	public MyPoint() {
		this.x = 0;
		this.y = 0;
	}
	public MyPoint(double x, double y) {
		this.x = x;
		this.y = y;
	}
	public double getX() {
		return x;
	}
	public double getY() {
		return y;
	}
	public double distance(MyPoint p1) {
		return Math.sqrt((this.x-p1.x) * (this.x-p1.x) + (this.y-p1.y) * (this.y-p1.y));
	}
}
public class test05 {
	public static void main(String[] args) {
		MyPoint p0 = new MyPoint();
		MyPoint p1 = new MyPoint(1, 2);
		System.out.println(p0.distance(p1));
	}
}
