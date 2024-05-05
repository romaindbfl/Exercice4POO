#ifndef SORT_HPP
#define SORT_HPP
#include <iostream>
#include <string>
using namespace std;

class Sort {

    public:

    string nom;
    float mana;

    // constructeur avec des paramètres pour préciser les attributs
    Sort(string nom, float mana);
   

};

class SortDegats : public Sort {
private:
    float degats;

public:
    // Constructeur avec des paramètres pour initialiser les attributs
    SortDegats(string nom, float mana, float degats);

    void afficher() const;

    void useMana();

    // Méthode publique pour obtenir la valeur de degats
    float getDegats() const;
};


class SortVie : public Sort {
    private:
    float vie;
    public:
   
    // constructeur avec des paramètres pour préciser les attributs
    SortVie(string nom, float mana, float vie);
    void afficher() const;
    void useMana();

      // Méthode publique pour obtenir la valeur de vie
    float getVie() const;
};

#endif