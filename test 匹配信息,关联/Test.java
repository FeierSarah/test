
public class Test {


	public static void main(String[] args) {
	    //Human human=new Human("张三","男",22,175,68.5f);
	    //创建的父类对象
	    Student student=new Student("张三","男",22,175,68.5f,"001","计171");
	    //创建的子类对象
	    /*
	    student.eat();
	    student.sleep();
	    student.study();
	    student.exam();*/
	    
	    //Human human1=new Student("张三","男",22,175,68.5f,"001","计171");
	    //Student student1=new Human("张三","男",22,175,68.5f);
	    
	    Human human=new Human("张三","男",22,175,68.5f);
	    Human human1=new Human("张三","男",22,175,68.5f);
	    //Human human2=human;
	    System.out.println(human.equals(human1));
	    
	    Student stu1=new Student("张三","男",22,175,68.5f,"001","计171");
	    Student stu2=new Student("张三","男",22,175,68.5f,"001","计172");
	    System.out.println(stu1.equals(stu2));
	    
	    
	    System.out.println(stu1);
	    
	    Animal animal=new People();
	

	}

}
