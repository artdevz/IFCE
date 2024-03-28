public class Estacao {

    // Atributos:
    private Linha linhas[];
    private int quantidadeLinhas = 0;
    private int estacionadoVagao;
    private int estacionadoTrem;
    private int estacionadoLocomotiva;
    private String sigla;
    private String descricao;

    // Construtores:
    public Estacao(Linha nomeDaLinha) {
        // this.linhas[quantidadeLinhas] = nomeDaLinha;
        this.quantidadeLinhas++;
        // Estação Vazia:
        this.estacionadoVagao = 0;
        this.estacionadoTrem = 0;
        this.estacionadoLocomotiva = 0; 
    }

    public Estacao(Linha nomeDaLinha, int estacionadoTrem, int estacionadoVagao, int estacionadoLocomotiva) {
        // this.linhas[quantidadeLinhas] = nomeDaLinha;
        this.quantidadeLinhas++;
        // Estação Não Vazia:
        this.estacionadoTrem = estacionadoTrem;
        this.estacionadoVagao = estacionadoVagao;
        this.estacionadoLocomotiva = estacionadoLocomotiva;        
    }

    // Métodos:
    public void estacionarTrem(Trem nomeDoTrem) {
        System.out.printf("O Trem %s foi estacionado.\n", nomeDoTrem.getPrefixo());
        this.estacionadoTrem++;
        this.estacionadoVagao += nomeDoTrem.getVagoes();
        this.estacionadoLocomotiva += nomeDoTrem.getLocomotivas();
    }

    // GettersAndSetters:
    public int getQuantidadeLinhas() {
        return quantidadeLinhas;
    }

    public void setQuantidadeLinhas(int quantidadeLinhas) {
        this.quantidadeLinhas = quantidadeLinhas;
    }

    public Linha[] getLinhas() {
        return linhas;
    }

    public void setLinhas(Linha[] linhas) {
        this.linhas = linhas;
    }

    public int getEstacionadoVagao() {
        return estacionadoVagao;
    }

    public void setEstacionadoVagao(int estacionadoVagao) {
        this.estacionadoVagao = estacionadoVagao;
    }

    public int getEstacionadoTrem() {
        return estacionadoTrem;
    }

    public void setEstacionadoTrem(int estacionadoTrem) {
        this.estacionadoTrem = estacionadoTrem;
    }

    public int getEstacionadoLocomotiva() {
        return estacionadoLocomotiva;
    }

    public void setEstacionadoLocomotiva(int estacionadoLocomotiva) {
        this.estacionadoLocomotiva = estacionadoLocomotiva;
    }

    public String getSigla() {
        return sigla;
    }

    public void setSigla(String sigla) {
        this.sigla = sigla;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

}