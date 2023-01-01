/* Write a java program to demonstrate the implementation of abstract class. */

import java.util.Scanner;

abstract class Shape {
    // public abstract void area();
}

class Circle extends Shape {
    double pi = 3.14;
    public void area(double r) {
        System.out.println("Area of Circle: " + (pi * r * r));
    }
}

class Triangle extends Shape {
    public void area(double base, double height) {
        System.out.println("Area of Triangle: " + (0.5 * base * height));
    }
}

class Rectangle extends Shape {
    public void area(double length, double breadth) {
        System.out.println("Area of Rectangle: " + (length * breadth));
    }
}

public class Practical_4C {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        System.out.println("--------* Area *--------");
        System.out.print("Enter radius of Circle: ");
        double r = s.nextDouble();
        Circle c1 = new Circle();
        c1.area(r);
        System.out.println("------------------------");

        System.out.print("Enter base & height of Triangle: ");
        double base = s.nextDouble();
        double height = s.nextDouble();
        Triangle t1 = new Triangle();
        t1.area(base, height);
        System.out.println("------------------------");

        System.out.print("Enter length & breadth of Rectangle: ");
        double length = s.nextDouble();
        double breadth = s.nextDouble();
        Rectangle r1 = new Rectangle();
        r1.area(length, breadth);
        System.out.println("------------------------");
    }
}
