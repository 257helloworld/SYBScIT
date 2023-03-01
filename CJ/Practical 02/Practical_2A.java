/* Write a program to add two binary numbers. */

import java.util.Scanner;

public class Practical_2A {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("---------* Binary Addition *----------\n");
        System.out.print("First Number: ");
        String b1 = s.next();

        System.out.print("Second Number: ");
        String b2 = s.next();

        int d1 = Integer.parseInt(b1,2);
        int d2 = Integer.parseInt(b2,2);

        String binarySum = Integer.toBinaryString(d1+d2);

        // Format binarySum. Ex. 101 -> 0101 (4 digit)
        String result = String.format("%4s",binarySum).replaceAll(" ","0");
        System.out.println("Addition: " + result);

        s.close();
    }
}