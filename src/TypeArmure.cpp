#include "header/TypeArmure.hpp"

    Maille::Maille(string nom, string rarete)
    : Armure(nom, rarete, 100.0f, 10.0f) {}

    Fer::Fer(string nom, string rarete)
    : Armure(nom, rarete, 150.0f, 15.0f) {}

    Cuir::Cuir(string nom, string rarete)
    : Armure(nom, rarete, 50.0f, 5.0f) {}

