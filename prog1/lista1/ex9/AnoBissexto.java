package ex9;
import java.util.Scanner;

public class AnoBissexto {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um ano: ");
        int ano = sc.nextInt();

        boolean ehBissexto = ((ano & 3) == 0 && ((ano % 100 != 0) || (ano % 400 == 0))) ? true : false;
        String resultado = ehBissexto ? "bissexto" : "não bissexto";
        System.out.println("O ano " + ano + " é " + resultado);
        sc.close();
    }
}