#include <iostream>
#include "Hora.hpp"
#include "Data.hpp"
#include <string>

class Calendario {
    private:
    Data _data;
    Hora _hora;

    public:
    Calendario (Data d, Hora h);
    std::string imprime();
};
