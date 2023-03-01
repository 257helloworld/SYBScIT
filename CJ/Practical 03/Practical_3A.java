/* Note: Question number 3C from Practical.
Find the smallest and largest element from the array */

import java.util.Scanner;

public class Practical_3A {

    public static int arraySmallest(int arr[], int size) {
        int small = arr[0];
        for(int i = 1; i < size; i++) {
            if(arr[i] < small) {
                small = arr[i];
            }
        }
        return small;
    }

    public static int arrayLargest(int arr[], int size) {
        int large = arr[0];
        for(int i = 1; i < size; i++) {
            if(arr[i] > large) {
                large = arr[i];
            }
        }
        return large;
    }

    public static void printArray(int arr[],int size) {
        for(int i = 0; i < size; i++) {
            if(i == 0) {
                System.out.print(arr[i]);
            } else {
                System.out.print(", " + arr[i]);
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("------* Array: Smallest & Largest *------");
        System.out.print("Enter size of array: ");
        int size = s.nextInt();
        System.out.println("------------------------");
        
        int arr[] = new int[size];
        
        // Taking array elements input
        System.out.print("Enter array elements: ");
        for(int i = 0; i < size; i++) {
            arr[i] = s.nextInt();
        }

        System.out.print("Array: ");
        printArray(arr,size);

        System.out.println("\nSmallest Element: " + arraySmallest(arr,size));
        System.out.println("Largest Element: " + arrayLargest(arr,size));

        s.close();
    }
}
