class Kalkulator {
private:
    double mem;
    double b;

public:
    double getMem() {
        return mem;
    }

    void setMem(double wartosc) {
        mem = wartosc;
    }

    void add() {
        mem += b;
    }

    void sub() {
        mem -= b;
    }

    void mul() {
        mem *= b;
    }

    void mod() {
        if (!b){
            //wyświetlenie okna z błędem
        }
        else
            mem = mem - static_cast<int>(mem / b) * b;
    }

    void div() {
        if (!b){
            //wyświetlanie okna z błędem
        }
        else{
            mem = mem / b;
        }
    }
};

// void menu() {
//     Kalkulator kalk;
//     double a;
//     std::cout << "Podaj a: ";
//     std::cin >> a;
//     kalk.setMem(a);

//     char operacja;
//     do {
//         std::cout << "Operacja: ";
//         std::cin >> operacja;
//         switch (operacja) {
//         case '+':
//             kalk.add();
//             break;
//         case '-':
//             kalk.sub();
//             break;
//         case '*':
//             kalk.mul();
//             break;
//         case '/':
//             kalk.div();
//             break;
//         case '%':
//             kalk.mod();
//             break;
//         case 'E':
//             kalk.setMem(0);
//             break;
//         default:
//             std::cout << "Niedostepna operacja.\n";
//             break;
//         }
//         std::cout << "--------------------------------------------------\n";
//         std::cout << "Wynik w pamieci: " << kalk.getMem() << "\n\n";
//     } while (operacja != 'E');
// }
