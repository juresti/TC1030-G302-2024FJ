#include "Microondas.hpp"

using namespace std;

Microondas::Microondas() : Electrodomestico{}, capacidad{0.5},color{"Negro"} {}
Microondas::Microondas(float ca,string col) : Electrodomestico{},capacidad{ca},color{col} {}
    
string Microondas::calentadoRapido(){
    if (isEncendido()){
        return "Calentando rapidamente tu comida...";
    } else {
        return "Primero debes encender el microondas!";
    }
}

void Microondas::encender() {setEncendido(true);}
void Microondas::apagar() {setEncendido(false);}

string Microondas::toString(){
    return "Microondas(" + to_string(isEncendido()) + "," +
                        to_string(capacidad) + "," +
                        color + ")";
}
