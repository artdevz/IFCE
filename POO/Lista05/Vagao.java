public class Vagao {
    
    // Atributos:
    private String numeroDeSerie;
    private String tipo;
    private double capacidade;
    private double comprimentoTesteiras;
    private double comprimentoEngates;

    // Construtor:    
    public Vagao(String numeroDeSerie, String tipo, double capacidade, double comprimentoTesteiras, double comprimentoEngates) {
        
        if ((capacidade <= 0) || (comprimentoTesteiras <= 0) || (comprimentoEngates <= 0) ) {
            System.err.println("[ERRO]: Use valores positivos e não nulos.");
        } else {
            this.numeroDeSerie = numeroDeSerie;
            this.tipo = tipo;
            this.capacidade = capacidade;
            this.comprimentoTesteiras = comprimentoTesteiras;
            this.comprimentoEngates = comprimentoEngates;
        }        
    }

    // GettersAndSetters:
    public String getNumeroDeSerie() {
        return numeroDeSerie;
    }
    public void setNumeroDeSerie(String numeroDeSerie) {
        this.numeroDeSerie = numeroDeSerie;
    }
    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    public double getCapacidade() {
        return capacidade;
    }
    public void setCapacidade(double capacidade) {
        this.capacidade = capacidade;
    }
    public double getComprimentoTesteiras() {
        return comprimentoTesteiras;
    }
    public void setComprimentoTesteiras(double comprimentoTesteiras) {
        this.comprimentoTesteiras = comprimentoTesteiras;
    }
    public double getComprimentoEngates() {
        return comprimentoEngates;
    }
    public void setComprimentoEngates(double comprimentoEngates) {
        this.comprimentoEngates = comprimentoEngates;
    }
    
}
