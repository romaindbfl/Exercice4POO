#include "header/TypeMonstre.hpp"

Gobelin::Gobelin(string nom)
    : Monstre(nom, 25.0f, 125.0f, 1.0f, 50.0f) {}

Troll::Troll(string nom)
    : Monstre(nom, 30.0f, 130.0f, 1.0f, 50.0f) {}

Fantome::Fantome(string nom)
    : Monstre(nom, 50.0f, 75.0f, 1.0f, 75.0f) {}
