#include <string>

class Conta {
    private:
    float saldo;

    public:
    Conta(float v);
    ~Conta();
    float getSaldo();
    void setSaldo(float valor);
    std::string mostrarSaldo();
    virtual void Depositar(float valor);
    virtual void Sacar(float valor);
};
