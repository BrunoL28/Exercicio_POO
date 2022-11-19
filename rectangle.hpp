#include <string>
#include "shape.hpp"

class Rectangle: public Shape{
    private:
        int length;
        int width;

    public:
        double getArea() override;
        std::string toString() override;
};
