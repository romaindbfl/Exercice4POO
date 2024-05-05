#ifndef ARCHETYPE_HPP
#define ARCHETYPE_HPP
#include "Personnage.hpp"
#include <iostream>
#include <string>
#include <vector>

class Mage : public Personnage
{
public:
    Mage(string nom, string prenom);
};

class Guerrier : public Personnage
{
public:
    Guerrier(string nom, string prenom);
};

class Voleur : public Personnage
{
public:
    Voleur(string nom, string prenom);
};


#endif
