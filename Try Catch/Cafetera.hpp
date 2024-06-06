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
    friend int operator +(Cafetera &,Cafetera &);

    friend int operator +(int,Cafetera &);

    friend bool operator <(Cafetera &,Cafetera &);
};

#endif
