#pragma once
#include <thread>
#include <iostream>
#include "TAnimal.h"
#include "TArtiodactyla.h"
#include "TCarnivora.h"
#include "TElephas.h"
#include "TGiraffa.h"
#include "THippopotamus.h"
#include "TLeo.h"
#include "TLoxodonta.h"
#include "TProboscidea.h"
#include "TTigris.h"
#include "TZoo.h"


int main()
{
    TZoo OneZoo("Zoo 1", 8);
    TZoo TwoZoo("Zoo 2", 5);

    TAnimal * Elephant = new TElephas("Bobu", 33);
    if(!OneZoo.AddNewAnimal(&Elephant))
        delete Elephant;
    TAnimal * Giraffe = new TGiraffa("Melaniya", 19);
    if (!OneZoo.AddNewAnimal(&Giraffe))
        delete Giraffe;
    TAnimal * Hippo = new THippopotamus("Jo", 14);
    if(!OneZoo.AddNewAnimal(&Hippo))
        delete Hippo;
    TAnimal * Lion = new TLeo("Simba", 10);
    if(!OneZoo.AddNewAnimal(&Lion))
        delete Lion;
    TAnimal * Elep = new TElephas("Yoyo", 77);
    if(!TwoZoo.AddNewAnimal(&Elep))
        delete Elep;
    TAnimal * Gir = new TGiraffa("Melman", 19);
    if(!TwoZoo.AddNewAnimal(&Gir))
        delete Gir;
    TAnimal * Hip = new THippopotamus("Wawou", 29);
    if(!OneZoo.AddNewAnimal(&Hip))
        delete Hip;
    TAnimal * El = new TLoxodonta("Gloria", 16);
    if(!OneZoo.AddNewAnimal(&El))
        delete El;
    TAnimal * Tiger = new TTigris("Ron", 24);
    if(!TwoZoo.AddNewAnimal(&Tiger))
        delete Tiger;

    int TimeToEx = 0;

    for (size_t i = 0; i < 100; ++i)
    {
        OneZoo.Work();
        std::cout << std::endl;
        TwoZoo.Work();
        std::cout << std::endl;
        if ( TimeToEx == 5){
            size_t num = 0;
            std::cout << "Which animal do you want to exchange? Enter number." << std::endl;
            std::cin >> num;
            Exchange(OneZoo, TwoZoo, (num-1));
            TimeToEx = 0;
        }
        TimeToEx++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}