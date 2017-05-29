#include "TTigris.h"


TTigris::TTigris()
        : TCarnivora() {
    BornAge = 2;
    DieAge = 21;
    AnType = Tigris;
}


TTigris::TTigris(std::string const &name, size_t age)
        : TCarnivora(name, age) {
    BornAge = 2;
    DieAge = 21;
    AnType = Tigris;
}

void TTigris::Live(float time) {

    if (time >= 5.f && time <= 6 || time >= 21 && time <= 22)
        std::cout << "Tigris " << this->GetName() << " is eating." << std::endl;

    else if (time > 6 && time <= 15)
        std::cout << "Tigris " << this->GetName() << " is walking." << std::endl;

    else
        std::cout << "Tigris " << this->GetName() << " is sleeping." << std::endl;
}