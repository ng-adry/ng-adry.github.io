void classify(int n) {
    if (n > 0) {
        cout << "Semn: pozitiv" << endl;
    }
    else if (n < 0) {
        cout << "Semn: negativ" << endl;
    }
    else {
        cout << "Semn: zero" << endl;
    }

    if (n % 2 == 0) {
        cout << "Paritate: par" << endl;
    }
    else {
        cout << "Paritate: impar" << endl;
    }
}

/*
TESTAREA 1:
n = -8
Semn: negativ
Paritate: par

TESTAREA 2:
n = 0
Semn: zero
Paritate: par

TESTAREA 3:
n = 13
Semn: pozitiv
Paritate: impar

Tip defect           | Exemplu de problemă                                     |     Remediu
Sintaxă	          Lipsește ; după o instrucțiune.	                                Adăugăm ; la final.
Logică	          Folosim n > 0 pentru a verifica dacă numărul este par.	        Folosim n % 2 == 0.
Execuție	        Utilizatorul introduce text în loc de număr.	                  Verificăm dacă citirea cu cin a reușit.
*/
