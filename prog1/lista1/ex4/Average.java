package ex4;

import java.util.Scanner;

public class Average {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("n1:");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int n3 = sc.nextInt();
        double average = (double) (n1+n2+n3)/3;
        System.out.printf("%.2f", average);
        sc.close();
    }
}
