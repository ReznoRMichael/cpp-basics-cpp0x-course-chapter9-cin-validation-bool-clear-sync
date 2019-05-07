#include <iostream>
int main()
{
    float rzeczywista1; // deklaracja zmiennej
    float rzeczywista2; // deklaracja zmiennej
    float rzeczywista3; // deklaracja zmiennej

    std::cout << "Liczba pierwsza to: ";
    std::cin >> rzeczywista1; // wpisanie pierwszej liczby rzeczywistej
    bool good1 = std::cin.good(); // zapisanie aktualnego stanu poprawnosci strumienia w zmiennej good1
    std::cin.clear(); // czyszczenie aktualnego stanu strumienia
    std::cin.sync(); // czyszczenie buforu strumienia

    std::cout << "Liczba druga to: ";
    std::cin >> rzeczywista2; // wpisanie drugiej liczby rzeczywistej
    bool good2 = std::cin.good(); // zapisanie aktualnego stanu poprawnosci strumienia w zmiennej good2
    std::cin.clear(); // czyszczenie aktualnego stanu strumienia
    std::cin.sync(); // czyszczenie buforu strumienia

    std::cout << "Liczba trzecia to: ";
    std::cin >> rzeczywista3; // wpisanie trzeciej liczby rzeczywistej
    bool good3 = std::cin.good(); // zapisanie aktualnego stanu poprawnosci strumienia w zmiennej good3
    std::cin.clear(); // czyszczenie aktualnego stanu strumienia
    std::cin.sync(); // czyszczenie buforu strumienia

    std::cout << std::endl; // nowa linia
    std::cout << "Liczba pierwsza to: " << rzeczywista1 << ". " // wyswietlenie pierwszej wpisanej wartosci
    << "Wczytano? " << good1 << "." // wyswietlenie stanu poprawnego wczytania zapamietanego wczesniej jako good1
    << std::endl; // nowa linia

    std::cout << "Liczba druga to: " << rzeczywista2 << ". " // wyswietlenie drugiej wpisanej wartosci
    << "Wczytano? " << good2 << "." // wyswietlenie stanu poprawnego wczytania zapamietanego wczesniej jako good2
    << std::endl; // nowa linia

    std::cout << "Liczba trzecia to: " << rzeczywista3 << ". " // wyswietlenie trzeciej wpisanej wartosci
    << "Wczytano? " << good3 << "." // wyswietlenie stanu poprawnego wczytania zapamietanego wczesniej jako good3
    << std::endl; // nowa linia

    std::cin.clear(); // czyszczenie aktualnego stanu strumienia
    std::cin.sync(); // czyszczenie buforu strumienia

    return 0;
}
