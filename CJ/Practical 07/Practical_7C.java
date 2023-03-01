/* Write a program to implement multithreading */

class Thread1 extends Thread {
    public void run() {
        try {
            int i = 0;
            while(i < 5) {
                sleep(1000);
                System.out.println("Good Morning!");
                i++;
            }
        } catch(InterruptedException e) { }
    }
}

class Thread2 extends Thread {
    public void run() {
        try {
            int i = 0;
            while(i < 5) {
                sleep(2000);
                System.out.println("Hello!");
                i++;
            }
        } catch(InterruptedException e) { }
    }
}

public class Practical_7C extends Thread {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();
        t1.start();
        t2.start();
    }
}
