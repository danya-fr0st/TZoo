

#ifndef TZOO_TCARNIVORA_H
#define TZOO_TCARNIVORA_H

#pragma once

#include "TAnimal.h"

class TCarnivora :
        public TAnimal {
public:
    TCarnivora();

    TCarnivora(std::string const &name, size_t age);

    virtual void Live(float time) override = 0;
};


#endif //TZOO_TCARNIVORA_H
