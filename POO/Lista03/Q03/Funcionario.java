import java.util.Date;

public class Funcionario {
    
    // Atributos de Classe:
    private static int contador = 1;

    // Atributos de Objeto:
    private String nome;
    private Date dataAdmissao;
    private double salario;
    private int identificador;

    // Construtor:
    public Funcionario(String nome) {
        this.nome = nome;
        //this.dataAdmissao = dataAdmissao;
        //this.salario = salario;
        identificador = contador;
        Funcionario.contador++;
    }

    // GettersAndSetters:

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Date getDataAdmissao() {
        return dataAdmissao;
    }

    public void setDataAdmissao(Date dataAdmissao) {
        Date agora = new Date();
        if ( dataAdmissao.compareTo(agora) > 0) {
            System.err.println("[ERRO]: Data de Admissão ainda não aconteceu.");
            System.err.printf("       Funcionário %s precisa de um ajusta na Data de Admissão\n", this.nome);
        } else {
            this.dataAdmissao = dataAdmissao;
        }
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        if (salario < 1100.00) {
            System.err.println("[ERRO]: Salário abaixo de R$ 1100.00 não é permitido.");
            System.err.printf("       Funcionário %s Precisa de um ajuste no Salário.\n", this.nome);
        } else {
            this.salario = salario;
        }
    }

    public int getIdentificador() {
        return identificador;
    }

}
