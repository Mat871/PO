#include <iostream>

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) { 
    if (!b) {// jesli b = 0 zwraca a by nie zmieniac wyniku w pamieci
        std::cout << "Dzielenie przez 0.\n";
        return a;
    }
    return a / b;
}

double mod(double a, double b) {
    if (!b) {//jesli b = 0 zwraca a by nie zmieniac wyniku w pamieci
        std::cout << "Dzielenie przez 0.\n";
        return a;
    }
    return a - static_cast<int>(a / b) * b;
}
double erase() {
    return 0;
}

void menu() {
    double mem = 0;
    std::cout << "Podaj a: ";
    std::cin >> mem;
    double b;
    char operacja;
    do {
        std::cout << "Operacja: ";
        std::cin >> operacja;
        switch (operacja) {
        case '+':
            std::cout << "Podaj b: ";
            std::cin >> b;
            mem = add(mem, b);
            break;
        case '-':
            std::cout << "Podaj b: ";
            std::cin >> b;
            mem = sub(mem, b);
            break;
        case '*':
            std::cout << "Podaj b: ";
            std::cin >> b;
            mem = mul(mem, b);
            break;
        case '/':
            std::cout << "Podaj b: ";
            std::cin >> b;
            mem = div(mem, b);
            break;
        case '%':
            std::cout << "Podaj b: ";
            std::cin >> b;
            mem = mod(mem, b);
            break;
        case 'E':
            mem = erase();
            break;
        default:
            std::cout << "Niedostepna operacja.\n";
            break;
        }
        std::cout << "Wynik w pamieci: " << mem << "\n\n";
    } while (operacja != 'E');
}

int main()
{
    for (;;) {
        menu();
    }
}
