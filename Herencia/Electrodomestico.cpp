#include "Electrodomestico.hpp"

Electrodomestico::Electrodomestico() : encendido{true} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool e) {encendido = e;}
std::string Electrodomestico::toString(){
    return "Electrodomestico(" + std::to_string(encendido) + ")";
}