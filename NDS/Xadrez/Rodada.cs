namespace Xadrez;

class Rodada {
    
    public static bool fogoAmigo(bool isBranco, int posX, int posY) {
        string peca = Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, posY);           
        if (isBranco == true) if (peca == "[\u265d]" || peca == "[\u265e]" || peca == "[\u265f]" || peca == "[\u265b]" || peca == "[\u265a]" || peca == "[\u265c]") return true;        
        if (isBranco == false) if (peca == "[\u2657]" || peca == "[\u2658]" || peca == "[\u2659]" || peca == "[\u2655]" || peca == "[\u2654]" || peca == "[\u2656]") return true;
        return false;
    }

    // Adicionar:
        //RegraGeral()
        //AlterarTabuleiro()
}
