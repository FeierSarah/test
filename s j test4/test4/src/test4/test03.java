package test4;
import java.util.*;
public class test03 {
		public static void main(String args[]){
			int a[]={9,8,7,6,5,4,3,2,1,0};
			int max=-1,min=100,sum=0;
			for(int i=0;i<10;i++){
				sum+=a[i];
				if(max<a[i])
					max=a[i];
				else{
					if(min>a[i])
						min=a[i];
				}
			}
			Arrays.sort(a);				
			System.out.println("最大值:"+max+";最小值:"+min);
			System.out.println("最大值:"+a[9]+";最小值:"+a[0]);
			System.out.println("数组所有元素的和:"+sum);
			System.out.printf("平均值:%.2f\n",sum/10.0);
		}
}
