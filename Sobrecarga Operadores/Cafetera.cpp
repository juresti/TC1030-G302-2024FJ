#include "Cafetera.hpp"
using namespace std;

Cafetera::Cafetera(string n,float c,int t) : nombre{n},
                                        capacidad{c},
                                        tazasXMin{t}
                                        {}

string Cafetera::toString(){
    return "Cafetera(" + to_string(capacidad) + "," +
                    to_string(tazasXMin) + "," +
                    nombre + ")";
}
