public class Locomotiva {
    
    // Atributos:
    private int serie;
    private double tracao;
    private double comprimento;

    // Construtor:    
    public Locomotiva(int serie, double tracao, double comprimento) {
        
        if ((tracao <= 0) || (comprimento <= 0) ) {
            System.err.println("[ERRO]: Use valores positivos e não nulos.");
        } else {
            this.serie = serie;
            this.tracao = tracao;
            this.comprimento = comprimento;
        }        
    }

    // Métodos:
    public void acelerar(Trem nomeDoTrem) {
        if (nomeDoTrem.isEmMovimento() == true) {
            System.err.printf("[ERRO]: o Trem %s já está em Movimento!\n", nomeDoTrem.getPrefixo());
        } else if ((nomeDoTrem.isPortasAbertas() == true)) {
            System.err.printf("[ERRO]: o Trem %s está com as Portas Abertas!\n", nomeDoTrem.getPrefixo());
        } else {            
            System.out.printf("[%s]: Acelerando...\n", nomeDoTrem.getPrefixo());
            nomeDoTrem.setEmMovimento(true);
        }
    }

    public void frear(Trem nomeDoTrem) {
        if (nomeDoTrem.isEmMovimento() == false) {
            System.err.printf("[ERRO]: o Trem %s já está em Parado!\n", nomeDoTrem.getPrefixo());
        } else {
            System.out.printf("[%s]: Freando...\n", nomeDoTrem.getPrefixo());
            nomeDoTrem.setEmMovimento(false);
        }
    }
    
    // GettersAndSetters:    
    public int getSerie() {
        return serie;
    }
    public void setSerie(int serie) {
        this.serie = serie;
    }
    public double getTracao() {
        return tracao;
    }
    public void setTracao(double tracao) {
        this.tracao = tracao;
    }
    public double getComprimento() {
        return comprimento;
    }
    public void setComprimento(double comprimento) {
        this.comprimento = comprimento;
    }
        
}
