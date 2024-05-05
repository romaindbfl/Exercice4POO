#ifndef MONSTRE_HPP
#define MONSTRE_HPP
#include "Objet.hpp"
#include "Personnage.hpp"
#include "Sort.hpp"

class Personnage;

class Monstre : public Objet
{
    

public:

    string nom;
    float degats;
    float vie;
    float niveau;
    float xp;

   
    Monstre(string nom, float degats, float vie, float niveau, float xp);
    void afficher() const;
     // Méthode pour générer une quantité aléatoire d'argent lorsque le monstre est tué
    float genererQuantiteArgent() const;
    float genererQuantiteXP() const;

    void attaquerPersonnage(Personnage& personnage);
    
    float viePerdue() const;
    
};

#endif