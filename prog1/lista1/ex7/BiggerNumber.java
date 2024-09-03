package ex7;

import java.util.Scanner;

public class BiggerNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("n1:");
        int n1 = sc.nextInt();

        System.out.println("n2:");
        int n2 = sc.nextInt();

        int bigger = n1 > n2 ? n1 : n2;
        System.out.printf("The biggest number between %d and %d is: %d\n", n1, n2, bigger);
        sc.close();
    }
}
