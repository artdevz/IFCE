using System;
using Xadrez.pecas;

namespace Xadrez;

class Program {
    static void Main(string[] args) {
        
        Tabuleiro chess = new Tabuleiro();
        chess.gerarTabuleiro();
        Peao pPreto1 = new Peao(false, true);
        chess.exibirTabuleiro();
        pPreto1.MoverPeao(false, 0, 3);
        chess.exibirTabuleiro(); 
        pPreto1.MoverPeao(false, 0, 4);
        chess.exibirTabuleiro();
        pPreto1.MoverPeao(false, 0, 5);
        chess.exibirTabuleiro(); 
        pPreto1.MoverPeao(false, 0, 6);
        chess.exibirTabuleiro();        
        pPreto1.MoverPeao(false, 0, 7);
        chess.exibirTabuleiro();
        pPreto1.MoverPeao(false, 0, 8); // Erro de Index (Já esperado)
        chess.exibirTabuleiro();  

    }
}
