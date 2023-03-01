/* Write a program to implement thread life cycle. */

class Cycle extends Thread {
    public void run(String name) {
        System.out.println(String.format("\nRunning %s...",name));
    }
}

public class Practical_7B {
    public static void main(String[] args) {
        Cycle c1 = new Cycle();
        Cycle c2 = new Cycle();
        System.out.println("\nThread 1: " + c1.getState());
        System.out.println("Thread 2: " + c2.getState());
        c1.start();
        c1.run("Thread 1");
        System.out.println("\nThread 1:" + c1.getState());
        System.out.println("Thread 2: " + c2.getState());
        c2.start();
        c2.run("Thread 2");
        System.out.println("\nThread 1:" + c1.getState());
        System.out.println("Thread 2: " + c2.getState());
    }
}
