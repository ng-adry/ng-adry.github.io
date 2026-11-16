
class Carte {
    String titlu;
    int pagini;

    Carte(String titlu, int pagini) {
        this.titlu = titlu;
        this.pagini = pagini;
    }

    void afiseaza() {
        System.out.println("Titlu: " + titlu);
        System.out.println("Pagini: " + pagini);
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {

        Carte a = new Carte("Algoritmi", 120);
        Carte b = new Carte("Web", 80);

        a.pagini = 130;

        a.afiseaza();
        b.afiseaza();
    }
}

/*
REZULTATUL RULARII:

Titlu: Algoritmi
Pagini: 130

Titlu: Web
Pagini: 80
*/
