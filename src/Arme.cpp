#include "header/Arme.hpp"

    // constructeur avec des paramètres pour préciser les attributs
    Arme::Arme(string nom, string rarete, string durabilite, float degats) : Objet(nom, rarete, durabilite)
    {
        this->degats = degats;
    }

    void Arme::afficher() const
    {
        cout << "----------------- " << nom << " -----------------" << endl;
        cout << "Nom: " << nom << endl;
        cout << "Rarete: " << rarete << endl;
        cout << "Durabilite: " << durabilite << endl;
        cout << "Degats: " << degats << endl;
        cout << "-----------------------------------------" << endl;
    }

float Arme::getDegats() const {
    return degats;
}