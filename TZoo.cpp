#include "TZoo.h"


TZoo::TZoo(std::string const &name, size_t capacity)
        : Capacity(capacity), NumAnimals(0), ZooName(name), Time(0), SomeTime(0) {
    Animals = new TPtrAnimal[Capacity];
    memset(Animals, 0, sizeof(TPtrAnimal) * Capacity);
}

TZoo::~TZoo() {
    for (size_t i = 0; i < NumAnimals; ++i) {
        delete Animals[i];
    }
    delete[] Animals;
}

void TZoo::Work() {
    std::cout << ZooName << std::endl;
    if (Animals == nullptr) {
        std::cout << "No animals." << std::endl;
        return;
    }
    for (size_t i = 0; i < NumAnimals; ++i) {
        if (Animals[i] != nullptr) {
            if (!Die(i)) {
                // Демонстрация работы динамического полиморфизма
                Animals[i]->Live(Time);
                New(i);
                if (Time == 24)
                    Animals[i]->Ageplus();
            } else i--;
        }
    }
    Time += STEP;
    if (Time > 24.f)
        Time -= 24.f;
}

bool TZoo::AddNewAnimal(TAnimal **animal) {
    if (animal == nullptr)
        return false;

    if (NumAnimals == Capacity)
        return false;

    Animals[NumAnimals] = *animal;
    *animal = nullptr;
    ++NumAnimals;
    return true;
}

bool GetRand(size_t age, size_t someAge) {
    if ((rand() % 10) * (age / someAge) > 4) return true;
    else return false;
}

bool TZoo::Die(size_t i) {
    if (Animals[i]->GetAge() >= Animals[i]->GetDieAge()
        && GetRand(Animals[i]->GetAge(), Animals[i]->GetDieAge())
        && NumAnimals > 0) {
        NumAnimals--;
        std::cout << Animals[i]->GetName() << " died." << std::endl;
        TAnimal *p = Animals[i];
        Animals[i] = Animals[NumAnimals];
        delete p;
        return true;
    } else return false;
}

void TZoo::New(size_t i) {
    if (Animals[i]->GetAge() >= Animals[i]->GetBornAge()
        && !Animals[i]->GetHaveChild()
        && GetRand(Animals[i]->GetAge(), Animals[i]->GetBornAge())) {
        for (size_t k = i + 1; k < NumAnimals; k++) {
            if (Animals[k]->GetAge() >= Animals[k]->GetBornAge()
                && !Animals[k]->GetHaveChild()
                && Animals[i]->GetType() == Animals[k]->GetType()) {
                if (NumAnimals == Capacity) return;
                std::string name;
                std::cout << Animals[i]->GetName() << " and " << Animals[k]->GetName() << " have child." << std::endl;
                std::cin >> name;
                TAnimal *child;
                switch (Animals[i]->GetType()) {
                    case (Elephas):
                        child = new TElephas(name, 0);
                        break;
                    case (Giraffa):
                        child = new TGiraffa(name, 0);
                        break;
                    case (Hippopotamus):
                        child = new THippopotamus(name, 0);
                        break;
                    case (Leo):
                        child = new TLeo(name, 0);
                        break;
                    case (Loxodonta):
                        child = new TLoxodonta(name, 0);
                        break;
                    case (Tigris):
                        child = new TTigris(name, 0);
                        break;
                }
                AddNewAnimal(&child);
                Animals[i]->Born();
                Animals[k]->Born();
            }
        }
    }
}


void Exchange(TZoo &zoo1, TZoo &zoo2, size_t num1) {
    if (zoo1.Animals[num1] == nullptr) {
        std::cout << "Exchanged failed." << std::endl;
        return;
    }
    size_t i = 0;
    while (zoo2.Animals[i]->GetOrder() != zoo1.Animals[num1]->GetOrder()) {
        i++;
        if (i == zoo2.NumAnimals) {
            std::cout << "Exchanged failed." << std::endl;
            return;
        }
    }
    TAnimal *ptr = zoo2.Animals[i];
    zoo2.Animals[i] = zoo1.Animals[num1];
    zoo1.Animals[num1] = ptr;
    delete ptr;
    std::cout << "Exchange succeed. " << zoo2.Animals[i]->GetName() << " was exchanged to "
              << zoo1.Animals[num1]->GetName() << "." << std::endl;
    return;
}