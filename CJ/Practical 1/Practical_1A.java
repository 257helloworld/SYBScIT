/* Write a java program that takes a number as input and prints its multiplication table upto 10 */

import java.util.Scanner;

class Practical_1A {
    public static void main(String args[]) {
        int n;
        Scanner s = new Scanner(System.in);
        System.out.println("-----* Table *-----");
        System.out.print("Enter a number: ");
        n = s.nextInt();
        System.out.println("-------------------");
        System.out.println("Table of " + n);
        for(int i = 1; i <= 10; i++){
            System.out.println(n + " x " + i + " = " + (n * i));
        }
    }
}
