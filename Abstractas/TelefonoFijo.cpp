#include "TelefonoFijo.hpp"
#include <iostream>

TelefonoFijo::TelefonoFijo(int nl) : Telefono{"55 4321 6789"},
                                    numLineas{nl}
                                    {}
bool TelefonoFijo::comunicar(){
    encender();
    std::cout << "Telefono Fijo listo para comunicar" << std::endl;
    setComunicando(true);
    return true;
}
