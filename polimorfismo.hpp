#ifndef POLIMORFISMO_H
#define POLIMORFISMO_H

#include <string>

class Circle{
    
    private:

        float _radius;

    public:

        Circle(float radius);

        virtual float getRadius();

        virtual float getArea();
        
        virtual std::string toString();

        virtual void imprime(Circle *c);
};

class Cylinder : public Circle{

    private:

        float _height;

    public:

        Cylinder(float r, float h);

        float getHeight();

        float getArea() override;

        float getVolume();

        std::string toString() override;

        void imprime(Cylinder *c);
};
#endif
