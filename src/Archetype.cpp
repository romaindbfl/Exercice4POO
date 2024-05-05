#include "header/Archetype.hpp"


Mage::Mage(string nom, string prenom)
    : Personnage(nom, prenom, 80.0f, 150.0f, 100.0f, 1.0f, 0.0f, 50.0f) {}

Guerrier::Guerrier(string nom, string prenom)
    : Personnage(nom, prenom, 120.0f, 50.0f, 200.0f, 1.0f, 0.0f, 50.0f) {}

Voleur::Voleur(string nom, string prenom)
    : Personnage(nom, prenom, 100.0f, 100.0f, 150.0f, 1.0f, 0.0f, 50.0f) {}
