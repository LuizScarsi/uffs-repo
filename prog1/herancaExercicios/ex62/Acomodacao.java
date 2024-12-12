package prog1.herancaExercicios.ex62;

public class Acomodacao {
    private String nome;
    private String localizacao;
    private double precoPorNoite;

    public Acomodacao(String nome, String localizacao, double precoPorNoite) {
        this.nome = nome;
        this.localizacao = localizacao;
        this.precoPorNoite = precoPorNoite;
    }

    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getLocalizacao() {
        return localizacao;
    }
    public void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }
    public double getPrecoPorNoite() {
        return precoPorNoite;
    }
    public void setPrecoPorNoite(double precoPorNoite) {
        this.precoPorNoite = precoPorNoite;
    }

    public double calcularPrecoTotal(int numeroDeNoites) {
        return this.precoPorNoite*numeroDeNoites;
    }
}
