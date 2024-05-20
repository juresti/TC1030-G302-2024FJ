#include "Electrodomestico.hpp"
#include "Microondas.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "******* Pruebas de Electrodomestico ****" << endl;
    Electrodomestico elec1 {};

    cout << elec1.toString() << endl;
    elec1.setEncendido(false);
    cout << elec1.isEncendido() << endl;

    cout << "***** Pruebas de Microondas ***** \n";
    Microondas micro1{};
    Microondas micro2{5.7,"Fucsia"};

    cout << micro1.toString() << endl;
    cout << micro2.toString() << endl;

    cout << micro1.calentadoRapido() << endl;
    micro1.apagar();
    cout << micro1.calentadoRapido() << endl;
    micro1.encender();
    cout << micro1.calentadoRapido() << endl;
}
