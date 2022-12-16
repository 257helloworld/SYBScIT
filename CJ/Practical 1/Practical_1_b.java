/* Write a java program to display patterns */

class Practical_1_b {
    public static void pattern1(){
        System.out.println("Pattern 1");
        /*
            *
            * *
            * * *
            * * * *
            * * * * *
        */
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern2(){
        System.out.println("\nPattern 2");
        /*
            1
            1 2
            1 2 3
            1 2 3 4
            1 2 3 4 5
        */
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    public static void pattern3(){
        System.out.println("\nPattern 3");
        /*
            1
            2 2
            3 3 3
            4 4 4 4
            5 5 5 5 5
        */
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }

    public static void pattern4(){
        System.out.println("\nPattern 4");
        /*
            1 2 3 4 5
            1 2 3 4
            1 2 3
            1 2
            1
        */
        for(int i = 5; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    public static void pattern5(){
        System.out.println("\nPattern 5");
        /*
            5 5 5 5 5
            4 4 4 4
            3 3 3
            2 2 
            1
        */
        for(int i = 5; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }

    public static void pattern6(){
        System.out.println("\nPattern 6");
        /*
            1
            2 3
            4 5 6
            7 8 9 10
        */
        int k = 1;
        for(int i = 1; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(k + " ");
                k++;
            }
            System.out.println();
        }
    }

    public static void pattern7(){
        System.out.println("\nPattern 7");
        /*
            *
            * *
            * * *
            * * * *
            * * *
            * *
            *
        */
        for(int i = 1; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i = 3; i >= 1; i--){
            for(int j = i; j >= 1; j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern8(){
        System.out.println("\nPattern 8");
        /*
            * * * *
            * * *
            * *
            *
            * *
            * * *
            * * * *
        */
        for(int i = 4; i >= 1; i--){
            for(int j = i; j >= 1; j--){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i = 2; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern9(){
        System.out.println("\nPattern 9");
        /*
            * * * * *
            * * * *
            * * *
            * *
            *
        */
        for(int i = 5; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        pattern1();
        pattern2();
        pattern3();
        pattern4();
        pattern5();
        pattern6();
        pattern7();
        pattern8();
        pattern9();
    }   
}
