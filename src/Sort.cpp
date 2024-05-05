#include "header/Sort.hpp"

// Implémentation du constructeur de la classe Sort
Sort::Sort(string nom, float mana) : nom(nom), mana(mana) {}

// Implémentation du constructeur de la classe SortDegats
SortDegats::SortDegats(string nom, float mana, float degats) : Sort(nom, mana), degats(degats) {}

void SortDegats::afficher() const {
    cout << "----------------- " << nom << " -----------------" << endl;
    cout << "Nom: " << nom << endl;
    cout << "Mana: " << mana << endl;
    cout << "-----------------------------------------" << endl;
}

void SortDegats::useMana() {
    // Utilisation de 30 points de mana
    mana -= 30;
}

float SortDegats::getDegats() const {
    return degats;
}

// Implémentation du constructeur de la classe SortVie
SortVie::SortVie(string nom, float mana, float vie) : Sort(nom, mana), vie(vie) {}

void SortVie::afficher() const {
    cout << "----------------- " << nom << " -----------------" << endl;
    cout << "Nom: " << nom << endl;
    cout << "Mana: " << mana << endl;
    cout << "Vie: " << vie << endl;
    cout << "-----------------------------------------" << endl;
}

void SortVie::useMana() {
    // Utilisation de 50 points de mana
    mana -= 50;
}

float SortVie::getVie() const {
    return vie;
}
