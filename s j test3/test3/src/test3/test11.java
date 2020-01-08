package test3;
class Printer{
	private boolean k = false;
	private boolean l = false;
	public Printer() {
	}
    public void setK(boolean k) {
        this.k = k;
    }
    public boolean getK() {
        return k;
    }
    public void setL(boolean l) {
        this.l = l;
    }
    public boolean getL() {
        return l;
    }
    public boolean printer() {
    	if(k || l)
    		return true;
    	else
    		return false;
    }
}
public class test11 {
	 public static void main(String[] args) {
		 Printer p = new Printer();
		 if(p.printer())
		     System.out.println("需要维修");
		 else
			 System.out.println("不需要维修");	 
	 }
}
