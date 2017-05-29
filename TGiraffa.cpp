//
// Created by qwerty on 06.03.17.
//
#include "TGiraffa.h"

TGiraffa::TGiraffa() : TArtiodactyla() {
    BornAge = 4;
    DieAge = 25;
    AnType = Giraffa;
}


TGiraffa::TGiraffa(std::string const &name, size_t age)
        : TArtiodactyla(name, age) {
    BornAge = 4;
    DieAge = 25;
    AnType = Giraffa;
}

void TGiraffa::Live(float time) {
    if (time >= 6.f && time <= 10 || time >= 17 && time <= 21)
        std::cout << "Giraffe " << this->GetName() << " is eating." << std::endl;
    else if (time > 10 && time < 17)
        std::cout << "Giraffe " << this->GetName() << " is resting." << std::endl;
    else
        std::cout << "Giraffe " << this->GetName() << " is sleeping." << std::endl;
}