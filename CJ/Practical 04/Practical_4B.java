/* Design a class that demonstrates the use of constructor */

import java.util.Scanner;

class Addition {
    public Addition(int a, int b) {
        System.out.println("Addition: " + (a + b));
    }
}

public class Practical_4B {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int a, b;
        System.out.println("------* Constructor *------");
        System.out.print("Enter 2 numbers: ");
        a = s.nextInt();
        b = s.nextInt();
        System.out.println("------------------------");
        Addition a1 = new Addition(a,b);
        s.close();
    }
}
