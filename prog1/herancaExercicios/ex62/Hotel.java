package prog1.herancaExercicios.ex62;

public class Hotel extends Acomodacao {
    private int classificacao;

    public Hotel(String nome, String localizacao, double precoPorNoite, int classificacao) {
        super(nome, localizacao, precoPorNoite);
        this.classificacao = classificacao;
    }

    public double calcularPrecoTotal(int numeroDeNoites) {
        double valor = getPrecoPorNoite()*numeroDeNoites;
        double desconto = valor*0.1;
        return valor - desconto;
    }
}
