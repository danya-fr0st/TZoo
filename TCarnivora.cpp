
#include "TCarnivora.h"

TCarnivora::TCarnivora()
        : TAnimal() {
    AnOrder = Carnivora;
}

TCarnivora::TCarnivora(std::string const &name, size_t age)
        : TAnimal(name, age) {
    AnOrder = Carnivora;
}
