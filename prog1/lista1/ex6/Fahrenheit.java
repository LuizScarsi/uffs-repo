package ex6;

import java.util.Scanner;

public class Fahrenheit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Celsius:");
        double celsius = sc.nextFloat();

        double fahrenheit = (1.8*celsius)+32;
        System.out.printf("Fahrenheit: %.2f\n", fahrenheit);
        sc.close();
    }
}
