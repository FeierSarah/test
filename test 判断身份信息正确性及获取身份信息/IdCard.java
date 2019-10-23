class IdCard {
	private String number;
	private String birthday;
	private boolean sex;//true男.false女
	
	public IdCard(){
		
	}	
	public IdCard(String number, String birthday, boolean sex) {
		this.number = number;
		this.birthday = birthday;
		this.sex = sex;
	}
	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}
	public String getBirthday() {
		return birthday;
	}
	public String setBirthday(String number) {
		birthday = number.substring(6,14);
		return birthday;
	}
	public boolean isSex() {
		return sex;
	}
	public boolean setSex(String number) {
		if(number.charAt(16) == '0'||number.charAt(16) == '2'||number.charAt(16) == '4'
				||number.charAt(16) == '6'||number.charAt(16) == '8')
			return	sex = false;
		else
			return	sex = true;
	}
	public boolean checkNumber(String number) {
		if(number.length() == 18)
		{
			if(number.charAt(17) == 'x' ||(number.charAt(17) <='9' && number.charAt(17) >='0'))
			{
				int count = 0;
				for(int i = 0; i < 17; i++)
				{
					if(number.charAt(i) <='9' && number.charAt(i) >='0')
					{
						count++;
					}
				}
				if(count == 17)
					return true;
				else 
					return false;
			}
			return false;
		}
		return false;
	}
	public boolean checkBirthDay(String birthday) {
		int year = 0, month = 0, day = 0;
		for(int i = 0, j =1000; i < 4; i++,j /= 10)
		{
			char c = birthday.charAt(i);
			int t = c - '0';
			year += j * t;
		}
		month = 10 * (birthday.charAt(4) - 48) + (birthday.charAt(5) - 48);
		day = 10 * (birthday.charAt(6)- 48) + (birthday.charAt(7) - 48);
		if (year < 1900 || year > 2019) {
			return false;
		}
		if (month > 12 || month < 1) {
			return false;
		}
		if (day < 1) {
			return false;
		}
		byte[] dayOfMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			dayOfMonth[1] = 29;
		}
		return day <= dayOfMonth[month - 1];
	}
	public String toString(){
		return String.format("[号码:%s,出生:%s,性别:%s]",number,birthday,sex ? '男' : '女');
	}
	public static void main(String[] args) {
		System.out.println("请输入您要查询的身份证号码：");
		IdCard id = new IdCard();
		String number = "360732199906090068";
		id.setNumber (number);
		if(id.checkNumber(number))
		{
			if(id.checkBirthDay(id.setBirthday(number)))
			{
				id.setSex(number);
				System.out.println(id.toString());
			}
			else
				System.out.println("输入身份证号出生日期错误");
		}
		else
			System.out.println("输入身份证号错误");		
		}
	}
