    #include "Poupanca.hpp"
    
    Poupanca::Poupanca(float s, float r):
        Conta(s), rendimento(r) {}

    float Poupanca::getRendimento(){
        return rendimento;
    }

    void Poupanca::setRendimento(float r){
        rendimento = r;
    }

    float Poupanca::CalculaRendimento(){
        return (getSaldo() * getRendimento());
    }
