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
			System.out.println("���ֵ:"+max+";��Сֵ:"+min);
			System.out.println("���ֵ:"+a[9]+";��Сֵ:"+a[0]);
			System.out.println("��������Ԫ�صĺ�:"+sum);
			System.out.printf("ƽ��ֵ:%.2f\n",sum/10.0);
		}
}
