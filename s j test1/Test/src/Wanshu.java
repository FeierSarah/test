//输出1000以内的完数
public class Wanshu {
	public static void main(String[] args) {
		System.out.print("1 "); 
		int num = 1000;
		for(int i = 2; i <= num; i++) {
			int count = 0;
			for(int j = 1; j < i; j++) {
				if(i % j == 0) {
					count += j;
				}    
			}
			if(count == i)
				System.out.print(i + " "); 
		}
	}
}
