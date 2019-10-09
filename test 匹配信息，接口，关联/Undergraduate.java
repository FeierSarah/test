
public class Undergraduate extends Student{
      private String major;
      
      public void setMajor(String major){
    	  this.major=major;
      }
      public String getMajor(){
    	  return major;
      }
      public Undergraduate(String name,String sex,int age,int height,float weight,String num,String className,String major){
    	  super(name,sex,age,height,weight,num,className);
    	  this.major=major;
      }
}

