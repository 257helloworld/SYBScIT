/* Write a java program to copy contents of one file to another */

import java.io.*;

public class Practical_8B {
    static String file1 = "file_a.txt";
    static String file2 = "file_b.txt";
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader(file1);
            FileWriter fw = new FileWriter(file2);

            System.out.println(String.format("------* %s to %s *------",file1,file2));
            int i = 0;
            while ((i = fr.read()) != -1) {
                fw.write((char)i);
            }
            System.out.println("Copied Successfully!");
            fr.close();
            fw.close();
        } catch(Exception e) {
            System.out.println(e);
        }
    }
}
