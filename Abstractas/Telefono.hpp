#ifndef TEL_HPP
#define TEL_HPP

#include "SistemaComunicacion.hpp"

class Telefono : public SistemaComunicacion{
private:
    bool encendido;
    std::string numero;
protected:
    Telefono(std::string);
public:
    void encender();
    void apagar();
    std::string getNumero();
    bool marcar(std::string);
};

#endif
