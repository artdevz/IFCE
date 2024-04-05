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
    
    // Construtor:
    public Peao(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        this.isMovido = false;

        if ((isBranco == true ) && (isInicio == true)) {
            positionX = quantidadeBranco;
            positionY = 6;
            Peao.quantidadeBranco++;
            Tabuleiro t = new Tabuleiro();
            t.setMatrizDoTabuleiro(this.positionX, this.PositionY, this.PositionX, this.PositionY, "\u265f");                                    
        }

        else {
            positionX = quantidadePreto;
            positionY = 1;
            Peao.quantidadePreto++;            
            Tabuleiro t = new Tabuleiro();
            t.setMatrizDoTabuleiro(this.positionX, this.PositionY, this.PositionX, this.PositionY, "\u2659");
        }
    }

    // Métodos:
    public void MoverPeao(Boolean isBranco, int posX, int posY) {
        // Regra Geral:
        if ((posX < 0) || (posX > 7) || (posY < 0) || (posY > 7)) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if (isBranco == true) {
            if (MoverPeaoBranco(posX, posY) == true) {
                Console.WriteLine("Movimento Permitido");
                Tabuleiro t = new Tabuleiro();
                t.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u265f");
                this.positionX = posX;
                this.positionY = posY;
            } else {
                Console.WriteLine("Movimento Proíbido");
            }

        }

        if (isBranco == false) {
            if (MoverPeaoPreto(posX, posY) == true) {
                Console.WriteLine("Movimento Permitido");
                Tabuleiro t = new Tabuleiro();
                t.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, "\u2659");
                this.positionX = posX;
                this.positionY = posY;
            } else {
                Console.WriteLine("Movimento Proíbido");
            }            
        }
               
        // Regra de Fogo-Amigo:
            // Copiar da Torre
        
        // Regra de Ataque:            
    
    }

    public bool MoverPeaoBranco(int x, int y) {
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

    public bool MoverPeaoPreto(int x, int y) {
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

    public bool isMatar() {
        return true;
    }    
    
    // GettersAndSetters:

    /*public bool isBranco
    {
        get { return isBranco; }
        set { isBranco = value; }
    }*/
    public int PositionX
    {
        get { return positionX; }
        set { positionX = value; }
    }
    
    public int PositionY
    {
        get { return positionY; }
        set { positionY = value; }
    }
    
}
