public class Inicializar {
    
    public static void main(String[] args) {
        
        Relogio r1 = new Relogio();
        r1.inicializar(19, 52, 43);
        // h:m:s
        
        Relogio r2 = new Relogio();
        r2.inicializar(18, 30);
        // h:m

        Relogio r3 = new Relogio();
        r3.inicializar(12);
        // h

    }

}
