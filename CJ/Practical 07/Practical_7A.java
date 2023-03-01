/* Write a program to implement the vectors. */

import java.util.Vector;

public class Practical_7A {
    public static void main(String[] args) {
        Vector<String> v = new Vector<String>(3);
        v.addElement("Java");
        v.addElement("HTML");
        v.addElement("Python");
        v.addElement("10");
        v.addElement("20");
        v.addElement("30");
        v.addElement("a");

        System.out.println("Vector: " + v);
        System.out.println("Size: " + v.size());
        System.out.println("Capacity: " + v.capacity());
        System.out.println("First Element: " + v.firstElement());
        System.out.println("Last Element: " + v.lastElement());
        System.out.println("Removed Element: " + v.remove(2));
        System.out.println("Contains Python: " + v.contains("Python"));
        System.out.println("2nd Element: " + v.elementAt(2));
        System.out.println("Index of HTML: " + v.indexOf("HTML"));
    }
}
