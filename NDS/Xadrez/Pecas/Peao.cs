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
        
        // fogoAmigo() precisa ser implementado
        
        // Regra de Ataque:            
    
    }

    public bool movimentoNoAlcance(int posX, int posY) {

        int i = this.positionX; int j = this.positionY;
        int passoY = (isBranco == true)? -1 : 1;

        if ( (Math.Abs(posY - j) == 2) && (i == posX) && (isMovido == false) ) {
            passoY++;
            this.isMovido = true;
        }
        
        if ( (i == posX) && ( (j+=passoY) == posY) ) return true;
        return true;

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
