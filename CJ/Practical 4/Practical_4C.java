/* Write a java program to demonstrate the implementation of abstract class. */

import java.util.Scanner;

abstract class Shape {
    Scanner s = new Scanner(System.in);
	double r,base,height, length, breadth;
    public abstract void area();
}

class Circle extends Shape {
    Scanner s = new Scanner(System.in);
    double pi = 3.14;
    public void area() {
        r = s.nextDouble();
        System.out.println("Area of Circle: " + (pi * r * r));
    }
}

class Triangle extends Shape {
    public void area() {
    base = s.nextDouble();
      	height = s.nextDouble();
        System.out.println("Area of Triangle: " + (0.5 * base * height));
    }
}

class Rectangle extends Shape {
    Scanner s = new Scanner(System.in);
    public void area() {
    	length = s.nextDouble();
        breadth = s.nextDouble();
        System.out.println("Area of Rectangle: " + (length * breadth));
    }
}

public class Practical_4C {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        System.out.println("--------* Area *--------");
        System.out.print("Enter radius of Circle: ");
        Circle c1 = new Circle();
        c1.area();
        System.out.println("------------------------");

        System.out.print("Enter base & height of Triangle: ");
        Triangle t1 = new Triangle();
        t1.area();
        System.out.println("------------------------");

        System.out.print("Enter length & breadth of Rectangle: ");
        Rectangle r1 = new Rectangle();
        r1.area();
        System.out.println("------------------------");

        s.close();
    }
}
