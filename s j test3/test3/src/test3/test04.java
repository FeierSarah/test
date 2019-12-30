package test3;
class SA{
	int m;
	int i;
	public int f(int a,int b){
		if(a==b){
		       m=a;
		}
		else if(a>b){	
			for(i=1;i<=b;i++){
				if(a%i==0 && b%i==0)
				    m=i;
			}
		}
		
		else{
			for(i=1;i<=a;i++){
				if(a%i==0 && b%i==0)
					m=i;
			}
		}
		return m;
	}
}
class SB extends SA{
	public int f(int a,int b){
		super.f(a,b);
		return (a*b)/m;
	}
}
public class test04{
	public static void main(String args[]) {
           SA aa=new SA();
           SB bb=new SB();
           System.out.println(aa.f(6,9));
           System.out.println(bb.f(6,9));
	}
}
