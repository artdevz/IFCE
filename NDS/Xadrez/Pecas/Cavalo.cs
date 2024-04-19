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

    // Métodos:
    public void moverCavalo(bool isBranco, int posX, int posY) {
        // Regra Geral:
        if (Rodada.regraGeral(posX, posY) == false) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:
        if (movimentoNoAlcance(posX, posY) == true) {
            Console.WriteLine("Cavalo fez o L.");
            
            // Alterar Tabuleiro:            
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, posX, posY, icon);
            this.positionX = posX;
            this.positionY = posY;

        } 
        else {
            Console.WriteLine("Cavalo fez o B.");
        }
    }

    public bool movimentoNoAlcance(int posX, int posY) {

        if (Rodada.fogoAmigo(this.isBranco, posX, posY) == true) return false;
        return (Math.Abs(posX - this.positionX) * Math.Abs(posY - this.positionY) == 2)? true : false;               

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
