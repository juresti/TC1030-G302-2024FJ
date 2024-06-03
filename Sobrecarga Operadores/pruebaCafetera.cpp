#include "Cafetera.hpp"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Cafetera cafe1{"Rapida",3.0,5};
    Cafetera cafe2{"Lenta",0.5,1};
    Cafetera cafe3{"Media",10.0,3};
    Cafetera cafe4{"Comodin",7.5,7};

    cout << cafe1.toString() << endl;
    cout << cafe2.toString() << endl;

    int total = cafe1 + cafe2 + cafe3 + cafe4;
    cout << "Todas las cafeteras = " << total << endl;

    cout << "Sumando ambas podemos hacer " <<
            cafe1 + cafe2 << " tazas por minuto\n";

    cout << "Si sumo mis 3 cafeteras puedo hacer " <<
        cafe1 + cafe2 + cafe3 << " tazas por minuto\n";

    
    if (cafe1 < cafe2)
        cout << "La cafetera 2 tiene mayor capacidad\n";
    else
        cout << "La cafeterar 1 tiene mayor capacidad\n";
    return 0;
}
