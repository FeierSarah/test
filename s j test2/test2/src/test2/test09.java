package test2;

import java.io.*;
public class test09
{
 static int year,month,day;

 public static long firstDayofYear(int y)
 {
  long n;
  n = 365*y;
  for(int i = 1;i < y;i++)
   if(leapyear(i))
    n++;
  return (int)(n%7);
 }

 public static void DateForm(String str)
 {
  if(str.length() != 10)
  {
   System.out.println("�����ʽ�д�");
   return ;
  }

  year = Integer.parseInt(str.substring(0,4));
  month = Integer.parseInt(str.substring(5,7));
  day = Integer.parseInt(str.substring(8,10));

  if(year<0||month<=0||month>12||day<=0||day>31)
  {
   System.out.println("�������ݴ���");
   return ;
  }

  if(month==4 || month==6 || month==9 || month==11)
  {
   if(day > 30)
   {
    System.out.println("�������ݴ���");
    return ;
   }
  }

  if(month == 2)
  {
   if(leapyear(year) && day>29)
   {
    System.out.println("�������ݴ���");
    return ;
   }
   else
    if(leapyear(year)==false && day>28)
    {
     System.out.println("�������ݴ���");
     return ;
    }
  }
  printmonth();
 }

 public static boolean leapyear(int y)
 {
  boolean isleapyear = true;
  if((y%4==0 && y%100!=0) || y%400 == 0)
   return isleapyear;
  else
  {
   isleapyear = false;
   return isleapyear;
  }
 }

 public static int monthofDay(int month)
 {
  if(month==1||month==3||month==5||month==7
    ||month==8||month==10||month==12)
   return 31;
  if(month==4||month==6||month==9||month==11)
   return 30;
  if(month==2)
  {
   if(leapyear(year))
    return 29;
   else
    return 28;
  }
  else
   return 0;
 }

 public static void printmonth()
 {
  long l = firstDayofYear(year);
  System.out.println(month +" ��");
  System.out.println("=====================");
  System.out.println("��    һ   ��    ��   ��    ��   ��");
  for(int k = 1;k <= l;k++)
  {
   System.out.print("   ");
  }  
  for(int d = 1;d <= monthofDay(month);d++)
  {
   if(d < 10)
    System.out.print(d + "  ");
   else
    System.out.print(d + " ");
   l = (l+1) % 7;
   if(l == 0)
    System.out.println();
  }
 }
 public static void main(String[] args)throws IOException
 {
  // TODO �Զ����ɵķ������
  System.out.println("����ĳ��ĳ��ĳ��(��ʽ��xxxx/xx/xx)��");
  BufferedReader in = new BufferedReader(new
    InputStreamReader(System.in));
  String s = in.readLine();
  DateForm(s);//����DateForm()����  
 }
}