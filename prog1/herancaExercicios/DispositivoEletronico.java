package prog1.herancaExercicios;

public class DispositivoEletronico {
    private String marca;
    private String modelo;
    private int armazenamento;

    protected DispositivoEletronico(String marca, String modelo, int armazenamento) {
        this.marca = marca;
        this.modelo = modelo;
        this.armazenamento = armazenamento;
    }

    public void ligar() {
        System.out.println("O dispositivo está ligado");
    }
}
