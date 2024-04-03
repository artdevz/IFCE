using System;

namespace Xadrez;

class Tabuleiro {

    private static string[,] matrizDoTabuleiro = new string[8,8];
    
    // Métodos:

    public void gerarTabuleiro() {
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                matrizDoTabuleiro[i,j] = "[ ]";
            }
        }
    }
    public void exibirTabuleiro() {
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                Console.Write(matrizDoTabuleiro[i,j]);
            }
            Console.WriteLine("");
        }
    }

    // GettersAndSetters:
    public void setMatrizDoTabuleiro(int posAntigaX, int posAntigaY, int posAtualX, int posAtualY, string peca) {
        matrizDoTabuleiro[posAntigaX, posAntigaY] = "[ ]";
        Console.WriteLine("Apagar Fantasma");
        matrizDoTabuleiro[posAtualX, posAtualY] = "["+peca+"]";
        Console.WriteLine("Adicionando Peça");
    }       

}
