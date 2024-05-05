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
        cout << "-----------------" +nom+ "-----------------" << endl;
        cout << "Degats: " << degats << endl;
        cout << "Vie: " << vie << endl;
        cout << "Niveau: " << niveau << endl;
        cout << "XP: " << xp << endl;
        cout << "----------------------------------" << endl;
    }

     // Méthode pour générer une quantité aléatoire d'argent lorsque le monstre est tué
    float Monstre::genererQuantiteArgent() const {
        // Utilisation de rand() pour générer une quantité d'argent aléatoire
        return rand() % 101; 
    }
    
    float Monstre::genererQuantiteXP() const {
        // Utilisation de rand() pour générer une quantité d'XP aléatoire
        return rand() % 101;
    }

    float Monstre::viePerdue() const {
        // Utilisation de rand() pour générer une quantité de vie perdue aléatoire
        return rand() % 40;
    }

    void Monstre::attaquerPersonnage(Personnage& personnage, const SortDegats& sortDegats) { 
        cout << nom << " attaque le personnage !" << endl;
        cout << "Utilisation du sort de dégâts : " << sortDegats.nom << endl;
        personnage.perdreVie(sortDegats.getDegats()); // Réduction de la vie du personnage par les dégâts du sort
        cout << "Le personnage perd " << sortDegats.getDegats() << " points de vie !" << endl;
    }
    