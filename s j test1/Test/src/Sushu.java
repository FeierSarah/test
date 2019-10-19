//求1000以内的素数
public class Sushu {
	public static void main(String[] args) {
		int num = 1000;
		System.out.print("2 ");
		for(int i = 3; i <= num; i++) {
			int count = 0;
			for(int j = 2; j < i; j++) {
				if(i % j != 0) {
					count++;
					if(count == i - 2)
						System.out.print(i+" ");
				}  
			}
		}
	}
}
