#include <string>

class Shape {
    private:
      std::string color;

    public:
      virtual double getArea() = 0;
      virtual std::string toString();
};
