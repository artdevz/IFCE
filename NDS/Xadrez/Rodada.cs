using System.Linq;
namespace Xadrez;

class Rodada {
    
    // Atributos:
    private static string[] pecasBrancas = new string[6] { "[\u265d]", "[\u265e]", "[\u265f]", "[\u265b]", "[\u265a]", "[\u265c]"};
    private static string[] pecasPretas = new string[6]  { "[\u2657]", "[\u2658]", "[\u2659]", "[\u2655]", "[\u2654]", "[\u2656]"};

    // Métodos:
    public static bool fogoAmigo(bool isBranco, int posX, int posY) {
        string peca = Tabuleiro.getEntradaDaMatrizDoTabuleiro(posX, posY);               
        if (isBranco == true) if (pecasBrancas.Contains(peca)) return true;
        if (isBranco == false) if (pecasPretas.Contains(peca)) return true;
        return false;
    }

    public static bool regraGeral(int posX, int posY) {
        return ((posX < 0) || (posX > 7) || (posY < 0) || (posY > 7))? false : true;        
    }

}
