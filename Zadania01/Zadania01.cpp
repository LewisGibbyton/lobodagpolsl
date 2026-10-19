// Zadania01.cpp : rizwiazania zadan wygenerowanych w gemini 4 argon

#include <iostream>

using namespace std;


int wieksza(int a, int b) {
    a > b ? cout << "wieksze a" : cout << "wieksze b"; //uzywcie operatora trojargumentowego 
    return 0;
}

double srednia(int suma_pkt, int liczba_osob) {
    cout << 1.0 * suma_pkt / liczba_osob;
    return 0;
}
void wypisz_nieparzyste(int n) {
    for (n; n < 20; n++) {
        if (n % 2 == 1) {
            cout << "n = " << n << "\n";
        }
        //cout << "n = " << n << "\n";
        //cout << "wypisuje nieparzyste: " << n / 2 + 1 << "\n";
    }
}
int pomonoz_razy_8(int x) {
    x <<= 3;
    cout << x;
    return 0;
}
/*void liczba_doskonala(int liczba) {
    cout << "dzielniki liczby: " << liczba << " wynosza: \n";
    int check = 0; // zainicjalizuj przy deklaracji
    for (int l = 1; l <= liczba; l++) {
        if (liczba % l == 0)
        {
            cout << l << "\n";
            check = check + l;
        }
    }
    cout << "\n----------------------\n";
    check = check - liczba;
    if (check == liczba)
    {
        cout << liczba << " to liczba doskonala";
    }
    else {
        cout << liczba <<  " nie jest liczba dosonala";
    }
}*/





// bool true lub false
bool czy_doskonala(int liczba) {
    int check = 0;

    
    for (int l = 1; l < liczba; l++) {
        if (liczba % l == 0) {
            check += l; // check == check + l;
        }
    }

    if (check == liczba) {
        return true;  
    }
    else {
        return false; 
    }
}

// 2. Funkcja wypisująca wszystkie liczby doskonałe aż do "max_zakres"
void wypisz_liczby_doskonale(int max_zakres) {
    cout << "Liczby doskonale w zakresie do " << max_zakres << " to:\n";
    for (int i = 1; i <= max_zakres; i++) {
        // Tutaj wywołujemy naszą pierwszą funkcję wewnątrz if-a!
        if (czy_doskonala(i)) {
            cout << i << "\n";
        }
    }
}

int main()
{
    wieksza(15, 3); 
    cout << "\n----------------------\n";
    srednia(9, 2);
    cout << "\n----------------------\n";
    wypisz_nieparzyste(0);
    cout << "----------------------\n";
    pomonoz_razy_8(2);
    cout << "\n----------------------\n";
    wypisz_liczby_doskonale(10000);
    cout << "----------------------\n";

}

