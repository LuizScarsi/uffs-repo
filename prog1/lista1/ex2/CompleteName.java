package ex2;
import java.util.Scanner;

public class CompleteName {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Name: ");
        String name = sc.nextLine();

        System.out.print("Surname: ");
        String surname = sc.nextLine();

        System.out.printf("%s, %s\n", surname, name);
        sc.close();
    }
}
