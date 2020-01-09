package test4;
import java.util.*;
public class test04 {
		public static void main(String args[]){
			@SuppressWarnings("resource")
			Scanner in=new Scanner(System.in);
			String s,c;
			s=in.next();
			c=in.next();
			System.out.println(s.replace(c,""));
		}
}

