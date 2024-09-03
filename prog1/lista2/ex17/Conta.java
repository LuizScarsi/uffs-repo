package prog1.lista2.ex17;

public class Conta {
    String nomeTitular;
    int agencia;
    int numero;
    double saldo;
    String tipoConta;

    void depositar(double valor) {
        this.saldo += valor;
    }

    void sacar(double valor) {
        if (valor > this.saldo) {
            System.out.println("Saldo insuficiente");
        } else {
            this.saldo -= valor;
        }
    }
    
    void transferir(Conta contaDestino, double valor) {
        this.saldo -= valor;
        contaDestino.saldo += valor;
    }
}
