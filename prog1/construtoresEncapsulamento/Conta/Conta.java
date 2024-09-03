package prog1.construtoresEncapsulamento.Conta;

public class Conta {
    private String nomeTitular;
    private int agencia;
    private int numero;
    private double saldo;
    private String tipoConta;
    private String dataNascimento;

    Conta(String nomeTitular, int agencia, int numero, String tipoConta) {
        this.nomeTitular = nomeTitular;
        this.agencia = agencia;
        this.numero = numero;
        this.tipoConta = tipoConta;
    }

    Conta(String nomeTitular, int agencia, int numero, String tipoConta, String dataNascimento) {
        this.nomeTitular = nomeTitular;
        this.agencia = agencia;
        this.numero = numero;
        this.tipoConta = tipoConta;
        this.dataNascimento = dataNascimento;
    }

    public String getNascimentoTitular() {
        return this.dataNascimento;
    }

    public String getTitular() {
        return this.nomeTitular;
    }

    public int getAgencia() {
        return this.agencia;
    }

    public int getNumero() {
        return this.numero;
    }

    public double getSaldo() {
        return this.saldo;
    }

    public String getTipoConta() {
        return this.tipoConta;
    }

    public void depositar(double valor) {
        this.saldo += valor;
    }

    public void sacar(double valor) {
        if (valor > this.saldo) {
            System.out.println("Saldo insuficiente");
        } else {
            this.saldo -= valor;
        }
    }
    
    public void transferir(Conta contaDestino, double valor) {
        this.saldo -= valor;
        contaDestino.saldo += valor;
    }
}
