//
// Created by qwerty on 06.03.17.
//

#include "THippopotamus.h"


THippopotamus::THippopotamus() : TArtiodactyla() {
    BornAge = 5;
    DieAge = 63;
    AnType = Hippopotamus;
}


THippopotamus::THippopotamus(std::string const &name, size_t age)
        : TArtiodactyla(name, age) {
    BornAge = 5;
    DieAge = 63;
    AnType = Hippopotamus;
}

void THippopotamus::Live(float time) {
    if (time >= 1.f && time <= 5)
        std::cout << "Hippopotamus " << this->GetName() << " is eating." << std::endl;
    else if (time > 5 && time <= 12 || time >= 18.f && time <= 24 || time < 1)
        std::cout << "Hippopotamus " << this->GetName() << " is sleeping." << std::endl;
    else
        std::cout << "Hippopotamus " << this->GetName() << " is swimming." << std::endl;
}