package ex3;

import java.util.Scanner;

public class Register {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Name:");
        String name = sc.nextLine();

        System.out.println("Height:");
        double height = sc.nextDouble();

        System.out.println("Age:");
        int age = sc.nextInt();

        System.out.printf("Name: %s\n", name);
        System.out.printf("Age: %d, Height: %.2f", age, height);
        sc.close();
    }
}
