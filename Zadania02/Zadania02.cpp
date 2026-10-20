// Zadania02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iterator>

using namespace std;

void odliczanie(int sekundy) {
    switch (sekundy) {
        case(5):
            cout << "5... ";
            [[fallthrough]];
        case(4):
            cout << "4... ";
        case(3):
            cout << "3... ";
        case(2):
            cout << "2... ";
        case(1):
            cout << "1... Start!\n";
            break;
        default:
            cout << "Niepoprawna liczba\n";
    }
    
}

void policz_srednia() {
    // 1. Tworzymy tablice na miejscu w funkcji
    double s[] = { 1, 1, 1, 1, 2, 3, 5, 5, 5, 4, 4.5, 4.5, 3.5, 2, 3 };

    // 2. Tutaj sizeof(s) dziala, bo tablica powstala linijke wyzej!
    int n = sizeof(s) / sizeof(double);

    // 3. Liczymy sume w petli
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += s[i];
    }

    // 4. Wypisujemy gotowy wynik
    cout << "Liczba ocen: " << n << "\n";
    cout << "Srednia ocen: " << suma / n << "\n";
}


int main()
{
    cout << "--------------\n";
    odliczanie(2);
    odliczanie(8);
    cout << "--------------\n";
    policz_srednia();
    cout << "--------------\n";
    cout << "--------------\n";
}

