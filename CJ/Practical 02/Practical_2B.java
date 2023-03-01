/* Write a program to convert a decimal number to binary and vice versa. */

import java.util.Scanner;

public class Practical_2B {
    public static String decimalToBinary(int d) {
        return Integer.toBinaryString(d);
    }

    public static int binaryToDecimal(String b) {
        return Integer.parseInt(b,2);
    }

    public static void main(String[] args) {
        int ch;
        Scanner s = new Scanner(System.in);

        System.out.println("------* Binary & Decimal *-------");
        System.out.print("Select Option:\n1.Decimal to Binary\n2.Binary to Decimal");
        System.out.print("\n\nEnter your choice: ");
        
        ch = s.nextInt();
        
        switch(ch) {
            case 1:
                System.out.print("Enter decimal number: ");
                System.out.println("Binary: " + decimalToBinary(Integer.parseInt(s.next())));
                break;
            case 2:
                System.out.print("Enter binary number: ");
                System.out.println("Decimal: " + binaryToDecimal(s.next()));
                break;
        }
        s.close();

    }
}
