import java.text.ParseException;
import java.text.SimpleDateFormat;

public class Principal {

    public static void main(String[] args) throws ParseException {
        
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        
        Funcionario pessoa1 = new Funcionario("Arthur");
        pessoa1.setDataAdmissao(sdf.parse("16/11/2014"));
        pessoa1.setSalario(1984.00);

        exibirInfo(pessoa1);
        pessoa1.tirarFerias();
        pessoa1.tirarFerias(45);

    }

    public static void exibirInfo(Funcionario pessoa) {
        System.out.printf("\nNome: %s\nID: [#%d]\nData de Admissão: %s\nSalário: R$ %.2f\n", pessoa.getNome(), pessoa.getIdentificador(), pessoa.getDataAdmissao(), pessoa.getSalario());
    }

}