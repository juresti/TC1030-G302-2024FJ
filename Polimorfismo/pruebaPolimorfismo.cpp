#include "Electrodomestico.hpp"
#include "Licuadora.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "****** Pruebas de Electrodomestico *****" << endl;
    Electrodomestico miElec {};
    cout << miElec.toString() << endl;
    cout << miElec.dimeFuncionActual() << endl;
    miElec.cambiaFuncionActual("Volando");
    miElec.encender();
    cout << miElec.toString() << endl;

    cout << "******** Pruebas de Licuadora *****\n";
    Licuadora lic1{};
    Licuadora lic2{9};

    cout << lic1.toString() << endl;
    lic2.encender();
    lic2.licuar();

    cout << "***** Prueba Polimorfismo *****\n";
    Electrodomestico *apunta {nullptr};
    apunta = &lic2;
    apunta->toString();

    apunta = &lic1;
    cout << apunta->toString();
    return 0;
}
