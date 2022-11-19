#include <string>
#include <iostream>
#include "polimorfismo.hpp"

#define PI 3.14159265359

        Circle::Circle(float radius):
            _radius(radius)
        {}

        float Circle::getRadius(){
            return _radius;
        }
        
        float Circle::getArea(){
            return PI*getRadius()*getRadius();
        }
        
        std::string Circle::toString(){
            std::string description;
            std::string radius = std::to_string(getRadius());
            std::string area = std::to_string(getArea());
            description += "Um circulo de raio = " + radius + " e area = " + area; 
            std::cout << description << std::endl;
            return description;
        }

        void Circle::imprime(Circle *c){
            c->toString();
        }

        Cylinder::Cylinder(float r, float h):
            Circle(r), _height(h)
        {}

        float Cylinder::getHeight(){
            return _height;
        }

        float Cylinder::getArea(){
            return 2*PI*getRadius()*getHeight() + 2*PI*getRadius()*getRadius();
        }

        float Cylinder::getVolume(){
            return getArea()*getHeight();
        }

        std::string Cylinder::toString(){
            std::string description;
            std::string radius = std::to_string(getRadius());
            std::string area = std::to_string(getArea());
            std::string height = std::to_string(getHeight());
            std::string volume = std::to_string(getVolume());
            description += "Um cilindro de raio = " + radius + ", altura = " + height + ", area = " + area + " e volume = " + volume;
            std::cout << description << std::endl;
            return description;
        }

        void Cylinder::imprime(Cylinder *c){
            c->toString();
        }
