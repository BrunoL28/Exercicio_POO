#include <iostream>

class Lampada {
    private:
    int _num_watts;
    float _preco;

    public:
    Lampada();
    Lampada(int num_watts);
    Lampada(int num_watts, float preco);
    int getWatts();
    float getPreco();
    float operator+ (Lampada const &lp);
};
