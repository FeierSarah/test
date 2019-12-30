package test3;
class Pointer {
	private double x;
	private double y;
	public Pointer() {
		
	}
	public Pointer(double x,double y) {
		this.x = x;
		this.y = y;
	} 
	public double getX() {
        return x;
    }
    public void setX(double x) {
        this.x = x;
    }
    public double getY() {
        return y;
    }
    public void setY(double y) {
        this.y = y;
    }
    public void display() {
    	System.out.println("xΪ" + x + ",yΪ" + y);
    }
    public boolean equals(Pointer p) {
		if(x == p.x && y == p.y)
			return true;
		else
			return false;
	}
    public String toString() {
		String result="";
		result="x:"+x+";";
		result=result+"y:"+y;
		return result;
	}
    public static Pointer middle(Pointer p1,Pointer p2){
    	return new Pointer((p1.x+p2.x)/2,(p1.y+p2.y)/2);
    	}
	public static double distance(Pointer p1,Pointer p2) {
		return  Math.sqrt((Math.pow(p1.x-p2.x,2)+Math.pow(p2.y-p1.y,2)));
	}
}
public class test05 {
	public static void main(String[] args) {
		Pointer p1 = new Pointer(1,2);
		Pointer p2 = new Pointer(0,0);
		p1.display();
		p2.display();
		System.out.println(Pointer.distance(p1 ,p2));
		System.out.println(Pointer.middle(p1 ,p2));
		
	}
}