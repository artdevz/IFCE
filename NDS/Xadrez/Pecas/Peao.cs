namespace Xadrez.pecas;

class Peao {

    // Atributos:
    private bool isBranco;
    private int positionX;
    private int positionY;

    // Métodos:
    public void MoverPeao(int x, int y) {
        // Regra Geral:
        if ((x < 1 && x > 8) || (y < 1 && y > 8) ) Console.WriteLine("[ERRO]: Posição Inválida.");

        // Regra de Alcance:
        if ( ( (x == this.positionX + 1) & (y == this.positionY + 1) |
               (x == this.positionX + 1) & (y == this.positionY + 0) |
               (x == this.positionX + 0) & (y == this.positionY + 1) |
               (x == this.positionX + 0) & (y == this.positionY + 0) |
               (x == this.positionX - 1) & (y == this.positionY - 1) |
               (x == this.positionX - 1) & (y == this.positionY - 0) |
               (x == this.positionX - 0) & (y == this.positionY - 1) |
               (x == this.positionX - 0) & (y == this.positionY - 0) ) ) {
                Console.WriteLine("Movimento Permitido.");
               } else Console.WriteLine("Movimento Proíbido.");
               
        // Regra de Fogo-Amigo:
        
        
        // Regra de Ataque:
    }

}
