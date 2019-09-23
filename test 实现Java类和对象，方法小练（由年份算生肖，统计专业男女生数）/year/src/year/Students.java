package year;

class student{
	public String name;
	public int num;
	public char sex;
	public String major;
	public int age;
}

public class Students {	
	public static int getCountsGirls(student[] students,String prof) {
		int count1 =0;
		for(int j=0;j<students.length;j++) {
			if(students[j].major.equals(prof)) {
				if(students[j].sex=='W') {
					++count1;
					}
				}
			}
		return count1; 
		}
	public static int getCountsBoys(student[] students,String prof) {
		int count2 =0;
		for(int j=0;j<students.length;j++) {
			if(students[j].major.equals(prof)) {
				if(students[j].sex=='M') {
					++count2;
					}
				}
			}
		return count2;
	    }
	public static void main(String[] args) {
       student[] students =new student[16];
       String[] names1 = {"a","b","c","d","e","f","g","h"};
       String[] names2 = {"A","B","C","D","E","F","G","H"};
       int[] ages1 = {19,22,20,18,23,21,20,19};
       int[] ages2 = {18,20,22,23,21,20,18,19};
       String[] majors = {"�����","������","������","����","����","�����","����","������"};
       for(int i=0;i<names1.length;i++){
    	   students[i] =new student();
    	   students[i].name =names2[i];
    	   students[i].age =ages1[i];
    	   students[i].major =majors[i];
    	   students[i].num =i+1;
    	   students[i].sex ='W';
       }
       for(int i=names1.length;i<names1.length + names2.length;i++){
    	   students[i] =new student();
    	   students[i].name =names1[i-names1.length];
    	   students[i].age =ages2[i-names1.length];
    	   students[i].major =majors[i-names1.length];
    	   students[i].num =i+1;
    	   students[i].sex ='M';
       }
       System.out.println("��"+getCountsBoys(students,"�����")+"�������רҵ����");
       System.out.println("��"+getCountsBoys(students,"����")+"������רҵ����");
       System.out.println("��"+getCountsBoys(students,"������")+"��������רҵ����");
       System.out.println("��"+getCountsGirls(students,"�����")+"�������רҵŮ��");
       System.out.println("��"+getCountsGirls(students,"����")+"������רҵŮ��");
       System.out.println("��"+getCountsGirls(students,"������")+"��������רҵŮ��");
	}
}
