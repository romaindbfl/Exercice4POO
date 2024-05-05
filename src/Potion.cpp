#include "header/Potion.hpp"


    Potion::Potion(string nom, int pointsDeVie)
    {
        this->nom = nom;
        this->pointsDeVie = pointsDeVie;
    }

    void Potion::utiliser()
    {
        cout << "Vous avez utilisé une potion de " << nom << " et regagné " << pointsDeVie << " points de vie." << endl;
    }

    // Accesseur pour pointsDeVie
    int Potion::getPointsDeVie() const
    {
        return pointsDeVie;
    }
