package test4;
import java.util.*;
public class test05 {
		public static void main(String args[]){
			String s;
			char s1[]=new char[100];
			char c=0;
			int sum=0;
			Scanner in=new Scanner(System.in);
			s=in.next();
			c=in.next().charAt(0);
			s1=s.toCharArray();
			for(int i=0;i<s1.length;i++){
				if(c==s1[i])sum++;
			}
			System.out.println(sum);
		}
}
