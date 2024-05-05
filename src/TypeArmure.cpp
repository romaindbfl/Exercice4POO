#include "header/TypeArmure.hpp"

    Maille::Maille(string nom, string rarete)
    : Armure(nom, rarete, 100.0f, 100.0f) {}

    Fer::Fer(string nom, string rarete)
    : Armure(nom, rarete, 150.0f, 150.0f) {}

    Cuir::Cuir(string nom, string rarete)
    : Armure(nom, rarete, 50.0f, 50.0f) {}

