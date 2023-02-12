/* Write a program to implement single level inheritance */

import java.util.Scanner;

class Calculator {
    double a, b;
    Scanner s = new Scanner(System.in);
    void input() {
        System.out.print("Enter 2 numbers: ");
        a = s.nextDouble();
        b = s.nextDouble();
    }
}

class Addition extends Calculator {
    public double add() {
        return (a+b);
    }
}

public class Practical_5A {
    public static void main(String[] args) {
        System.out.println("------* Single Inheritance *------");
        Addition a1 = new Addition();
        a1.input();
        System.out.println("----------------------------------");
        System.out.println("Addition: " + a1.add());
    }
}
