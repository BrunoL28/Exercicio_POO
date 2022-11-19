#include "ContaCorrente.hpp"
#include <iostream>


ContaCorrente::ContaCorrente(float s, float t):
    Conta(s), taxa(t) {}

void ContaCorrente::setTaxa(float t){
    taxa = t;
}

float ContaCorrente::getTaxa(){
    return taxa;
}

void ContaCorrente::Sacar(float valor){ 
    if (getSaldo() < (valor + getTaxa()))
        std::cout << "Valor de saque (com taxa) é maior que o saldo.\n";
    else {
        float debitar = getSaldo() - valor - getTaxa();
        setSaldo(debitar);
    }
}

void ContaCorrente::Depositar(float valor){
    if (getSaldo() < getTaxa())
        std::cout << "Impossivel depositar (saldo menor que a taxa de deposito).\n";
    else {
        float deposito = valor - getSaldo();
        setSaldo(deposito);
    }
}
