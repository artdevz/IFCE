using System;
using Xadrez.pecas;

namespace Xadrez;

class Program {
    static void Main(string[] args) {
        
        Tabuleiro chess = new Tabuleiro();
        Rodada r = new Rodada();
        Tabuleiro.gerarTabuleiro();
        
        //IniciarJogo(){
        
        //List<Peao> peoes = new List<Peao>();   
        List<Bispo> bispos = new List<Bispo>();
        List<Cavalo> cavalos = new List<Cavalo>();
        List<Torre> torres = new List<Torre>();
        List<Rainha> rainhas = new List<Rainha>();
        List<Rei> reis = new List<Rei>();

        for (int i = 0; i < 16; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            //Peao peao = new Peao(cor, true);
            //peoes.Add(peao);
        }
        
        for (int i = 0; i < 4; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            Bispo bispo = new Bispo(cor, true);
            bispos.Add(bispo);
            Cavalo cavalo = new Cavalo(cor, true);
            cavalos.Add(cavalo);
            Torre torre = new Torre(cor, true);
            torres.Add(torre);
        }        
        
        for (int i = 0; i < 2; i++) {
            bool cor = (i % 2 == 0)? true : false;
            Rainha rainha = new Rainha(cor, true);
            rainhas.Add(rainha);
            Rei rei = new Rei(cor, true);
            reis.Add(rei);
        }
        //IniciarJogo()}        
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 6);
        Tabuleiro.exibirTabuleiro();    
        reis[0].moverRei(true, 4, 5);
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 4);
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 3);
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 2);
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 1);
        Tabuleiro.exibirTabuleiro();
        reis[0].moverRei(true, 4, 0);
        Tabuleiro.exibirTabuleiro();
        Console.WriteLine("GANHOU!! :)");
        reis[0].moverRei(true, 3, 0);
        Tabuleiro.exibirTabuleiro();  

    }        

    public static void iniciarJogo() {
        // Ainda fazer
    }
}
