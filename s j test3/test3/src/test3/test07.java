package test3;
class MyRectangle {
	public int height,width;
	public MyRectangle() {
		height=0;
		width=0;
	}
	public MyRectangle(int height,int width) {
		this.height=height;
		this.width=width;
	}
	public void setHeight(int height) {
		this.height=height;
	}
	public void setWidth(int width) {
		this.width=width;
	}
	public int getHeight() {
		return height;
	}
	public int getWidth() {
		return width;
	}
	public int getArea() {
		return height*width;
	}
	public void showinfo() {
		System.out.println("长："+height+" 宽："+width);
	}
}
 
class Mysquare extends MyRectangle {
	public Mysquare(int a) {
		height=a;
		width=a;
	}
	public int getArea() {
		return height*width;
	}
	public void showinfo(){
		System.out.println("边长："+height);
	}
}
 
public class test07 {
		public static void main(String args[]){
			Mysquare mysquare=new Mysquare(5);
			System.out.println("面积："+mysquare.getArea());
			mysquare.showinfo();
		}
}