
public class Produs {
    private String nume;
    private int pret;
    public Produs(String nume, int pret) {
        this.nume = nume;

        if (pret > 0) {
            this.pret = pret;
        } else {
            this.pret = 0;
        }
    }
    public String getNume() {
        return nume;
    }
    public int getPret() {
        return pret;
    }

    public void setPret(int pretNou) {
        if (pretNou > 0) {
            pret = pretNou;
            System.out.println("Pret modificat cu succes!");
        } else {
            System.out.println("Pret invalid! Trebuie sa fie pozitiv.");
        }
    }
}
