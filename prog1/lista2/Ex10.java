package prog1.lista2;

import java.util.Scanner;

public class Ex10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Insere a idade ai:");
        double idade = sc.nextFloat();
        System.out.println((int) idade);
        sc.close();
    }
}