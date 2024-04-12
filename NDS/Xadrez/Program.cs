using System;
using Xadrez.pecas;

namespace Xadrez;

class Program {
    static void Main(string[] args) {
        
        Tabuleiro chess = new Tabuleiro();
        Rodada r = new Rodada();
        Controle c = new Controle();
        Tabuleiro.gerarTabuleiro();
        Controle.iniciarJogo();               

    }
}
