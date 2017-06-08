#ifndef TZOO_TZOO_H
#define TZOO_TZOO_H

#pragma once

#pragma once

#include "TAnimal.h"
#include "TAnimal.h"
#include "TArtiodactyla.h"
#include "TCarnivora.h"
#include "TElephas.h"
#include "TGiraffa.h"
#include "THippopotamus.h"
#include "TLeo.h"
#include "TLoxodonta.h"
#include "TProboscidea.h"
#include "TTigris.h"
#include "TZoo.h"

const float STEP = 0.5;

class TZoo {
    typedef TAnimal *TPtrAnimal;
    TPtrAnimal *Animals;
    size_t Capacity;
    size_t NumAnimals;
    std::string ZooName;
    float Time;
    float SomeTime;
public:
    TZoo(std::string const &name, size_t capacity);

    ~TZoo();

    static TAnimal* create(std::string name);

    bool AddNewAnimal(TAnimal **newAnimal);

    void New(size_t i);

    bool Die(size_t i);

    void Work();

    friend void Exchange(TZoo &zoo1, TZoo &zoo2, size_t num1);
};

void Exchange(TZoo &zoo1, TZoo &zoo2, size_t num1);

#endif //TZOO_TZOO_H
