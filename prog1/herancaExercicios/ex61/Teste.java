package prog1.herancaExercicios.ex61;

public class Teste {
    public static void main(String[] args) {
        Notebook meuNote = new Notebook("lenovo", "ideapad", 500, "linux");
        meuNote.ligar();
        meuNote.executarPrograma("programa legallllll");

        Smartphone celolar = new Smartphone("motorola", "motoE", 250, "1023871982");
        celolar.ligar();
        celolar.fazerChamada("123");
    }
}
