using System;

namespace Xadrez;

class Program {
    static void Main(string[] args) {
        
        Tabuleiro chess = new Tabuleiro();
        chess.gerarTabuleiro();
        chess.exibirTabuleiro();

    }
}
