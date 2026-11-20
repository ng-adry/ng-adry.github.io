
public class Forma {

    public void descrie() {
        System.out.println("Aceasta este o forma geometrica.");
    }
}

public class Dreptunghi extends Forma {

    @Override
    public void descrie() {
        System.out.println("Aceasta este un dreptunghi cu patru laturi.");
    }
}

public class Notificare {

    public void trimite() {
        System.out.println("Se trimite o notificare.");
    }
}

public class Email extends Notificare {

    @Override
    public void trimite() {
        System.out.println("Notificare simulata: Email trimis.");
    }
}

public class SMS extends Notificare {

    @Override
    public void trimite() {
        System.out.println("Notificare simulata: SMS trimis.");
    }
}

public class Main {
    public static void main(String[] args) {

        Notificare[] notificari = {
            new Email(),
            new SMS()
        };

        for (Notificare n : notificari) {
            n.trimite();
        }
    }
}
