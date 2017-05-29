//
// Created by qwerty on 06.03.17.
//

#ifndef TZOO_TGIRAFFA_H
#define TZOO_TGIRAFFA_H

#pragma once
#include "TArtiodactyla.h"

class TGiraffa :
        public TArtiodactyla {
public:
    TGiraffa();

    TGiraffa(std::string const &name, size_t age);

    void Live(float time);

};


#endif //TZOO_TGIRAFFA_H
