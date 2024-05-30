#ifndef SIST_COM_HPP
#define SIST_COM_HPP

#include <string>

class SistemaComunicacion{
private:
    bool comunicando;
protected:
    std::string tipoComunicacion;
    SistemaComunicacion(std::string);
public:
    virtual bool comunicar() = 0;
    bool isComunicando();
    void setComunicando(bool);
};

#endif
