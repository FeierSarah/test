package library;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

public class LibraryTest {
	public static void main(String[] args) throws Exception {
		FileReader fr=new FileReader("d:\\Book.txt");
		BufferedReader br=new BufferedReader(fr);
		List <Book> o=new ArrayList<>();
		String str=br.readLine();
		String[] array = new String[6];
		while(str!=null) {
			array=str.split("£¬",6);
			Book book=new Book(array[0],array[1],array[2],array[3],
					Double.parseDouble(array[4]),Integer.parseInt(array[5]));
			o.add(book);
			str=br.readLine();
		}
		Search.AllSearch(o);
		Search.PnameSearch(o, "D");
		Search.ISBNSearch(o, "2-2");
		Search.PageSearch(o, 150);
	}
}