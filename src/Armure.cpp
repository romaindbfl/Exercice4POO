#include "header/Armure.hpp"


    Armure::Armure(string nom, string rarete, string durabilite, float resistance) : Objet(nom, rarete, durabilite)
    {
        this->resistance = resistance;
    }

    void Armure::afficher() const
    {
        cout << "Nom: " << nom << endl;
        cout << "Rarete: " << rarete << endl;
        cout << "Durabilite: " << durabilite << endl;
        cout << "Resistance: " << resistance << endl;
    }
