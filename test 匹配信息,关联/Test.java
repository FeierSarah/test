
public class Test {


	public static void main(String[] args) {
	    //Human human=new Human("����","��",22,175,68.5f);
	    //�����ĸ������
	    Student student=new Student("����","��",22,175,68.5f,"001","��171");
	    //�������������
	    /*
	    student.eat();
	    student.sleep();
	    student.study();
	    student.exam();*/
	    
	    //Human human1=new Student("����","��",22,175,68.5f,"001","��171");
	    //Student student1=new Human("����","��",22,175,68.5f);
	    
	    Human human=new Human("����","��",22,175,68.5f);
	    Human human1=new Human("����","��",22,175,68.5f);
	    //Human human2=human;
	    System.out.println(human.equals(human1));
	    
	    Student stu1=new Student("����","��",22,175,68.5f,"001","��171");
	    Student stu2=new Student("����","��",22,175,68.5f,"001","��172");
	    System.out.println(stu1.equals(stu2));
	    
	    
	    System.out.println(stu1);
	    
	    Animal animal=new People();
	

	}

}
