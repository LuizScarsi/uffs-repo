package prog1.construtoresEncapsulamento.Cliente;

public class Teste {
    public static void main(String[] args) {
        Cliente luiz = new Cliente("Luiz", "23498722801", "02/03/1999", "999559023");
        System.out.printf("Nome: %s\nCPF: %s\nNascimento: %s\nTelefone: %s\n\n", luiz.getNome(), luiz.getCPF(), luiz.getNascimento(), luiz.getTelefone());
    }
}
