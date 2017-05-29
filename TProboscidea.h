
#ifndef TZOO_TPROBOSCIDEA_H
#define TZOO_TPROBOSCIDEA_H

#pragma once

#include "TAnimal.h"

class TProboscidea :
        public TAnimal {
public:
    TProboscidea();

    TProboscidea(std::string const &name, size_t age);

    virtual void Live(float time) override = 0;
};

#endif //TZOO_TPROBOSCIDEA_H
