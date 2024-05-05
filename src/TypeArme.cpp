#include "header/TypeArme.hpp"


Epee::Epee(string nom, string rarete)
    : Arme(nom, rarete, 80.0f, 50.0f) {}

Hache::Hache(string nom, string rarete)
    : Arme(nom, rarete, 120.0f, 75.0f) {}

Baton::Baton(string nom, string rarete)
    : Arme(nom, rarete, 100.0f, 20.0f) {}
