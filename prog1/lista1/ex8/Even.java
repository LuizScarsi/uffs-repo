package ex8;

import java.util.Scanner;

public class Even {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Insert a number:");
        int n1 = sc.nextInt();
        String result = ((n1 & 1) == 0) ? "even" : "odd";
        System.out.printf("The number %d is: %s\n", n1, result);
        sc.close();
    }
}
