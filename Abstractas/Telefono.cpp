#include "Telefono.hpp"
#include <iostream>

using namespace std;

Telefono::Telefono(string num) : SistemaComunicacion{"Telefonica"},
                                encendido{false},
                                numero{num}
                                {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}
bool Telefono::marcar(string nt){
    if (encendido) {
        setComunicando(true);
        cout << "Marcando al telefono: " << nt << endl;
        return true;
    } else {
        cout << "Debes de encender primero el telefono" << endl;
        setComunicando(false);
        return false;
    }
}