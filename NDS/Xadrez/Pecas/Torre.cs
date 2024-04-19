namespace Xadrez.pecas;

class Torre {

    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;
    private string icon;

    // Construtor:
    public Torre(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        icon = (isBranco)? "\u265c" : "\u2656";
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = Torre.quantidadeBranco*7;
            positionY = 7;
            Torre.quantidadeBranco++;
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Torre.quantidadePreto*7;
            positionY = 0;
            Torre.quantidadePreto++;
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
    }

    // Métodos:
    public void moverTorre(bool isBranco, int posX, int posY) {
        if (Rodada.regraGeral(posX, posY) == false) Console.WriteLine("[ERRO]: Posição Inválida.");
        
        // Regra de Alcance:        
        if ((movimentoNoAlcance(posX, posY) == true) && (colisao(posX, posY) == false)) {                       
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

        if (Rodada.fogoAmigo(this.isBranco, posX, posY) == true) return false;

        if ((this.positionX == posX && this.positionY != posY) || (this.positionX != posX && this.positionY == posY)) return true;
        Console.WriteLine("Fora do Alcance");
        return false;
    }

    public bool colisao(int posX, int posY) {     

        if (posX != this.positionX) {
            int caminhoX = (this.positionX < posX)? 1 : -1;
            int m = this.positionX+caminhoX;            
            for (int i = m; i != posX; i+=caminhoX) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, posY) != "[ ]") return true;
        }

        if (posY != this.positionY) {
            int caminhoY = (this.positionY < posY)? 1 : -1;
            int n = this.positionY+caminhoY;            
            for (int j = n; j != posY; j+=caminhoY) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, j) != "[ ]") return true;
        }

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
