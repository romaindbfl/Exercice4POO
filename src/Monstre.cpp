#include "header/Monstre.hpp"

// constructeur avec des paramètres pour préciser les attributs
Monstre::Monstre(string nom, float degats, float vie, float niveau, float xp)
{
    this->nom = nom;
    this->degats = degats;
    this->vie = vie;
    this->niveau = niveau;
    this->xp = xp;
}

void Monstre::afficher() const
{
    cout << "-----------------" + nom + "-----------------" << endl;
    cout << "Degats: " << degats << endl;
    cout << "Vie: " << vie << endl;
    cout << "Niveau: " << niveau << endl;
    cout << "XP: " << xp << endl;
    cout << "----------------------------------" << endl;
}

// Méthode pour générer une quantité aléatoire d'argent lorsque le monstre est tué
float Monstre::genererQuantiteArgent() const
{
    // Utilisation de rand() pour générer une quantité d'argent aléatoire
    return rand() % 101;
}

float Monstre::genererQuantiteXP() const
{
    // Utilisation de rand() pour générer une quantité d'XP aléatoire
    return rand() % 101;
}


float Monstre::viePerdue() const 
{ 
    return degats; 
} 

void Monstre::attaquerPersonnage(Personnage& personnage) {
    cout << nom << " attaque le personnage !" << endl;
    float degatsReels = personnage.perdreVie(degats); // Utilisation des dégâts prédéfinis du monstre pour infliger des dégâts au personnage
    cout << "Le personnage perd " << degats << ", " << "réduit à " << degatsReels << " points de vie " << "grâce à son armure !" << endl; // Afficher les dégâts réels subis
}
