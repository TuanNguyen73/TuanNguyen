package lab11;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Scanner;

public class bai2 {


 static void main(String[] args) {
		try {
			Scanner sc = new Scanner(new File("bai.txt"));
			PrintStream ps = new PrintStream(new File("test1.txt"));
				String s = "";
				while(sc.hasNext()) {
					for (int i = 0; i<s.length(); i++)
						ps.println(s.charAt(i));
			
				}
				System.out.println("da sao chep thanh cong");
				sc.close();
				ps.close();
			sc.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
	}

}
