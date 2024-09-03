package prog1.construtoresEncapsulamento.Conta;

public class Teste {
    public static void main(String[] args) {
        Conta contaLuiz = new Conta("Luiz Augusto Scarsi", 2, 2, "Corrente", "05/02/1999");
        System.out.printf("Titular: %s\nAgencia: %d\nNumero: %d\nSaldo: %.2f\nTipo da conta: %s\nData de nascimento: %s\n\n",
         contaLuiz.getTitular(), contaLuiz.getAgencia(), contaLuiz.getNumero(), contaLuiz.getSaldo(), contaLuiz.getTipoConta(), contaLuiz.getNascimentoTitular());
        contaLuiz.depositar(200);
        System.out.printf("Titular: %s\nAgencia: %d\nNumero: %d\nSaldo: %.2f\nTipo da conta: %s\nData de nascimento: %s\n\n",
         contaLuiz.getTitular(), contaLuiz.getAgencia(), contaLuiz.getNumero(), contaLuiz.getSaldo(), contaLuiz.getTipoConta(), contaLuiz.getNascimentoTitular());
    }
}
