#ifndef POTION_HPP
#define POTION_HPP
#include <iostream>
#include <string>
using namespace std;

class Potion
{
private:
    string nom;
    int pointsDeVie;

public:
   
    Potion(string nom, int pointsDeVie);
    void utiliser();
    // Accesseur pour pointsDeVie
    int getPointsDeVie() const;
};

#endif