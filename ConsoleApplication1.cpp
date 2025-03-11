#include <iostream>

void zad1(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
          std::cout << i%10;
    }
}

void zad1_b(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        std::cout << i % 2;
    }
}

void zad1_d(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        std::cout << "0123";
        if (i + 1 != n) std::cout << "456789";
    }
}

void zad2(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = n; j > i; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

}
int main()
{
    zad2(5);
}
