package test1;
//求三位数的水仙花数
public class Shuixianhua {
	public static void main(String[] args) {
		int num = 999;
		for(int i = 100; i <= num; i++) {
			int i1 = i / 100;
			int i2 = i / 10 % 10;
			int i3 = i % 10;
			int sum = i1 * i1 * i1 + i2 * i2 * i2 + i3 * i3 * i3;
			if(sum == i) {
				System.out.print(i + " "); 
			}
		}
	}
}
