package lab11;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Scanner;

public class bai3 {
	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(new File("bai1.txt"));
			PrintStream ps = new PrintStream(new File("test1.txt"));
			int dong=1;
			while(sc.hasNext()) {
				ps.println(dong +": " +sc.nextLine());
				dong++;
			}
			
			System.out.println("da sao chep thanh cong");
			sc.close();
			ps.close();
		}catch(FileNotFoundException e) {
			e.printStackTrace();
		}
	}
}
