using System;
using Xadrez.pecas;

namespace Xadrez;

class Program {
    static void Main(string[] args) {
        
        Tabuleiro chess = new Tabuleiro();
        chess.gerarTabuleiro();
        
        //IniciarJogo(){
        List<Peao> peoes = new List<Peao>();
        for (int i = 0; i < 16; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            Peao peao = new Peao(cor, true);
        }
        
        List<Bispo> bispos = new List<Bispo>();
        List<Cavalo> cavalos = new List<Cavalo>();
        List<Torre> torres = new List<Torre>();
        
        for (int i = 0; i < 4; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            Bispo bispo = new Bispo(cor, true);
            Cavalo cavalo = new Cavalo(cor, true);
            Torre torre = new Torre(cor, true);
        }

        List<Rainha> rainhas = new List<Rainha>();
        List<Rei> reis = new List<Rei>();
        
        for (int i = 0; i < 2; i++) {
            bool cor = (i % 2 == 0)? true : false;
            Rainha rainha = new Rainha(cor, true);
            Rei rei = new Rei(cor, true);
        }
        //IniciarJogo()}
        chess.exibirTabuleiro();
    }

    public static void IniciarJogo() {
        // Ainda fazer
    }
}
