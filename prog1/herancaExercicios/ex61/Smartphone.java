package prog1.herancaExercicios.ex61;

public class Smartphone extends DispositivoEletronico {
    private String numeroTelefone;

    Smartphone(String marca, String modelo, int armazenamento, String numeroTelefone) {
        super(marca, modelo, armazenamento);
        this.numeroTelefone = numeroTelefone;
    }

    public void fazerChamada(String numeroDestino) {
        System.out.printf("Chamando para o número %s...\n", numeroDestino);
    }
}
