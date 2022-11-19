#include <string>
#include "Data.hpp"

    Data::Data (int d, int m, int a):
    dia(d), mes(m), ano(a){}

    std::string Data::imprime(){
        return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
    }
