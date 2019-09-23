package student;

public class Test1 {
	public static void main(String[] args) {
       Student[] students =new Student[16];
       String[] names1 = {"a","b","c","d","e","f","g","h"};
       String[] names2 = {"A","B","C","D","E","F","G","H"};
       int[] ages1 = {19,22,20,18,23,21,20,19};
       int[] ages2 = {18,20,22,23,21,20,18,19};
       String[] majors = {"计算机","物联网","物联网","网工","网工","计算机","网工","物联网"};
       for(int i=0;i<names1.length;i++){
    	   students[i] =new Student();
    	   students[i].name =names2[i];
    	   students[i].age =ages1[i];
    	   students[i].major =majors[i];
    	   students[i].num =i+1;
    	   students[i].sex ='W';
       }
       for(int i=names1.length;i<names1.length + names2.length;i++){
    	   students[i] =new Student();
    	   students[i].name =names1[i-names1.length];
    	   students[i].age =ages2[i-names1.length];
    	   students[i].major =majors[i-names1.length];
    	   students[i].num =i+1;
    	   students[i].sex ='M';
       }
       StudentDeal deal =new StudentDeal();
       int b=deal.getCountsBoys(students,"计算机");
       int c=deal.getCountsBoys(students,"网工");
       int d=deal.getCountsBoys(students,"物联网");
       int e=deal.getCountsGirls(students,"计算机");
       int f=deal.getCountsGirls(students,"网工");
       int g=deal.getCountsGirls(students,"物联网");
       System.out.println("有"+b+"个计算机专业男生");
       System.out.println("有"+c+"个网工专业男生");
       System.out.println("有"+d+"个物联网专业男生");
       System.out.println("有"+e+"个计算机专业女生");
       System.out.println("有"+f+"个网工专业女生");
       System.out.println("有"+g+"个物联网专业女生");
	}
}
