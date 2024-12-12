package prog1.herancaExercicios.ex61;

public class Notebook extends DispositivoEletronico {
    private String sistemaOperacional;

    Notebook(String marca, String modelo, int armazenamento, String sistemaOperacional) {
        super(marca, modelo, armazenamento);
        this.sistemaOperacional = sistemaOperacional;
    }

    public void executarPrograma(String programa) {
        System.out.printf("Executando %s...\n", programa);
    }
}
