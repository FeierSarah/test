package student;

public class Test1 {
	public static void main(String[] args) {
       Student[] students =new Student[16];
       String[] names1 = {"a","b","c","d","e","f","g","h"};
       String[] names2 = {"A","B","C","D","E","F","G","H"};
       int[] ages1 = {19,22,20,18,23,21,20,19};
       int[] ages2 = {18,20,22,23,21,20,18,19};
       String[] majors = {"�����","������","������","����","����","�����","����","������"};
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
       int b=deal.getCountsBoys(students,"�����");
       int c=deal.getCountsBoys(students,"����");
       int d=deal.getCountsBoys(students,"������");
       int e=deal.getCountsGirls(students,"�����");
       int f=deal.getCountsGirls(students,"����");
       int g=deal.getCountsGirls(students,"������");
       System.out.println("��"+b+"�������רҵ����");
       System.out.println("��"+c+"������רҵ����");
       System.out.println("��"+d+"��������רҵ����");
       System.out.println("��"+e+"�������רҵŮ��");
       System.out.println("��"+f+"������רҵŮ��");
       System.out.println("��"+g+"��������רҵŮ��");
	}
}
