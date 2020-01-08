package test3;
class Information{
	private String name;
	private String address;
	private String phone;
	 public Information(){
	        }
    public Information(String name,String address,String phone){
        this.name = name;
        this.address = address;
        this.phone = phone;
        }
     public void setName(String name){
        this.name = name;
        }
    public String getName(){
        return name;
        }
    public void setAddress(String address){
        this.address = address;
        }
    public String getAddress(){
        return address;
        }
    public void setPhone(String phone){
        this.phone = phone;
        }
    public String getPhone(){
        return phone;
        }
}
public class test13 {
	 public static void main(String[] args) {
		 Information i = new Information();
	 }

}
