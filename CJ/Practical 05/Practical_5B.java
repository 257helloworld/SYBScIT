/* Write a java program to implement method overriding */

import java.util.Scanner;

interface Area {
    double area(double a, double b);
}

class Rectangle implements Area {
    public double area(double l, double b) {
        return (l * b);
    }
}

class Circle implements Area {
    public double area(double r, double pi) {
        return (pi * r * r);
    }
}

public class Practical_5B {
    public static void main(String[] args) {
        double a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("------* Method Overriding *------");
        
        System.out.print("Enter length & breadth of rectangle: ");
        a = s.nextInt();
        b = s.nextInt();
        System.out.println("------------------------");
        Rectangle r1 = new Rectangle();
        System.out.println("Area of rectangle: " + r1.area(a, b));
        System.out.println("------------------------");

        System.out.print("Enter radius of circle: ");
        a = s.nextDouble();
        System.out.println("------------------------");
        Circle c1 = new Circle();
        System.out.println("Area of circle: " + c1.area(a,3.14));

        s.close();
    }
}
