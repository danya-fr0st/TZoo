cmake_minimum_required(VERSION 3.6)
project(TZoo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TAnimal.h TAnimal.cpp TZoo.cpp TZoo.h TArtiodactyla.cpp TArtiodactyla.h TProboscidea.cpp TProboscidea.h TCarnivora.cpp TCarnivora.h TGiraffa.cpp TGiraffa.h THippopotamus.cpp THippopotamus.h TElephas.cpp TElephas.h TLeo.cpp TLeo.h TTigris.cpp TTigris.h TLoxodonta.cpp TLoxodonta.h)
add_executable(TZoo ${SOURCE_FILES})