#include "Conta.hpp"

class Poupanca : public Conta {
    private:
    float rendimento;

    public:
    Poupanca(float s, float r);
    float getRendimento();
    void setRendimento(float r);
    float CalculaRendimento();
};
