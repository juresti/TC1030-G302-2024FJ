#ifndef MICRO_HPP
#define MICRO_HPP

#include "Electrodomestico.hpp"
#include <string>

class Microondas : public Electrodomestico{
private:
    float capacidad {1.0};
    std::string color {"Blanco"};
public:
    Microondas();
    Microondas(float,std::string);
    std::string calentadoRapido();
    void encender();
    void apagar();
    std::string toString();
};

#endif
