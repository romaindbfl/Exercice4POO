#ifndef ARMURE_HPP
#define ARMURE_HPP
#include "Objet.hpp"

class Armure : public Objet
{

private:
    float resistance;

public:
    
    // constructeur avec des paramètres pour préciser les attributs
    Armure(string nom, string rarete, string durabilite, float resistance);
    
    void afficher() const;
};

#endif