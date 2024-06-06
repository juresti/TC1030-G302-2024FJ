#include "Cafetera.hpp"
#include <iostream>
#include <exception>

using namespace std;

float validaCapacidad(){
    float valor {0.0};
    bool valido {false};

    while (!valido){
        cout << "Dime la capacidad de la cafetera: "; 
        cin >> valor;
        try{
            if (cin.fail()) throw runtime_error{"El dato debe de ser un flotante."};
            else{
                valido = true;
            }
        } catch (runtime_error e){
            cout << "Error en el programa: " << e.what() << endl;
            cout << "Vuelve a intentarlo...\n\n";
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return valor;
}

int main(int argc, char const *argv[])
{
    string nombre {""};
    float capacidad {0.0};
    int tazas {0};

    cout << "Dime el nombre de tu cafetera: "; cin >> nombre;
    //cout << "Dime la capacidad de la cafetera: "; 
    capacidad = validaCapacidad();
    //cin >> capacidad;
    cout << "Dime las tazas por minuto de la cafetera: "; cin >> tazas;

    Cafetera caf1{nombre,capacidad,tazas};
    cout << caf1.toString() << endl;
    return 0;
}
