import java.util.Calendar;
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
        identificador = contador;
        Funcionario.contador++;
    }

    // Métodos da Classe:
    public void tirarFerias() {
        
        Date data = new Date();
        Calendar c = Calendar.getInstance(); 
        c.setTime(data); 
        c.add(Calendar.DATE, 30);
        data = c.getTime();

        System.out.printf("%s irá tirar férias (30 Dias). Seu retorno está marcado para: %s.\n", nome, data);
    }

    public void tirarFerias(int dias) {
        
        Date data = new Date();
        Calendar c = Calendar.getInstance(); 
        c.setTime(data); 
        c.add(Calendar.DATE, dias);
        data = c.getTime();

        System.out.printf("%s irá tirar férias (%d Dias). Seu retorno está marcado para: %s.\n", nome, dias, data);
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
