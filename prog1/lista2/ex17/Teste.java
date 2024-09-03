package prog1.lista2.ex17;

public class Teste {
    public static void main(String[] args) {
        Conta conta1 = new Conta();
        System.out.println(conta1.saldo);
        conta1.depositar(1000);
        System.out.println(conta1.saldo);
        conta1.sacar(200);
        System.out.println(conta1.saldo);
    }
}
