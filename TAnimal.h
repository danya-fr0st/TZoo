
#ifndef TZOO_TANIMAL_H_H
#define TZOO_TANIMAL_H_H

#pragma once

#include <string>
#include <iostream>

enum AnimalType {
    None, Elephas, Giraffa, Hippopotamus, Leo, Loxodonta, Tigris
};

enum AnimalOrder {
    No, Artiodactyla, Carnivora, Proboscidea
};

class TAnimal {
    std::string Name;
    size_t Age;
protected:
    size_t BornAge;
    size_t DieAge;
    bool HaveChild;
    AnimalType AnType;
    AnimalOrder AnOrder;
public:
    TAnimal();

    TAnimal(const std::string &name, size_t age);

    virtual void Live(float time) = 0;

    void Born();

    void Ageplus();

    std::string GetName() const;

    size_t GetAge() const;

    size_t GetBornAge() const;

    size_t GetDieAge() const;

    bool GetHaveChild() const;

    AnimalType GetType() const;

    AnimalOrder GetOrder() const;
};

#endif //TZOO_TANIMAL_H_H
