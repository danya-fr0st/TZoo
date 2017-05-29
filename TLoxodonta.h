
#ifndef TZOO_TLOXODONTA_H
#define TZOO_TLOXODONTA_H

#pragma once

#include "TProboscidea.h"

class TLoxodonta :
        public TProboscidea {
public:
    TLoxodonta();

    TLoxodonta(std::string const &name, size_t age);

    void Live(float time);
};


#endif //TZOO_TLOXODONTA_H
