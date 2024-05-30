#ifndef TEL_FIJO_HPP
#define TEL_FIJO_HPP

#include "Telefono.hpp"

class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int);
    bool comunicar();
};

#endif
