#include "header/Personnage.hpp"


    // constructeur avec des paramètres pour préciser les attributs
    Personnage::Personnage(string nom, string prenom, float vie, float mana, float endurance, float niveau, float xp, float argent)
    {

        this->nom = nom;
        this->prenom = prenom;
        this->vie = vie;
        this->mana = mana;
        this->endurance = endurance;
        this->niveau = niveau;
        this->xp = xp;
        this->argent = argent;

    }

    void Personnage::afficher() const
    {
        cout << "----------------- " + nom + "" + prenom + " -----------------" << endl;
        cout << "Vie: " << vie << endl;
        cout << "Mana: " << mana << endl;
        cout << "Endurance: " << endurance << endl;
        cout << "Niveau: " << niveau << endl;
        cout << "XP: " << xp << endl;
        cout << "Argent: " << argent << endl;
        cout << "-----------------------------------------" << endl;
    }

    // Méthode pour ajouter une potion au personnage
    void Personnage::ajouterPotion(const Potion &potion)
    {
        potions.push_back(potion);
    }

    // Méthode pour utiliser une potion et regagner des points de vie
    void Personnage::utiliserPotion()
    {
        if (!potions.empty())
        {
            Potion potion = potions.back(); 
            vie += potion.getPointsDeVie();      
            potions.pop_back();            
            potion.utiliser();           
        }
        else
        {
            cout << "Vous n'avez pas de potion !" << endl;
        }
    }

 // Méthode pour attribuer une arme au personnage
    void Personnage::attribuerArme(const Arme& arme)
    {
        armes.push_back(arme);
    }

    void Personnage::attribuerArmure(const Armure &armure)
    {
        armures.push_back(armure);
    }

      void Personnage::afficherEquipement() const
    {
        cout << "Equipement de " << nom << " " << prenom << ":" << endl;
        for (const Arme& arme : armes)
        {
            arme.afficher();
        }
        for (const Armure& armure : armures)
        {
            armure.afficher();
        }
    }

    void Personnage::perdreVie(float degats) {
        vie -= degats;
    }

   void Personnage::attaquerMonstre(Personnage& personnage, Monstre& monstre) {
    cout << "   🗲 🗲 🗲  Attaque du monstre !🗲 🗲 🗲  " << endl;

    // Sélectionner une arme du personnage (ici, on suppose qu'il possède au moins une arme)
    if (!armes.empty() && !armures.empty()) {
        Arme armeUtilisee = armes.front(); // Sélectionner la première arme, à adapter si le personnage peut avoir plusieurs armes
        Armure armureUtilisee = armures.front(); // Sélectionner la première armure, à adapter si le personnage peut avoir plusieurs armures
        // Utiliser les dégâts de l'arme pour infliger des dégâts au monstre
        float degatsInfliges = armeUtilisee.getDegats();
         float resistanceArmure = armureUtilisee.getResistance(); // Obtenir la résistance de l'armure

        // Infliger les dégâts au monstre
        if (degatsInfliges >= monstre.vie) {
            cout << "Le monstre a été tué !" << endl;
            monstre.vie = 0;
            // Récupérer les points d'expérience du monstre
            float xpDuMonstre = monstre.genererQuantiteXP();
            xp += xpDuMonstre;
            float argentDuMonstre = monstre.genererQuantiteArgent();
            argent += argentDuMonstre;
            float viePerdue = monstre.viePerdue();
            vie = monstre.viePerdue() - resistanceArmure;
            cout << "Vous avez gagné " << xpDuMonstre << " points d'expérience et " << argentDuMonstre << " pièces d'or!" << endl;
            cout << "Vie perdue : " << viePerdue << endl;
             // Vérifier si l'expérience dépasse 100
            if (xp >= 100) {
                niveau++; // Augmenter le niveau de 1
                xp = 0; // Réinitialiser l'expérience à 0
                cout << "Niveau augmenté ! Nouveau niveau : " << niveau << endl;
            }
        } else {
            monstre.vie -= degatsInfliges;
            cout << "Le monstre a subi " << degatsInfliges << " points de dégâts !" << endl;
            cout << "Il reste " << monstre.vie << " points de vie au monstre!" << endl;
        }
    } else {
        cout << "Vous n'avez pas d'arme équipée !" << endl;
    }

    cout << "🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲" << endl;
}



    

