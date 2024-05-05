#ifndef TYPEARMURE_HPP
#define TYPEARMURE_HPP
#include "Armure.hpp"
#include "Objet.hpp"
#include <iostream>
#include <string>
#include <vector>

class Maille : public Armure
{
public:
    Maille(string nom, string rarete);
};

class Fer : public Armure
{
public:
    Fer(string nom, string rarete);
};

class Cuir : public Armure
{
public:
    Cuir(string nom, string rarete);
};


#endif
