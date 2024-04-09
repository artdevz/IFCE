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
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265d");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Bispo.quantidadePreto + 2 + Bispo.quantidadePreto*2;
            positionY = 0;
            Bispo.quantidadePreto++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2657");
        }
    }
    
    // Métodos:
    public void MoverBispo(bool isBranco, int posX, int posY) {
        // Regra Geral:
        if ((posX < 0) || (posX > 7) || (posY < 0) || (posY > 7)) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if (MovimentoNoAlcance(posX, posY) == true) {
            Console.WriteLine("Movimento Permitido.");
            
            // Alterar Tabuleiro:
            if (isBranco == true)  Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u265d");
            if (isBranco == false) Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u2657");
            this.positionX = posX;
            this.positionY = posY;
        } 
        else {
            Console.WriteLine("Movimento Proíbido.");
        }   
    }

    public bool MovimentoNoAlcance(int posX, int posY) {     
        
        int m = this.positionX; int n = positionY;       

        if (this.positionX < posX && this.positionY < posY) {                        
            while (m <= 7 && n <= 7) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(m, n) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? false : true;
                if (m == posX && n == posY) return true; 
                m++; n++;       
            }                                   
        }        

        if (this.positionX < posX && this.positionY > posY) {                                  
            while (m <= 7 && n >= 0) {   
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(m, n) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? false : true;     
                if (m == posX && n == posY) return true; 
                m++; n--;       
            }                                 
        }        

        if (this.positionX > posX && this.positionY < posY) {                       
            while (m >= 0 && n <= 7) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(m, n) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? false : true;
                if (m == posX && n == posY) return true; 
                m--; n++;       
            }                                   
        }        

        if (this.positionX > posX && this.positionY > posY) { 
            while (m >= 0 && n >= 0) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(m, n) != "[ ]") return (fogoAmigo(this.isBranco, posX, posY) == true)? false : true;
                if (m == posX && n == posY) return true;                
                m--; n--;       
            }                                 
        }
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
