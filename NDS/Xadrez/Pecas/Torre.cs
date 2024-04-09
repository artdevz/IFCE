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
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265c");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Torre.quantidadePreto*7;
            positionY = 0;
            Torre.quantidadePreto++;
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2656");
        }
    }

    // Métodos:
    public void MoverTorre(bool isBranco, int posX, int posY) {
        // Regra Geral:
        if ((posX < 0) || (posX > 7) || (posY < 0) || (posY > 7)) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if ((MovimentoNoAlcance(posX, posY) == true) && (Colisao(posX, posY) == false)) {                       
            Console.WriteLine("Movimento Permitido.");
            
            // Alterar Tabuleiro:
            if (isBranco == true)  Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u265c");
            if (isBranco == false) Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u2656");
            this.positionX = posX;
            this.positionY = posY;
        } 
        else {
            Console.WriteLine("Movimento Proíbido.");
        }       
        
    }
    
    public bool MovimentoNoAlcance(int posX, int posY) {
        if ((this.positionX == posX && this.positionY != posY) || (this.positionX != posX && this.positionY == posY)) return true;
        Console.WriteLine("Fora do Alcance");
        return false;
    }

    public bool Colisao(int posX, int posY) {     

        if (this.positionX == posX && this.positionY < posY) for (int j = this.positionY; j <= posY; j++) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, j) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? true : false;       
        if (this.positionX > posX && this.positionY == posY) for (int i = this.positionX; i >= posX; i--) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, posY) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? true : false;       
        if (this.positionX < posX && this.positionY == posY) for (int i = this.positionX; i <= posX; i++) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, posY) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? true : false;
        if (this.positionX == posX && this.positionY > posY) for (int j = this.positionY; j >= posY; j--) if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, j) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? true : false;
               
        return false;  
    }

    public bool fogoAmigo(bool isBranco, int posX, int posY) {
        string peca = Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, posY);           
        if (this.isBranco == true) if (peca == "[\u265d]" || peca == "[\u265e]" || peca == "[\u265f]" || peca == "[\u265b]" || peca == "[\u265a]" || peca == "[\u265c]") return true;        
        if (this.isBranco == false) if (peca == "[\u2657]" || peca == "[\u2658]" || peca == "[\u2659]" || peca == "[\u2655]" || peca == "[\u2654]" || peca == "[\u2656]") return true;
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
