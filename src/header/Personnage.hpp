#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
#include <iostream>
#include <string>
#include <vector>

class Monstre;

#include "Monstre.hpp"
#include "Potion.hpp"
#include "Sort.hpp"
#include "Arme.hpp"
#include "Armure.hpp"
using namespace std;

class Personnage
{

private:
    string nom;
    string prenom;
    float vie;
    float mana;
    float endurance;
    float niveau;
    float xp;
    float argent;
    vector<Potion> potions; 
    vector<Arme> armes;
    vector<Armure> armures;

public:
   
    Personnage(string nom, string prenom, float vie, float mana, float endurance, float niveau, float xp, float argent);
    void afficher() const;

    // Méthode pour ajouter une potion au personnage
    void ajouterPotion(const Potion &potion);
    // Méthode pour utiliser une potion et regagner des points de vie
    void utiliserPotion();

 // Méthode pour attribuer une arme au personnage
    void attribuerArme(const Arme& arme);
    void attribuerArmure(const Armure &armure);
    void afficherEquipement() const;

    float perdreVie(float degats);
   void attaquerMonstre(Personnage& personnage, Monstre& monstre);

};

#endif