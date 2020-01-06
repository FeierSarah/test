package test1;
//写出程序运行结果
public class TestE {
	public static void main(String[] args) {
		char c = '\0';
		for(int i = 1; i <= 4; i++) {
			switch(i) {
			case 1: c = '你';
			        System.out.println(c); 
			case 2: c = '好';
	                System.out.println(c); 
	                break;
			case 3: c = '酷';
	                System.out.println(c); 
	        default : System.out.println("！");
			}
		}
	}
}
