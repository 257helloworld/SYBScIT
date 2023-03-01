/* Create a package, add the necessary classes and import the packages in java class */

import java.util.Scanner;
import Area.*;

public class Practical_6A {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double side, length, breadth, base, height;
        System.out.println("------* Package *------");
        System.out.print("Enter side of square: ");
        side = s.nextDouble();
        System.out.println("-----------------------");
        Square s1 = new Square();
        System.out.println("Area of Square: " + s1.area(side));
        System.out.println("-----------------------");

        System.out.print("Enter length & breadth of rectangle: ");
        length = s.nextDouble();
        breadth = s.nextDouble();
        System.out.println("-----------------------");
        Rectangle r1 = new Rectangle();
        System.out.println("Area of rectangle: " + r1.area(length, breadth));
        System.out.println("-----------------------"); 
        
        System.out.print("Enter base & height of triangle: ");
        base = s.nextDouble();
        height = s.nextDouble();
        System.out.println("-----------------------");
        Triangle t1 = new Triangle();
        System.out.println("Area of Triangle: " + t1.area(base, height));
        System.out.println("-----------------------");

        s.close();
    }

}