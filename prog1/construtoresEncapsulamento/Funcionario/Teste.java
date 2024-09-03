package prog1.construtoresEncapsulamento.Funcionario;

public class Teste {
    public static void main(String[] args) {
        Funcionario luizao = new Funcionario("Luiz",2.99, "05/02/1999");
        System.out.printf("Nome: %s\nSalario: %.2f\nNascimento: %s\n\n", luizao.getNome(), luizao.getSalario(), luizao.getNascimento());
        luizao.setSalario(3.99);
        System.out.printf("Nome: %s\nSalario: %.2f\nNascimento: %s\n\n", luizao.getNome(), luizao.getSalario(), luizao.getNascimento());
    }
}
