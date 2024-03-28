import java.util.Date;

public class Trem {
    
    // Atributos:
    private int vagoes;
    private int locomotivas;
    private String prefixo;
    private Date formacao;
    private Estacao origem;
    private Estacao destino;
    private boolean portasAbertas;
    private boolean estacionado;
    private boolean emMovimento;
    
    // Construtores:
    public Trem(int vagoes, int locomotivas, String prefixo, Date formacao, Estacao origem, Estacao destino) {
        if ( (vagoes + locomotivas) > 150) {
            System.err.println("[ERRO]: Um Trem não pode possuir mais de 150 recursos.");
        } if (origem == destino) {
            System.err.println("[ERRO]: A Estação de Origem não pode ser igual à Destino");
        } else {
            this.vagoes = vagoes;
            this.locomotivas = locomotivas;
            this.prefixo = prefixo;
            this.formacao = formacao;
            this.origem = origem;
            this.destino = destino;
            portasAbertas = false;
            estacionado = false;
            emMovimento = false;
        }        
    }

    // Métodos:
    public void abrirFecharPortas(String lado) {
        lado = lado.toUpperCase();

        if (this.emMovimento == true) {
            System.out.printf("[%s]: Não pode Abrir/Fechar as portas em Movimento.", prefixo);
        } else {
            if (this.portasAbertas == true) {
                switch (lado) {
                    case "E":
                    operarPortas("Esquerdo", "Fechadas"); this.portasAbertas = false; 
                    break;                    
                    case "D":
                    operarPortas("Direito", "Fechadas"); this.portasAbertas = false; 
                    break;
                    default:
                    System.err.printf("[ERRO]: %s não é um lado válido. Use [E] ou [D].", prefixo); break;
                }
            } else {
                switch (lado) {
                    case "E":
                    operarPortas("Esquerdo", "Abertas"); this.portasAbertas = true;
                    break;
                    case "D":
                    operarPortas("Direito", "Abertas"); this.portasAbertas = true;
                    break;
                    default:
                    System.err.printf("[ERRO]: %s não é um lado válido. Use [E] ou [D].", prefixo); break;
                }
            }
        }                
    }

    private void operarPortas(String lado, String operacao) {
        System.out.printf("[%s]: As portas do lado %s foram %s!\n", prefixo, lado, operacao);        
    }

    public void acelerar() {
        Locomotiva l = new Locomotiva(1, 5.0, 12);
        l.acelerar(this);
    }

    public void frear() {
        Locomotiva l = new Locomotiva(1, 5.0, 12);
        l.frear(this);
    }

    // GettersAndSetters:
    public int getVagoes() {
        return vagoes;
    }    
    public void setVagoes(int vagoes) {
        this.vagoes = vagoes;
    }
    public int getLocomotivas() {
        return locomotivas;
    }
    public void setLocomotivas(int locomotivas) {
        this.locomotivas = locomotivas;
    }
    public String getPrefixo() {
        return prefixo;
    }
    public void setPrefixo(String prefixo) {
        this.prefixo = prefixo;
    }
    public Date getFormacao() {
        return formacao;
    }
    public void setFormacao(Date formacao) {
        this.formacao = formacao;
    }
    public Estacao getOrigem() {
        return origem;
    }
    public void setOrigem(Estacao origem) {
        this.origem = origem;
    }
    public Estacao getDestino() {
        return destino;
    }
    public void setDestino(Estacao destino) {
        this.destino = destino;
    }
    public boolean isPortasAbertas() {
        return portasAbertas;
    }
    public void setPortasAbertas(boolean portasAbertas) {
        this.portasAbertas = portasAbertas;
    }
    public boolean isEstacionado() {
        return estacionado;
    }
    public void setEstacionado(boolean estacionado) {
        this.estacionado = estacionado;
    }
    public boolean isEmMovimento() {
        return emMovimento;
    }
    public void setEmMovimento(boolean emMovimento) {
        this.emMovimento = emMovimento;
    }   

}
