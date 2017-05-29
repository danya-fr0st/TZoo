//
// Created by qwerty on 06.03.17.
//

#ifndef TZOO_TLEO_H
#define TZOO_TLEO_H

#pragma once
#include "TCarnivora.h"

class TLeo :
        public TCarnivora {
public:
    TLeo();

    TLeo(std::string const &name, size_t age);

    void Live(float time);
};

#endif //TZOO_TLEO_H
