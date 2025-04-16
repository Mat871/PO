#include "logika.h"

void Kalkulator::setMem(double war){
    mem = war;
}

double Kalkulator::getMem() {
    return mem;
}

void Kalkulator::setA(double wartosc){
    a = wartosc;
}

double Kalkulator::getA() {
    return a;
}

void Kalkulator::setB(double wartosc) {
    b = wartosc;
}

double Kalkulator::getB(){
    return b;
}

void Kalkulator::setOper(char op) {
    oper = op;
}

char Kalkulator::getOper(){
    return oper;
}

void Kalkulator::add() {
    mem = a + b;
}

void Kalkulator::sub() {
    mem = a - b;
}

void Kalkulator::mul() {
    mem = a * b;
}

void Kalkulator::mod() {
    mem = a - static_cast<int>(a / b) * b;
}

void Kalkulator::div() {
    mem = a / b;
}

void Kalkulator::erase(){
    mem = 0;
    a = 0;
    b = 0;
    oper = 0;
    opFlag=0;
}

void Kalkulator::setOpFlag(bool flag){
    opFlag = flag;
}

bool Kalkulator::getOpFlag(){
    return opFlag;
}
