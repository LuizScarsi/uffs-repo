package prog1.herancaExercicios.ex61;

public class DispositivoEletronico {
    private String marca;
    private String modelo;
    private int armazenamento;

    DispositivoEletronico(String marca, String modelo, int armazenamento) {
        this.marca = marca;
        this.modelo = modelo;
        this.armazenamento = armazenamento;
    }

    public void ligar() {
        System.out.println("O dispositivo está ligado");
    }
}
