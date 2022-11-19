#include "Conta.hpp"

class ContaCorrente : public Conta {
    private:
    float taxa;

    public:
    ContaCorrente(float s, float t);
    void setTaxa(float t);
    float getTaxa();
    void Sacar(float valor) override;
    void Depositar(float valor) override;
};
