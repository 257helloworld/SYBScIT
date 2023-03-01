/* Write a java program to open a file and display the contents in the console window. */

import java.io.*;

public class Practical_8A {
    static String fileName = "myfile.txt";
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader(fileName);
            System.out.println(String.format("------* %s *------",fileName));
            int i = 0;
            while ((i = fr.read()) != -1) {
                System.out.print((char)i);
            }
            System.out.println();
            fr.close();
        } catch(Exception e) {
            System.out.println(e);
        }
    }
}
