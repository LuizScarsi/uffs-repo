package prog1.construtoresEncapsulamento.Funcionario;

public class Funcionario {
    private String nome;
    private double salario;
    private String dataNascimento;

    Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    Funcionario(String nome, double salario, String dataNascimento) {
        this.nome = nome;
        this.salario = salario;
        this.dataNascimento = dataNascimento;
    }

    public String getNascimento() {
        return this.dataNascimento;
    }

    public void setNascimento(String nascimento) {
        this.dataNascimento = nascimento;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return this.salario;
    }

    public void setSalario(double novoSalario) {
        this.salario = novoSalario;
    }
}
