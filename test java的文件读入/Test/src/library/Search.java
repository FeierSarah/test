package library;

import java.util.List;

public class Search {
	public static void PageSearch(List<Book> o,int page) {
		if(page<0) 
			return;
		int count=0;
		for(Book i:o) {
			if(i.getPage()>=page) {
				count++;
				}
			}
		System.out.println("ҳ��������"+page+"���鼮����:"+count);
	}
	public static void PnameSearch(List<Book> o,String str) {
		int kind=0;
		double prices=0;
		for(Book i:o) {
		if(i.getPname().equals(str)) {
			kind++;
			prices+=i.getPrice();
			}
		}
		if(kind==0) {
			try {
				throw new Exception("no such books");
			} 
			catch (Exception e) {
				e.printStackTrace();
			}
		}
		System.out.println("������"+str+"��"+kind+"������ܼ۸�:"+prices);
	}
	public static void ISBNSearch(List<Book> o,String str) throws Exception {
		Boolean count=false;
		for(Book i:o) {
			if(i.getISBN().equals(str)) {
				System.out.println("����:"+i.getBname()+" ����:"+i.getWriter()+" ������:"+i.getPname());
				count=true;
			}
		}
		if(!count) {
			throw new Exception("no such ISBN");
		}
	}
	public static void AllSearch(List<Book> o) {
		for(Book i:o) {
			System.out.println(i.toString());
		}
	}
}
