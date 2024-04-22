namespace Xadrez.pecas;

class Rei {
    
    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;
    private string icon;

    // Construtor:
    public Rei(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        icon = (isBranco)? "\u265a" : "\u2654";

        if ((isBranco == true) && (isInicio == true)) {
            positionX = 4;
            positionY = 7;
            Rei.quantidadeBranco++;                      
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = 4;
            positionY = 0;
            Rei.quantidadePreto++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
    }

    // Métodos:
    public void moverRei(bool isBranco, int posX, int posY) {
        // Regra Geral:
        if (Rodada.regraGeral(posX, posY) == false) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:
        if (movimentoNoAlcance(posX, posY) == true) {
            Console.WriteLine("Movimento Permitido.");
            
            // Alterar Tabuleiro:            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
            this.positionX = posX;
            this.positionY = posY;

        } 
        else {
            Console.WriteLine("Movimento Proíbido.");
        }
    }

    public bool movimentoNoAlcance(int posX, int posY) {
        
        int i = this.positionX; int j = this.positionY;        
        int caminhoX = (this.positionX == posX)? 0 : ((this.positionX < posX)? 1 : -1);
        int caminhoY = (this.positionY == posY)? 0 : ((this.positionY < posY)? 1 : -1);  
        i+=caminhoX; j+=caminhoY;

        if (i != posX || j != posY) return false;
        if ( i == posX && j == posY && (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, j) == "[ ]") ) return true;                   
        if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, j) != "[ ]") return (Rodada.fogoAmigo(this.isBranco, posX, posY) == true)? false : true;
        
        return false;
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
