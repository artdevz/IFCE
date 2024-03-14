// Questão 3, 4, 5 e 6:

/*
 * Resposta Q4: Não acho necessário, pois o Contador crescerá constantemente uniforme.
 */

import java.text.ParseException;
import java.text.SimpleDateFormat;
//import java.util.Date;

public class Principal {

    public static void main(String[] args) throws ParseException {
        
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        
        Funcionario pessoa1 = new Funcionario("Arthur");
        pessoa1.setDataAdmissao(sdf.parse("16/11/2014"));
        pessoa1.setSalario(1984.00);

        Funcionario pessoa2 = new Funcionario("PessoaB");
        pessoa2.setDataAdmissao(sdf.parse("13/03/2024"));
        pessoa2.setSalario(1412.00);

        Funcionario pessoa3 = new Funcionario("PessoaC");
        pessoa3.setDataAdmissao(sdf.parse("05/12/2009"));
        pessoa3.setSalario(2650.00);

        Funcionario pessoa4 = new Funcionario("PessoaD");
        pessoa4.setDataAdmissao(sdf.parse("28/11/2021"));
        pessoa4.setSalario(1050.00); // Questão 5: Testando Salário abaixo de 1100 Reais.

        Funcionario pessoa5 = new Funcionario("PessoaE");
        pessoa5.setDataAdmissao(sdf.parse("01/04/2024")); // Questão 6: Testando Data Futura.
        pessoa5.setSalario(1412.00);

        exibirInfo(pessoa1);
        exibirInfo(pessoa2);
        exibirInfo(pessoa3);
        exibirInfo(pessoa4);
        exibirInfo(pessoa5);

    }

    public static void exibirInfo(Funcionario pessoa) {
        System.out.printf("\nNome: %s\nID: [#%d]\nData de Admissão: %s\nSalário: R$ %.2f\n", pessoa.getNome(), pessoa.getIdentificador(), pessoa.getDataAdmissao(), pessoa.getSalario());
    }

}