/* Write a java program to print the area & perimeter of a circle */

import java.util.Scanner;

class Practical_1C {
    public static void main(String args[]) {
        double r, pi = 3.14;
        Scanner s = new Scanner(System.in);

        System.out.println("------* Circle *------");
        System.out.print("Enter radius: ");
        r = s.nextDouble();
        System.out.println("----------------------");
        // Area of circle
        System.out.println("Area: " + (pi * r * r));

        // Perimeter of circle
        System.out.println("Perimeter: " + (2 * pi * r));

        s.close();
    }
}
