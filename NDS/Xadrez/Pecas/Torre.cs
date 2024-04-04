namespace Xadrez.pecas;

class Torre {

    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;

    // Construtor:
    public Torre(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = Torre.quantidadeBranco*7;
            positionY = 7;
            Torre.quantidadeBranco++;
            Tabuleiro t = new Tabuleiro();
            t.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265c");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Torre.quantidadePreto*7;
            positionY = 0;
            Torre.quantidadePreto++;
            Tabuleiro t = new Tabuleiro();
            t.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2656");
        }
    }
}
