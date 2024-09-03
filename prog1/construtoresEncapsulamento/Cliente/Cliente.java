package prog1.construtoresEncapsulamento.Cliente;

public class Cliente {
    private String nome;
    private String cpf;
    private String dataNascimento;
    private String telefone;

    Cliente(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
    }

    Cliente(String nome, String cpf, String dataNascimento, String telefone) {
        this.nome = nome;
        this.cpf = cpf;
        this.dataNascimento = dataNascimento;
        this.telefone = telefone;
    }

    public String getNascimento() {
        return this.dataNascimento;
    }

    public void setNascimento(String nascimento) {
        this.dataNascimento = nascimento;
    }

    public String getTelefone() {
        return this.telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCPF() {
        return this.cpf;
    }

    public void setCPF(String novoCpf) {
        this.cpf = novoCpf;
    }
}
