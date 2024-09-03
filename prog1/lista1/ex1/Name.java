package ex1;
import java.util.Scanner;

public class Name {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Insert name: ");

        String name = sc.nextLine();
        System.out.printf("Name: %s\n", name);
        sc.close();
    }
}