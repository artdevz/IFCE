import java.text.SimpleDateFormat;
import java.text.ParseException;

public class Controle {

    public static void main(String[] args) throws ParseException {

        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        // Happy Path:
        Linha sul = new Linha(1, 30000, "Centro - Maracanaú");
        Estacao centro = new Estacao(sul);
        Estacao maracanau = new Estacao(sul);        
        Trem linhaSul = new Trem(3, 1, "CE0234", (sdf.parse("15/06/2012")), centro, maracanau);

        // Está na estação do Centro:
        linhaSul.abrirFecharPortas("E");
        linhaSul.abrirFecharPortas("E");
        // Entrou no trem:
        linhaSul.acelerar();
        // Movimentando...
        linhaSul.frear();
        // Está na estação de Maracanaú:
        linhaSul.abrirFecharPortas("D");
        linhaSul.abrirFecharPortas("D");
        // Saiu do trem:
        linhaSul.acelerar();
        
        // Estacionando trem:
        linhaSul.frear();
        maracanau.estacionarTrem(linhaSul);
        System.out.printf("Trens estacionados em Maracanaú: %d\n", maracanau.getEstacionadoTrem());
        System.out.printf("Vagões estacionados em Maracanaú: %d\n", maracanau.getEstacionadoVagao());
        System.out.printf("Locomotivas estacionados em Maracanaú: %d\n", maracanau.getEstacionadoLocomotiva());


    }

}
