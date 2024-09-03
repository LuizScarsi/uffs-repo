package prog1.lista2;

import java.util.Scanner;

public class Ex14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Insira um numero:");
        int n1 = sc.nextInt();
        int result = n1;
        while(n1>1) {
            result *= n1-1;
            n1--;
        }
        System.out.println(result);
        sc.close();
    }
}
