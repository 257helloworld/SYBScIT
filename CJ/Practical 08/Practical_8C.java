/* Write a java program to read student data from user and store it in the file. */

import java.io.*;
import java.util.Scanner;

public class Practical_8C {
    
    static String sname, rno, course;
    static String fileName = "student.txt";

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            FileWriter fw = new FileWriter(fileName);

            System.out.println(String.format("------* %s *------",fileName));
            
            System.out.println("Enter Student Details:");
            System.out.print("Name: ");
            sname = s.next();

            System.out.print("Roll No: ");
            rno = s.next();

            System.out.print("Course: ");
            course = s.next();

            fw.write("Name: " + sname + "\nRoll No: " + rno + "\nCourse: " + course);
            System.out.println("\nRecord stored successfully!");

            fw.close();
        } catch(Exception e) {
            System.out.println(e);
        }

        s.close();
    }
}
