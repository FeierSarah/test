package test4;
public class test02 {
	public static void main(String args[]){
		double a[]=new double[7];//100
		for(int i=0;i<100;i++){
			a[(int)(Math.random()*6)+1]++;
		}
		for(int i=1;i<=6;i++){
			System.out.print(i+"出现的概率：");
			System.out.printf("%.2f\n",a[i]/100.0);
		}
		double b[]=new double[7];//1000
		for(int i=0;i<1000;i++){
			b[(int)(Math.random()*6)+1]++;
		}
		for(int i=1;i<=6;i++){
			System.out.print(i+"出现的概率：");
			System.out.printf("%.2f\n",b[i]/1000.0);
		}
	}
}
