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
        icon = isBranco? "\u265f" : "\u2659";
        
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
    public void moverPeao(bool isBranco, int posX, int posY) {
        if (Rodada.regraGeral(posX, posY) == false) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if (movimentoNoAlcance(posX, posY) == true) {
            Console.WriteLine("Movimento Permitido.");
            this.isMovido = true;
            
            // Alterar Tabuleiro:
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
            this.positionX = posX;
            this.positionY = posY;

        }
        /*  Para evitar IfElse: usar mover() como boolean, return true pra permitido e false para proíbido 
            Também ajuda na condição de passar para a próxima vez ou continuar na vez do jogador
        */
        else {
            Console.WriteLine("Movimento Proíbido.");
        }       
    
    }

    public bool movimentoNoAlcance(int posX, int posY) {

        int i = this.positionX; int j = this.positionY;
        int passoY = (isBranco == true)? -1 : 1;
        if ( (Math.Abs(posY - j) == 2) && (i == posX) && (isMovido == false) ) passoY+=passoY;
        if ( (i == posX) && ( (j+=passoY) == posY) ) return true;
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
