//
// Created by qwerty on 06.03.17.
//

#ifndef TZOO_THIPPOPOTAMUS_H
#define TZOO_THIPPOPOTAMUS_H

#pragma once
#include "TArtiodactyla.h"

class THippopotamus :
        public TArtiodactyla {
public:
    THippopotamus();

    THippopotamus(std::string const &name, size_t age);

    void Live(float time);

};

#endif //TZOO_THIPPOPOTAMUS_H
