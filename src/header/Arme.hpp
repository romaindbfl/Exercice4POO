#ifndef ARME_HPP
#define ARME_HPP
#include "Objet.hpp"

class Arme : public Objet
{

private:
    float degats;

public:
    
    // constructeur avec des paramètres pour préciser les attributs
    Arme(string nom, string rarete, float durabilite, float degats);

    void afficher() const;

    float getDegats() const;
    
};

#endif