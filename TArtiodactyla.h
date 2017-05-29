#include "TAnimal.h"

#ifndef TZOO_TARTIODACTYLA_H
#define TZOO_TARTIODACTYLA_H

#pragma once

#include "TAnimal.h"

class TArtiodactyla :
        public TAnimal {
public:
    TArtiodactyla();

    TArtiodactyla(std::string const &name, size_t age);

    virtual void Live(float time) override = 0;

};

#endif //TZOO_TARTIODACTYLA_H
