#include "triangle.hpp"

double Triangle::getArea(){
    return base * heigth;
}
std::string Triangle::toString(){
    std::string result;
    result = Shape::toString() + "base: " + std::to_string(base) + "altura: " + std::to_string(heigth);
    return result;
}
