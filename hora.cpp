#include <string>
#include "Hora.hpp"

Hora::Hora (int h, int m, int s):
hora(h), min(m), seg(s){}

std::string Hora::imprime(){
    return std::to_string(hora) + "/" + std::to_string(min) + "/" + std::to_string(seg);
}
