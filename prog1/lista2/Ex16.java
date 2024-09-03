package prog1.lista2;

import java.util.Scanner;

public class Ex16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Insira um numero de linhas:");
        int n1 = sc.nextInt();
        System.out.println();
        for(int i=1; i<=n1; i++) {
            for(int j=1; j<=i; j++) {
                System.out.print(j*i + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
