package prog1.exemplos;

public class CriandoObjeto {
    public static void main(String[] args) {
        ContaBanco minhaConta = new ContaBanco();
        minhaConta.cpf = "12319238";
        minhaConta.dataNascimento = "01/01/2000";
        minhaConta.numero = 123;
        minhaConta.saldo = 2;
        minhaConta.titular = "eu";

        System.out.println(minhaConta.saldo);
    }
}
