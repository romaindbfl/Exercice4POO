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

   float Personnage::perdreVie(float degats) {
    // Si le personnage possède une armure
    if (!armures.empty()) {
        Armure armureUtilisee = armures.front(); // Sélectionner la première armure, à adapter si le personnage peut avoir plusieurs armures
        float resistance = armureUtilisee.getResistance();
        float degatsReels = degats - resistance; // Calculer les dégâts réels subis en prenant en compte la résistance de l'armure
        if (degatsReels < 0) degatsReels = 0; // S'assurer que les dégâts réels ne deviennent pas négatifs
        vie -= degatsReels; // Réduire la vie du personnage par les dégâts réels
        return degatsReels; // Retourner les dégâts réels subis
    } else {
        vie -= degats; // Si le personnage n'a pas d'armure, les dégâts sont appliqués directement à sa vie
        return degats; // Retourner les dégâts subis sans prendre en compte la résistance de l'armure
    }
}


   void Personnage::attaquerMonstre(Personnage& personnage, Monstre& monstre) {
    cout << "   🗲 🗲 🗲  Attaque du monstre !🗲 🗲 🗲  " << endl;

    // Sélectionner une arme du personnage (ici, on suppose qu'il possède au moins une arme)
    if (!armes.empty()) {
        Arme armeUtilisee = armes.front(); // Sélectionner la première arme, à adapter si le personnage peut avoir plusieurs armes
        // Utiliser les dégâts de l'arme pour infliger des dégâts au monstre
        float degatsInfliges = armeUtilisee.getDegats();
        // Infliger les dégâts au monstre
        if (degatsInfliges >= monstre.vie) {
            cout << "Le monstre a été tué !" << endl;
            monstre.vie = 0;
            // Récupérer les points d'expérience du monstre
            float xpDuMonstre = monstre.genererQuantiteXP();
            xp += xpDuMonstre;
            float argentDuMonstre = monstre.genererQuantiteArgent();
            argent += argentDuMonstre;
            cout << "Vous avez gagné " << xpDuMonstre << " points d'expérience et " << argentDuMonstre << " pièces d'or!" << endl;
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
