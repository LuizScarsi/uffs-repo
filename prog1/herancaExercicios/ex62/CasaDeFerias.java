package prog1.herancaExercicios.ex62;

public class CasaDeFerias extends Acomodacao {
    private double tamanhoArea;

    public CasaDeFerias(String nome, String localizacao, double precoPorNoite, double tamanhoArea) {
        super(nome, localizacao, precoPorNoite);
        this.tamanhoArea = tamanhoArea;
    }

    public double calcularPrecoTotal(int numeroDeNoites) {
        return (getPrecoPorNoite()*numeroDeNoites)+50;
    }
}
