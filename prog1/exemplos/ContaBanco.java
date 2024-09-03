package prog1.exemplos;

public class ContaBanco {
    int numero;
    String titular;
    String dataNascimento;
    String cpf;
    double saldo;

    void depositar (double valorDeposito) {
        this.saldo = this.saldo+valorDeposito;
    }
}
