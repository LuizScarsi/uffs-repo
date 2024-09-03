package prog1.construtoresEncapsulamento.Banco;

public class TesteBanco {
    public static void main(String[] args) {
        // Criação de um objeto Banco usando o construtor com todos os atributos
        Banco banco1 = new Banco("Banco do Brasil", "BB", "00.000.000/0001-91", "01/01/1808");
        
        // Exibindo os dados do banco
        System.out.printf("Razão Social: %s\n", banco1.getRazaoSocial());
        System.out.printf("Nome Fantasia: %s\n", banco1.getNomeFantasia());
        System.out.printf("CNPJ: %s\n", banco1.getCnpj());
        System.out.printf("Data de Criação: %s\n", banco1.getDataCriacao());
        System.out.printf("Endereço: %s\n", banco1.getEndereco() != null ? banco1.getEndereco() : "Não disponível");
        System.out.printf("Telefone: %s\n", banco1.getTelefone() != null ? banco1.getTelefone() : "Não disponível");
        System.out.println();

        // Modificando alguns valores usando setters
        banco1.setEndereco("Avenida Paulista, 1000");
        banco1.setTelefone("(11) 99999-9999");

        // Exibindo os dados atualizados do banco
        System.out.printf("Razão Social: %s\n", banco1.getRazaoSocial());
        System.out.printf("Nome Fantasia: %s\n", banco1.getNomeFantasia());
        System.out.printf("CNPJ: %s\n", banco1.getCnpj());
        System.out.printf("Data de Criação: %s\n", banco1.getDataCriacao());
        System.out.printf("Endereço: %s\n", banco1.getEndereco());
        System.out.printf("Telefone: %s\n", banco1.getTelefone());
    }
}
