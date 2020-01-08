package test3;

import java.util.*;
abstract class Area {
	abstract double area();
}
 
class RectArea extends Area {
	private double height,width;
	public RectArea(double height,double width) {
		this.height=height;
		this.width=width;
	}
	public double area() {
		return height*width;
	}
}
 
class RoundArea extends Area {
	private double radius;
	public RoundArea(double radius) {
		this.radius=radius;
	}
	public double area() {
		return radius*radius*Math.PI;
	}
}
class ImpleArea{
	public void test() {
	@SuppressWarnings("resource")
	Scanner in=new Scanner(System.in);
	double h=in.nextDouble();
	double w=in.nextDouble();
	double r=in.nextDouble();
	RectArea rec=new RectArea(h,w);
	RoundArea rou=new RoundArea(r);
	System.out.printf("长方形面积： %.2f\n",rec.area());
	System.out.printf("圆形面积： %.2f\n",rou.area());
	}
}
public class test08 {
		public static void main(String args[]) {
			ImpleArea i = new ImpleArea();
			i.test();
		}
}