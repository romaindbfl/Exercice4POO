#include <iostream>
#include "header/Arme.hpp"
#include "header/Armure.hpp"
#include "header/Personnage.hpp"
#include "header/Monstre.hpp"
#include "header/Objet.hpp"
#include "header/Potion.hpp"
#include "header/Sort.hpp"
#include "header/Archetype.hpp"
#include "header/TypeArme.hpp"
#include "header/TypeArmure.hpp"
#include "header/TypeMonstre.hpp"

int main() {

 srand(time(0));
 /*
    Personnage personnage1("Hyper", "Riale", 50.0, 100.0, 100.0, 1.0, 0.0, 0.0);
    personnage1.afficher();
    Arme arme1("Baton", "Commun", "10", 20.0);
    //arme1.afficher();
    Armure armure1("Bouclier", "Commun", "10", 100.0);
    //armure1.afficher();
    Monstre monstre1("Gobelin", 100.0, 100.0, 1.0, 0.0);
    //monstre1.afficher();
    Monstre monstre2("Squelette", 100.0, 40.0, 2.0, 0.0);
    // Création et ajout d'une potion au personnage
    Potion potion1("Potion de soin", 20);
    personnage1.ajouterPotion(potion1);

    // Utilisation de la potion
    personnage1.utiliserPotion();
    personnage1.afficher(); // Affichage de l'état du personnage après avoir utilisé la potion
    personnage1.attribuerArme(arme1);
    personnage1.attribuerArmure(armure1);
    // Affichage de l'équipement du personnage
    personnage1.afficherEquipement();
     // Simuler le combat entre le personnage et le monstre
    SortDegats sortDegats("Boule de feu", 10, 30.0);
    personnage1.attaquerMonstre(personnage1, monstre1, sortDegats);
    personnage1.afficher();
    personnage1.attaquerMonstre(personnage1, monstre1, sortDegats);
    personnage1.attaquerMonstre(personnage1, monstre1, sortDegats);
    personnage1.attaquerMonstre(personnage1, monstre1, sortDegats);
    personnage1.afficher();
    personnage1.attaquerMonstre(personnage1, monstre2, sortDegats);
    monstre1.attaquerPersonnage(personnage1, sortDegats);
    personnage1.afficher();*/
      // Création d'un mage
    //Mage mage("Merlin", "L'Enchanteur");

    // Création d'un guerrier
    Guerrier guerrier("Conan", "Le Barbare");

    // Création d'un voleur
    //Voleur voleur("Robin", "Des Bois");

// Création d'un monstre
Gobelin gobelin1("Gobelin");

    // Affichage des statistiques de chaque personnage
    //mage.afficher();
    guerrier.afficher();
    //voleur.afficher();
    SortDegats sortDegats("Boule de feu", 10, 30.0);
    Baton baton1("Baton", "Commun");
    Maille maille1("Maille", "Commun");
    Hache hache1("Axe", "Commun");
    guerrier.attribuerArme(hache1);
    guerrier.attribuerArmure(maille1);
    guerrier.attaquerMonstre(guerrier, gobelin1);
    guerrier.afficher();
    gobelin1.attaquerPersonnage(guerrier);
    guerrier.afficher();
    guerrier.attaquerMonstre(guerrier, gobelin1);
    guerrier.afficher();

    return 0;

}    
  