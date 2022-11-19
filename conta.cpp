#include "Conta.hpp"
#include <iostream>

Conta::Conta(float v): saldo(v){}

void Conta::Depositar(float valor){
    saldo += valor;
}

void Conta::Sacar(float valor){
    if (getSaldo() < valor)
        std::cout << "\nValor de saque maior que o saldo.\n";
    else
        saldo -= valor;
}

void Conta::setSaldo(float valor){
    saldo = valor;
}

float Conta::getSaldo(){
    return saldo;
}

std::string Conta::mostrarSaldo(){
    return std::to_string(saldo);
}
