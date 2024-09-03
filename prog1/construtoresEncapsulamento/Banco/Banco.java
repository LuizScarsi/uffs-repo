package prog1.construtoresEncapsulamento.Banco;

public class Banco {
    private String razaoSocial;
    private String nomeFantasia;
    private String cnpj;
    private String dataCriacao;
    private String endereco;
    private String telefone;

    Banco(String razaoSocial, String nomeFantasia, String cnpj, String dataCriacao) {
        this.nomeFantasia = nomeFantasia;
        this.razaoSocial = razaoSocial;
        this.cnpj = cnpj;
        this.dataCriacao = dataCriacao;
    }

    Banco(String razaoSocial, String nomeFantasia, String cnpj, String dataCriacao, String endereco, String telefone) {
        this.nomeFantasia = nomeFantasia;
        this.razaoSocial = razaoSocial;
        this.cnpj = cnpj;
        this.dataCriacao = dataCriacao;
        this.endereco = endereco;
        this.telefone = telefone;
    }

     public String getRazaoSocial() {
        return razaoSocial;
    }

    public void setRazaoSocial(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }

    public String getNomeFantasia() {
        return nomeFantasia;
    }

    public void setNomeFantasia(String nomeFantasia) {
        this.nomeFantasia = nomeFantasia;
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getDataCriacao() {
        return dataCriacao;
    }

    public void setDataCriacao(String dataCriacao) {
        this.dataCriacao = dataCriacao;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
}
