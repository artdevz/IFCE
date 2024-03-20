import java.util.Calendar;
import java.util.Date;

public class Ferias {

    // Métodos da Classe:
    public void tirarFerias(String nome) {
        exibirMensagemFerias(nome, 30);        
    }

    public void tirarFerias(String nome, int dias) {
        exibirMensagemFerias(nome, dias);
    }

    private void exibirMensagemFerias(String nome, int dias) {

        Date data = new Date();
        Calendar c = Calendar.getInstance(); 
        c.setTime(data); 
        c.add(Calendar.DATE, dias);
        data = c.getTime();
        
        System.out.printf("%s irá tirar férias (%d Dias). Seu retorno está marcado para: %s.\n", nome, dias, data);

    }
    
}
