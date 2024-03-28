public class Linha {
    
    // Atributos:
    private int numero;
    private int extensao;
    private String descricao;

    // Construtores:    
    public Linha(int numero, int extensao, String descricao) {
        this.numero = numero;
        this.extensao = extensao;
        this.descricao = descricao;
    }
    
    // GettersAndSetters:
    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }
    public int getExtensao() {
        return extensao;
    }
    public void setExtensao(int extensao) {
        this.extensao = extensao;
    }
    public String getDescricao() {
        return descricao;
    }
    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }   

}
