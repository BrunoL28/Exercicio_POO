#include "Lampada.hpp"

    Lampada::Lampada(){

    }
    Lampada::Lampada(int num_watts){
        _num_watts = num_watts;
    }

    Lampada::Lampada(int num_watts, float preco){
        _num_watts;
        _preco = preco;
    }

    int Lampada::getWatts(){
        return _num_watts;
    }

    float Lampada::getPreco(){
        return _preco;
    }

    float Lampada::operator+ (Lampada const &lp){
        return _preco + lp._preco;
    }
