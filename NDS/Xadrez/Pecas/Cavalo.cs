namespace Xadrez.pecas;

class Cavalo {

    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;
    private string icon;

    // Construtor:
    public Cavalo(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        icon = (isBranco)? "\u265e" : "\u2658"; 
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = Cavalo.quantidadeBranco + 1 + Cavalo.quantidadePreto*4;
            positionY = 7;
            Cavalo.quantidadeBranco++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Cavalo.quantidadePreto + 1 + Cavalo.quantidadePreto*4;
            positionY = 0;
            Cavalo.quantidadePreto++;
            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
    }

    /*Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
            this.positionX = posX;
            this.positionY = posY;*/

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
