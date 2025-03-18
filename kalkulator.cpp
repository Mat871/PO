#include <iostream>

double mem = 0;
bool mem_used = 0; // przyjmuje 1 jesl w pamiec byla uzyta

double add(double a, double b) {
    mem_used = 1;
    return a + b;
} 

double sub(double a, double b) {
    mem_used = 1;
    return a - b;
}

double mul(double a, double b) {
    mem_used = 1;
    return a * b;
}

double div(double a, double b) {
    if (!b) {
        std::cout << "ERROR";
            return NULL;
    }
    mem_used = 1;
    return a / b;
}

double mod(double a, double b) {
    if (!b) {
        std::cout << "ERROR";
        return NULL;
    }
    mem_used = 1;
    return a - static_cast<int>(a / b) * b;
}

void erase() {
    mem = 0;
}

void menu() {
    std::cout << "\nMENU\n\n1)+\n2)-\n3)*\n4)/\n5)%\n6)MCR\n";
    std::cout << "\nWybierz funkcje: ";
    int funkcja;
    std::cin >> funkcja;
    if (funkcja > 0 && funkcja <= 5) {
        double a, b;
        std::cout << "Podaj a:";
        std::cin >> a;
        std::cout << "Podaj b:";
        std::cin >> b;

        switch (funkcja) {
        case 1:
            mem = add(a, b);
            break;
        case 2:
            mem = sub(a, b);
            break;
        case 3:
            mem = mul(a, b);
            break;
        case 4:
            mem = div(a, b);
            break;
        case 5:
            mem = mod(a, b);
            break;

        }
    }
    else if (funkcja == 6) {
        erase();
    }
    std::cout << mem << '\n';
 }

int main()
{
    for (;;) {
        menu();
    }
}