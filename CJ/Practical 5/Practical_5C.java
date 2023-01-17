/* Write a java program to implement multiple inheritance */

import java.util.Scanner;

interface Addition {
    double add(double a, double b);
}

interface Subtraction {
    double sub(double a, double b);
}

class Calculator implements Addition,Subtraction {
    public double add(double a, double b) {
        return (a + b);
    }
    public double sub(double a, double b) {
        return (a - b);
    }
}

public class Practical_5C {
    public static void main(String[] args) {
        double a, b;
        System.out.println("------* Multiple Inheritance *------");
        Scanner s = new Scanner(System.in);
        System.out.print("Enter 2 numbers: ");
        a = s.nextDouble();
        b = s.nextDouble();
        System.out.println("------------------------");

        Calculator c1 = new Calculator();

        System.out.println("Addition: " + c1.add(a, b));
        System.out.println("Subtraction: " + c1.sub(a, b));

        s.close();
    }

}
