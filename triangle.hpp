#include <string>
#include "shape.hpp"

class Triangle: public Shape{
    private:
      int base;
      int heigth;

    public:
      double getArea() override;
      std::string toString() override;
};
