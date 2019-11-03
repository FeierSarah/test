import java.io.*;
import java.util.*;
//学生信息文件处理类
public class StudentDeal {
	public static String findNumByName(String name)
	{
		String result="查无此人";
		try {
			FileReader fr=new FileReader("d:\\student.txt");
			BufferedReader br=new BufferedReader(fr);
			String str=br.readLine();
			while(str!=null)
			{
				String[] infos=str.split(",");
				if(infos[1].equals(name))
				{
					result=infos[0];
					break;
				}
				str=br.readLine();
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return result;
	}

	
	public static String findNameByNum(String num)
	{
		String result="查无此人";
		try {
			FileReader fr=new FileReader("d:\\student.txt");
			BufferedReader br=new BufferedReader(fr);
			String str=br.readLine();
			while(str!=null)
			{
				String[] infos=str.split(",");
				if(infos[0].equals(num))
				{
					result=infos[1];
					break;
				}
				str=br.readLine();
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return result;
	}
	
	public static int getSexCount(String sex)
	{
		int result=0;
		try {
			FileReader fr=new FileReader("d:\\student.txt");
			BufferedReader br=new BufferedReader(fr);
			String str=br.readLine();
			while(str!=null)
			{
				String[] infos=str.split(",");
				if(infos[2].equals(sex))
				{
					result++;
				}
				str=br.readLine();
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return result;
	}
	
	public void addStudent(StduentInfo stu)
	{
		if(!numIsExist(stu.getNum()))
		{
			try {
				FileWriter fw = new FileWriter("d:\\student.txt", true);
				BufferedWriter bw = new BufferedWriter(fw);
				StringBuffer str = new StringBuffer();
				str.append(stu.getNum() + ",");
				str.append(stu.getName() + ",");
				str.append(stu.getSex());
				bw.newLine();
				bw.write(str.toString());
				bw.close();
				fw.close();
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	private boolean numIsExist(String num)
	{
		boolean result=false;
		try {
			FileReader fr=new FileReader("d:\\student.txt");
			BufferedReader br=new BufferedReader(fr);
			String str=br.readLine();
			while(str!=null)
			{
				String[] infos=str.split(",");
				if(infos[0].equals(num))
				{
					result=true;
					break;
				}
				str=br.readLine();
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return result;
	}
	
	public void updateStudent(StduentInfo stu)
	{
		if(numIsExist(stu.getNum()))	
		{
			ArrayList list=getAllStudents();
			//获取所有的学生对象
			for(int i=0;i<list.size();i++)
			{
				String[] infos=list.get(i).toString().split(",");
				if(infos[0].equals(stu.getNum()))
				{
					list.remove(i);
					StringBuffer str = new StringBuffer();
					str.append(stu.getNum() + ",");
					str.append(stu.getName() + ",");
					str.append(stu.getSex());
					list.add(str.toString());
				}
			}
			try {
				FileWriter fw = new FileWriter("d:\\student.txt");
				BufferedWriter bw = new BufferedWriter(fw);
				for(int i=0;i<list.size();i++)
				{
					bw.write(list.get(i).toString());
					bw.newLine();
				}
				bw.close();
				fw.close();
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
	
	public ArrayList getAllStudents()
	{
		ArrayList list=new ArrayList();
		try {
			FileReader fr=new FileReader("d:\\student.txt");
			BufferedReader br=new BufferedReader(fr);
			String str=br.readLine();
			while(str!=null)
			{
				list.add(str);
				str=br.readLine();
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return list;
	}
	
	public void deleteStudent(String num)
	{
		if(numIsExist(num))	
		{
			ArrayList list=getAllStudents();
			//获取所有的学生对象
			for(int i=0;i<list.size();i++)
			{
				String[] infos=list.get(i).toString().split(",");
				if(infos[0].equals(num))
				{
					list.remove(i);
				}
			}
			try {
				FileWriter fw = new FileWriter("d:\\student.txt");
				BufferedWriter bw = new BufferedWriter(fw);
				for(int i=0;i<list.size();i++)
				{
					bw.write(list.get(i).toString());
					bw.newLine();
				}
				bw.close();
				fw.close();
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
}
