package prog1.herancaExercicios;

public class Notebook extends DispositivoEletronico {
    private String sistemaOperacional;

    public void executarPrograma(String programa) {
        System.out.printf("Executando %s...\n", programa);
    }
}
