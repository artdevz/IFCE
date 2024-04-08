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
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u265d");
        }
        
        if ((isBranco == false) && (isInicio == true)) {
            positionX = Bispo.quantidadePreto + 2 + Bispo.quantidadePreto*2;
            positionY = 0;
            Bispo.quantidadePreto++;
            //Tabuleiro t = new Tabuleiro();
            Tabuleiro.setMatrizDoTabuleiro(this.positionX, this.positionY, this.positionX, this.positionY, "\u2657");
        }
    }
    // Métodos:
    public void MoverBispo(bool isBranco, int posX, int posY) {
        // Regra Geral:
        if ((posX < 0) || (posX > 7) || (posY < 0) || (posY > 7)) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:        
        if (MovimentoNoAlcance(posX, posY) == true) {
            //Console.WriteLine($"{MovimentoNoAlcance(posX, posY)}");            
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
        
        int m = posX; int n = posY;
        Console.WriteLine($"Posição Inicial: {this.positionX}, {this.positionY}");
        Console.WriteLine($"Posição Final: {m}, {n}"); 

        if (this.positionX < posX && this.positionY < posY) {                        
            while (m < 7 && n < 7) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(++m, ++n) != "[ ]") if (IsMatar() == false) return false;
                if (m == posX && n == posY) return true; 
                m++; n++;       
            }
            Console.WriteLine("Movimento não está na diagonal");                       
        }        

        if (this.positionX < posX && this.positionY > posY) {                       
            while (m < 7 && n > 0) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(++m, --n) != "[ ]") if (IsMatar() == false) return false;
                if (m == posX && n == posY) return true; 
                m++; n--;       
            }
            Console.WriteLine("Movimento não está na diagonal");                      
        }        

        if (this.positionX > posX && this.positionY < posY) {                       
            while (m > 0 && n < 7) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(--m, ++n) != "[ ]") if (IsMatar() == false) return false;
                if (m == posX && n == posY) return true; 
                m--; n++;       
            }
            Console.WriteLine("Movimento não está na diagonal");                       
        }        

        if (this.positionX > posX && this.positionY > posY) { 
            while (m > 0 && n > 0) {                
                if (Tabuleiro.getEntradaDaMatrizDoTabuleiro(--m, --n) != "[ ]") if (IsMatar() == false) return false;
                if (m == posX && n == posY) return true; 
                m--; n--;       
            }
            Console.WriteLine("Movimento não está na diagonal");                        
        }
        return false;        
    }

    public bool IsMatar() {
        return true; // CORRIGIR: Peça Fantasma atravessa as peças Aliadas/Inimigas e mata as Aliadas
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
