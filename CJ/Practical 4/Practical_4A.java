/* Design a class SortData that contains the method asec() and desc() */

import java.util.Scanner;

class SortData {
    public void asec(int arr[], int size) {
        for(int i = 0; i < size; i++) {
            for(int j = i+1; j < size ; j++) {
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printArray(arr,size);
    }

    public void desc(int arr[], int size) {
        for(int i = 0; i < size; i++) {
            for(int j = i+1; j < size ; j++) {
                if(arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printArray(arr,size);
    }
    
    public void printArray(int arr[],int size) {
        for(int i = 0; i < size; i++) {
            if(i == 0) {
                System.out.print(arr[i]);
            } else {
                System.out.print(", " + arr[i]);
            }
        }
        System.out.println();
    }
}

class Practical_4A {
    public static void main(String[] args) {
        int size;
        Scanner s = new Scanner(System.in);

        System.out.println("------* SortData *------");
        System.out.print("Enter size of array: ");
        size = s.nextInt();
        System.out.println("------------------------");
        
        int arr[] = new int[size];
        // Taking array elements input
        System.out.print("Enter array elements: ");
        for(int i = 0; i < size; i++) {
            arr[i] = s.nextInt();
        }

        SortData sd = new SortData();

        // Printing array
        System.out.print("Array: ");
        sd.printArray(arr,size);

        // Ascending
        System.out.print("Ascending Array: ");
        sd.asec(arr, size);

        // Descending
        System.out.print("Descending Array: ");
        sd.desc(arr,size);

        s.close();
    }
}