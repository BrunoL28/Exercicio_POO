#include "polimorfismo.hpp"
#include <iostream>

int main(){

    Circle c1(6.0);
    Cylinder c2(c1.getRadius(), 10.0);

    Circle c3(15.0);
    Cylinder c4(c3.getRadius(), 28.0);

    c1.imprime(&c1);
    c2.imprime(&c2);

    c3.imprime(&c3);
    c4.imprime(&c4);

    return 0;

}
