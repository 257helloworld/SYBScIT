/* Write a program for multiplying two matrices and print the product for the same. */

import java.util.Scanner;

public class Practical_6C {
    static void printMatrix(int m[][], int r, int c) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int r, c;
        Scanner s = new Scanner(System.in);
        System.out.println("------* Matrix Addition *------");
        System.out.print("Enter no. of rows & columns: ");
        r = s.nextInt();
        c = s.nextInt();
        int m1[][] = new int[r][c];
        int m2[][] = new int[r][c];
        int mul[][] = new int[r][c];

        System.out.println("Enter values of Matrix 1: ");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                m1[i][j] = s.nextInt();
            }
        }
        System.out.println("Matrix 1: ");
        printMatrix(m1, r, c);
        
        System.out.println("-------------------------------");
        System.out.println("Enter values of Matrix 2: ");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                m2[i][j] = s.nextInt();
            }
        }
        System.out.println("Matrix 2: ");
        printMatrix(m2, r, c);

        // Multiplication
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int n = 0;
                for(int k = 0; k < 3; k++) {
                    n = n + (m1[i][k] * m2[k][j]);
                }
                mul[i][j] = n;
            }
        }   
        System.out.println("-------------------------------");
        System.out.println("Multiplication: ");
        printMatrix(mul, r, c);   

        s.close();
    }
}
