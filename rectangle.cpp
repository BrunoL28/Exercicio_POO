#include "rectangle.hpp"

double Rectangle::getArea(){
    return length * width;
}
std::string Rectangle::toString(){
    std::string result;
    result = Shape::toString() + "comprimento: " + std::to_string(length) + "largura: " + std::to_string(width);
    return result;
}
