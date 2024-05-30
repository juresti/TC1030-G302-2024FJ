#include "TelefonoFijo.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    TelefonoFijo miTel {2};
    miTel.comunicar();
    miTel.marcar("55 4433 2211");
    miTel.apagar();
    miTel.marcar("777 453 6789");
    return 0;
}
