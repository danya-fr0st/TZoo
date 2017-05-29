//
// Created by qwerty on 06.03.17.
//

#ifndef TZOO_TTIGRAI_H
#define TZOO_TTIGRAI_H

#pragma once

#include "TCarnivora.h"

class TTigris :
        public TCarnivora {
public:
    TTigris();

    TTigris(std::string const &name, size_t age);

    void Live(float time);

};

#endif //TZOO_TTIGRAI_H
