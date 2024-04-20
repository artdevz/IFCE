namespace Xadrez.pecas;

class Rainha {
    
    // Estáticos:
    private static int quantidadeBranco = 0;
    private static int quantidadePreto = 0;

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;
    private string icon;

    // Construtor:
    public Rainha(bool isBranco, bool isInicio) {
        this.isBranco = isBranco;
        icon = (isBranco)? "\u265b" : "\u2655";
        
        if ((isBranco == true) && (isInicio == true)) {
            positionX = 3;
            positionY = 7;
            Rainha.quantidadeBranco++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = 3;
            positionY = 0;
            Rainha.quantidadePreto++;            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, icon);
        }
    }

    // Métodos:
    public void moverRainha(bool isBranco, int posX, int posY) {
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

        if (Rodada.fogoAmigo(this.isBranco, posX, posY) == true) return false;     
        
        int i = this.positionX; int j = this.positionY;        
        int caminhoX = (this.positionX == posX)? 0 : ((this.positionX < posX)? 1 : -1);
        int caminhoY = (this.positionY == posY)? 0 : ((this.positionY < posY)? 1 : -1);        
        int rangeX = (this.positionX < posX)? 7 : 0;
        int rangeY = (this.positionY < posY)? 7 : 0;           
        
        while (i != rangeX && j != rangeY) {
            i+=caminhoX; j+=caminhoY;
            // Apenas não está matando inimigos, acoplar com fogoAmigo() e retornar verdadeiro.            
            if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(i, j) != "[ ]") return false;
            if (i == posX && j == posY) return true;            
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
