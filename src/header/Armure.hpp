#ifndef ARMURE_HPP
#define ARMURE_HPP
#include "Objet.hpp"

class Armure : public Objet
{

private:
    float resistance;

public:
    
    // constructeur avec des paramètres pour préciser les attributs
    Armure(string nom, string rarete, float durabilite, float resistance);
    
    void afficher() const;
    
    float getResistance() const;
};

#endif