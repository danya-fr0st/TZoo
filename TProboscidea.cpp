#include "TProboscidea.h"


TProboscidea::TProboscidea()
        : TAnimal() {
    AnOrder = Proboscidea;
}


TProboscidea::TProboscidea(std::string const &name, size_t age)
        : TAnimal(name, age) {
    AnOrder = Proboscidea;
}