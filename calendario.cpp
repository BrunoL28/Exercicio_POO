#include "Calendario.hpp"

Calendario::Calendario (Data d, Hora h): _data(d), _hora(h) {};

std::string Calendario::imprime(){
    _hora.imprime();
    _data.imprime();
}
