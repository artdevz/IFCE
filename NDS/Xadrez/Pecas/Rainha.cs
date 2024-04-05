namespace Xadrez.pecas;

class Rainha {
    
    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;

    // Construtor:
    public Rainha(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = 3;
            positionY = 7;
            Rainha.quantidadeBranco++;
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265b");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = 3;
            positionY = 0;
            Rainha.quantidadePreto++;
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2655");
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
