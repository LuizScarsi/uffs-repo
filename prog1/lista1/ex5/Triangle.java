package ex5;

import java.util.Scanner;

public class Triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Base:");
        double base = sc.nextFloat();
        System.out.println("Height:");
        double height = sc.nextFloat();

        double area = (base*height)/2;

        System.out.printf("Area: %.2f\n", area);
        sc.close();
    }
}
