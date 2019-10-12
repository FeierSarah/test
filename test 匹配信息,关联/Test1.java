package practice;

public class Test1 {
	public static void main(String[] args) {
       Student[] students =new Student[16];
       String[] names1 = {"jerry","carl","ryan","joe","jack","tom","kevin","gary"};
       String[] names2 = {"amy","beryl","debby","eva","fay","gina","kess","spring"};
       int[] ages = {19,25,21,18,23,20,22,24};
       String[] majors = {"ISS","CS","CS","ART","ISS","ISS","ART","CS"};
       for(int i=0;i<8;i++){
    	   students[i] =new Student();
    	   students[i].name =names2[i];
    	   students[i].age =ages[i];
    	   students[i].major =majors[i];
    	   students[i].num ="00"+(i+1);
    	   students[i].sex ="female";
       }
       for(int i=8;i<16;i++){
    	   students[i] =new Student();
    	   students[i].name =names1[i-8];
    	   students[i].age =ages[i-8];
    	   students[i].major =majors[i-8];
    	   students[i].num ="00"+(i+1);
    	   students[i].sex ="male";
       }
       StudentDeal deal =new StudentDeal();
       float a =deal.getAverMaleAge(students);
       int b=deal.getCounts(students,"ISS");
       int c=deal.getCounts(students,"CS");
       int d=deal.getCounts(students,"ART");
       System.out.println("男生平均年龄为："+a);
       System.out.println("有"+b+"个ISS专业男生");
       System.out.println("有"+c+"个CS专业男生");
       System.out.println("有"+d+"个ART专业男生");
	}
}
