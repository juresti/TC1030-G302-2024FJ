#ifndef ELECTRO_HPP
#define ELECTRO_HPP

#include <string>

class Electrodomestico{
private:
    bool encendido {false};
protected:
    std::string funcionActual {"Ninguna"};
public:
    Electrodomestico();
    void setEncendido(bool);
    bool isEncendido();
    virtual std::string dimeFuncionActual();
    virtual void cambiaFuncionActual(std::string);
    virtual void encender();
    virtual void apagar();
    virtual std::string toString();
};

#endif
