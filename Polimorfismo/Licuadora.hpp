#ifndef LICUA_HPP
#define LICUA_HPP

#include "Electrodomestico.hpp"
#include <string>

class Licuadora : public Electrodomestico{
private:
    int numVelocidades;
    bool pulsarActivo;
public:
    Licuadora();
    Licuadora(int);
    void licuar();
    std::string toString();
};

#endif
