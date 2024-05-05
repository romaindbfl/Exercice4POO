#ifndef TYPEARME_HPP
#define TYPEARME_HPP
#include "Arme.hpp"
#include "Objet.hpp"
#include <iostream>
#include <string>
#include <vector>

class Epee : public Arme
{
public:
    Epee(string nom, string rarete);
};

class Hache : public Arme
{
public:
    Hache(string nom, string rarete);
};

class Baton : public Arme
{
public:
    Baton(string nom, string rarete);
};


#endif