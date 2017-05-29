#include "TLoxodonta.h"


TLoxodonta::TLoxodonta()
        : TProboscidea() {
    BornAge = 5;
    DieAge = 80;
    AnType = Loxodonta;
}

TLoxodonta::TLoxodonta(std::string const &name, size_t age)
        : TProboscidea(name, age) {
    BornAge = 5;
    DieAge = 80;
    AnType = Loxodonta;
}

void TLoxodonta::Live(float time) {
    if (time >= 8.f && time <= 21)
        std::cout << "Loxodonta " << this->GetName() << " is eating." << std::endl;
    else
        std::cout << "Loxodonta " << this->GetName() << " is sleeping." << std::endl;
}