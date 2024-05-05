#ifndef OBJET_HPP
#define OBJET_HPP
#include <iostream>
#include <string>
using namespace std;

class Objet
{

public:

    

    string nom;
    string rarete;
    string durabilite;
    Objet() = default;
    // constructeur avec des paramètres pour préciser les attributs
    Objet(string nom, string rarete, string durabilite);
};

#endif