using System;
using Xadrez.pecas;
namespace Xadrez;

class Controle {

    // Atributos:
    private static bool xequeMate = false;   
    
    // Métodos:
    public static void iniciarJogo() {

        List<Peao> peoes = new List<Peao>();   
        List<Bispo> bispos = new List<Bispo>();
        List<Cavalo> cavalos = new List<Cavalo>();
        List<Torre> torres = new List<Torre>();
        List<Rainha> rainhas = new List<Rainha>();
        List<Rei> reis = new List<Rei>();

        for (int i = 0; i < 16; i++) {
            bool cor =  (i % 2 == 0)? true : false;
            Peao peao = new Peao(cor, true);
            peoes.Add(peao);
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
        
        int rodada = 1;
        while (xequeMate != true) {
            Tabuleiro.exibirTabuleiro();
            string jogador = (rodada % 2 == 1)? "Branco" : "Preto";
            bool isBranco = (rodada % 2 == 1)? true : false;
            // Ainda precisa fazer exceções e bla bla bla
            Console.WriteLine($"Vez do Jogador {jogador}:\n Digita sua Escolha de Peça:");
            Console.WriteLine("[1] - Peão\n[2] - Bispo\n[3] - Cavalo\n[4] - Torre\n[5] - Rainha\n[6] - Rei");            
            int tipoDePeca = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite a Peça:");
            int pecaEscolhida = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite a Coordenada X:");
            int coordenadaX = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite a Coordenada Y:");
            int coordenadaY = int.Parse(Console.ReadLine());

            rodada++;

            // Melhor usar Enumeradores, mas por enquanto:
            switch (tipoDePeca) {
                case 1:
                    peoes[pecaEscolhida].moverPeao(isBranco, coordenadaX, coordenadaY);
                    break;
                case 2:
                    bispos[pecaEscolhida].moverBispo(isBranco, coordenadaX, coordenadaY);
                    break;
                case 3:
                    cavalos[pecaEscolhida].moverCavalo(isBranco, coordenadaX, coordenadaY);
                    break;
                case 4:
                    torres[pecaEscolhida].moverTorre(isBranco, coordenadaX, coordenadaY);
                    break;
                case 5:
                    rainhas[pecaEscolhida].moverRainha(isBranco, coordenadaX, coordenadaY);
                    break;
                case 6:
                    reis[pecaEscolhida].moverRei(isBranco, coordenadaX, coordenadaY);
                    break;
                default:
                    Console.WriteLine("?");
                    break;
            }
        }
    }  

}
