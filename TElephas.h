
#ifndef TZOO_TELEPHAS_H
#define TZOO_TELEPHAS_H

#pragma once
#include "TProboscidea.h"

class TElephas :
        public TProboscidea {
public:
    TElephas();

    TElephas(std::string const &name, size_t age);

    void Live(float time);
};

#endif //TZOO_TELEPHAS_H
