namespace Xadrez.pecas;

class Bispo {

    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;

    // Construtor:
    public Bispo(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = Bispo.quantidadeBranco + 2 + Bispo.quantidadePreto*2;
            positionY = 7;
            Bispo.quantidadeBranco++;
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265d");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Bispo.quantidadePreto + 2 + Bispo.quantidadePreto*2;
            positionY = 0;
            Bispo.quantidadePreto++;
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2657");
        }
    }

    // GettersAndSetters:

    public bool IsBranco {
        get { return isBranco; }
        //set { isBranco = value; }
    }
    
    public int PositionX {
        get { return positionX; }
        //set { positionX = value; }
    }
    
    public int PositionY {
        get { return positionY; }
        //set { positionY = value; }
    }
}
