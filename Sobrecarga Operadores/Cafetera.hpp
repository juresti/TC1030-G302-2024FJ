#ifndef CAFE_HPP
#define CAFE_HPP

#include <string>

class Cafetera{
private:
    float capacidad;
    int tazasXMin;
    std::string nombre;
public:
    Cafetera(std::string,float,int);
    std::string toString();

    //Sobrecarga de operadores
    //No pertenecen a la clase
    friend int operator +(Cafetera &c1,Cafetera &c2){
        return c1.tazasXMin + c2.tazasXMin;
    }

    friend int operator +(int num,Cafetera &c){
        return num + c.tazasXMin;
    }

    friend bool operator <(Cafetera &c1,Cafetera &c2){
        return c1.capacidad < c2.capacidad;
    }
};

#endif
