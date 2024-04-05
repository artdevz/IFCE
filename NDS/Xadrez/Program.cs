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
            peoes.Add(peao);
        }
    
        List<Bispo> bispos = new List<Bispo>();
        List<Cavalo> cavalos = new List<Cavalo>();
        List<Torre> torres = new List<Torre>();
        
        for (int i = 0; i < 4; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            Bispo bispo = new Bispo(cor, true);
            bispos.Add(bispo);
            Cavalo cavalo = new Cavalo(cor, true);
            cavalos.Add(cavalo);
            Torre torre = new Torre(cor, true);
            torres.Add(torre);
        }

        List<Rainha> rainhas = new List<Rainha>();
        List<Rei> reis = new List<Rei>();
        
        for (int i = 0; i < 2; i++) {
            bool cor = (i % 2 == 0)? true : false;
            Rainha rainha = new Rainha(cor, true);
            rainhas.Add(rainha);
            Rei rei = new Rei(cor, true);
            reis.Add(rei);
        }
        //IniciarJogo()}        
        chess.exibirTabuleiro();
        torres[0].MoverTorre(true, 0, 4);     
        torres[1].MoverTorre(false, 0, 6); // Quando não há peões, a Torre Preta não consegue ultrapassar a Branca por causa da Hitbox        
        chess.exibirTabuleiro();
    }

    public static void IniciarJogo() {
        // Ainda fazer
    }
}
