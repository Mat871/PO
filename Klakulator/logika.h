#ifndef LOGIKA_H
#define LOGIKA_H

class Kalkulator {
public:
    void setMem(double);
    double getMem();

    void setA(double);
    double getA();

    void setB(double);
    double getB();

    void setOper(char);
    char getOper();

    void setOpFlag(bool);
    bool getOpFlag();

    void add();
    void sub();
    void mul();
    void mod();
    void div();
    void erase();

private:

    double mem;
    char oper;
    double b;
    double a;
    bool opFlag;
};


#endif // LOGIKA_H
