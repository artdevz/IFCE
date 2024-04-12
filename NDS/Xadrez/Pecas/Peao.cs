namespace Xadrez.pecas;

class Peao {

    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;
    
    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;
    private bool isMovido;
    private string icon;
    
    // Construtor:
    public Peao(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        this.isMovido = false;
        icon = (isBranco)? "\u265f" : "\u2659";
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = quantidadeBranco;
            positionY = 6;
            Peao.quantidadeBranco++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.PositionY, this.PositionX, this.PositionY, icon);                                    
        }

        if ((isBranco == false) && (isInicio == true)) {
            positionX = quantidadePreto;
            positionY = 1;
            Peao.quantidadePreto++;           
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.PositionY, this.PositionX, this.PositionY, icon);
        }
    }

    // Métodos:
    public void moverPeao(Boolean isBranco, int posX, int posY) {
        if (Rodada.regraGeral(posX, posY) == false) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if (isBranco == true) {
            if (moverPeaoBranco(posX, posY) == true) {
                Console.WriteLine("Movimento Permitido");                
                Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
                this.positionX = posX;
                this.positionY = posY;
            } else {
                Console.WriteLine("Movimento Proíbido");
            }

        }

        if (isBranco == false) {
            if (moverPeaoPreto(posX, posY) == true) {
                Console.WriteLine("Movimento Permitido");                
                Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
                this.positionX = posX;
                this.positionY = posY;
            } else {
                Console.WriteLine("Movimento Proíbido");
            }            
        }          
        
        // fogoAmigo() precisa ser implementado
        
        // Regra de Ataque:            
    
    }
    // ATUALIZAR:
    public bool moverPeaoBranco(int x, int y) {
        Console.WriteLine("Mover Branco");
        Console.WriteLine($"Posição Atual: {this.positionX} {this.positionY} -> {x} {y}");

        if (this.positionX == x && this.positionY != y) {            
            return true;
        }

        if (this.positionX == x && (this.positionY-2) == y && this.isMovido == false) {
            this.isMovido = true;
            return true;
        } 

        if ((this.positionX == (x+1)) && (this.positionY == (y+1)) ||
            (this.positionX == (x-1)) && (this.positionY == (y+1)) && (isMatar() == true) ) {
            return true;
        }

        return false;
    }
    // ATUALIZAR:
    public bool moverPeaoPreto(int x, int y) {
        Console.WriteLine("Mover Preto");
        Console.WriteLine($"Posição Atual: {this.positionX} {this.positionY} -> {x} {y}");
        if (this.positionX == x && (this.positionY+1) == y) {            
            return true;
        }
        if (this.positionX == x && (this.positionY+2) == y && this.isMovido == false) {
            this.isMovido = true;
            return true;
        }
        if ((this.positionX == (x+1)) && (this.positionY == (y-1)) ||
            (this.positionX == (x-1)) && (this.positionY == (y-1)) && (isMatar() == true) ) {
            return true;
        }

        return false;
        
    }
    // Acoplar com fogoAmigo()
    public bool isMatar() {
        return true;
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
