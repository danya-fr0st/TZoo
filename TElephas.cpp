#include "TElephas.h"


TElephas::TElephas()
        : TProboscidea() {
    BornAge = 5;
    DieAge = 101;
    AnType = Elephas;
}

TElephas::TElephas(std::string const &name, size_t age)
        : TProboscidea(name, age) {
    BornAge = 5;
    DieAge = 101;
    AnType = Elephas;
}


void TElephas::Live(float time) {
    if (time >= 8.f && time <= 21)
        std::cout << "Elephas " << this->GetName() << " is eating." << std::endl;
    else
        std::cout << "Elephas " << this->GetName() << " is sleeping." << std::endl;
}