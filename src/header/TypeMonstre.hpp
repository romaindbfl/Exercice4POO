#ifndef TYPEMOSNTRE_HPP
#define TYPEMONSTRE_HPP
#include "Monstre.hpp"
#include <iostream>
#include <string>
#include <vector>

class Gobelin : public Monstre
{
public:
    Gobelin(string nom);
};

class Troll : public Monstre
{
public:
    Troll(string nom);
};

class Fantome : public Monstre
{
public:
    Fantome(string nom);
};


#endif
