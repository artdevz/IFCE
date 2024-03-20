public class Relogio {

    // Métodos da Classe:
    public void inicializar(int hora, int minuto, int segundo) {
        System.out.printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    }

    public void inicializar(int hora, int minuto) {
        int segundo = 1;
        System.out.printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    }

    public void inicializar(int hora) {
        int minuto = 1, segundo = 1;
        System.out.printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    }

}