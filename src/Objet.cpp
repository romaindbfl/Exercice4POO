#include "header/Objet.hpp"


    // constructeur avec des paramètres pour préciser les attributs
    Objet::Objet(string nom, string rarete, float durabilite)
    {
        this->nom = nom;
        this->rarete = rarete;
        this->durabilite = durabilite;
    }