#include "Licuadora.hpp"
#include <iostream>

using namespace std;

Licuadora::Licuadora() : Electrodomestico{},
                        numVelocidades{5},
                        pulsarActivo{false}
                        {}
Licuadora::Licuadora(int n) : Electrodomestico{},
                            numVelocidades{n},
                            pulsarActivo{false}
                            {}

void Licuadora::licuar(){
    if (isEncendido()){
        cout << "Licuando tus alimentos...\n";
    } else {
        cout << "Primero enciende la licuadora\n";
    }
}

string Licuadora::toString(){
    return "Licuadora(" + Electrodomestico::toString() +
            "," + to_string(numVelocidades) +
            "," + to_string(pulsarActivo) + ")";
}
