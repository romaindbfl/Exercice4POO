// AttaquerPerso qui ne marche pas, soluce 1 : les mettre dans un header ?


#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
using namespace std;


class Potion
{
private:
    string nom;
    int pointsDeVie;

public:
    // constructeur par défaut
    Potion() : nom(""), pointsDeVie(0) {}
    // constructeur avec des paramètres pour préciser les attributs

    Potion(string nom, int pointsDeVie)
    {
        this->nom = nom;
        this->pointsDeVie = pointsDeVie;
    }

    void utiliser()
    {
        cout << "Vous avez utilisé une potion de " << nom << " et regagné " << pointsDeVie << " points de vie." << endl;
    }

    // Accesseur pour pointsDeVie
    int getPointsDeVie() const
    {
        return pointsDeVie;
    }
};
    
class Objet
{

public:

    string nom;
    string rarete;
    string durabilite;


    // constructeur par défaut
    Objet() : nom(""), rarete(""), durabilite("") {}
    // constructeur avec des paramètres pour préciser les attributs
    Objet(string nom, string rarete, string durabilite)
    {
        this->nom = nom;
        this->rarete = rarete;
        this->durabilite = durabilite;
    }
};

class Arme : public Objet
{

private:
    float degats;

public:
    // constructeur par défaut
    Arme() : degats(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    Arme(string nom, string rarete, string durabilite, float degats) : Objet(nom, rarete, durabilite)
    {
        this->degats = degats;
    }

    void afficher() const
    {
        cout << "----------------- " << nom << " -----------------" << endl;
        cout << "Nom: " << nom << endl;
        cout << "Rarete: " << rarete << endl;
        cout << "Durabilite: " << durabilite << endl;
        cout << "Degats: " << degats << endl;
        cout << "-----------------------------------------" << endl;
    }
};

class Armure : public Objet
{

private:
    float resistance;

public:
    // constructeur par défaut
    Armure() : resistance(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    Armure(string nom, string rarete, string durabilite, float resistance) : Objet(nom, rarete, durabilite)
    {
        this->resistance = resistance;
    }

    void afficher() const
    {
        cout << "Nom: " << nom << endl;
        cout << "Rarete: " << rarete << endl;
        cout << "Durabilite: " << durabilite << endl;
        cout << "Resistance: " << resistance << endl;
    }
};

class Sort {

    public:

    string nom;
    float mana;
    // constructeur par défaut
    Sort() : nom(""), mana(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    Sort(string nom, float mana)
    {
        this->nom = nom;
        this->mana = mana;
    }

};

class SortDegats : public Sort {
private:
    float degats;

public:
    // Constructeur avec des paramètres pour initialiser les attributs
    SortDegats(string nom, float mana, float degats) : Sort(nom, mana), degats(degats) {}

    void afficher() const
    {
        cout << "----------------- " << nom << " -----------------" << endl;
        cout << "Nom: " << nom << endl;
        cout << "Mana: " << mana << endl; // Utilisation de l'attribut de la classe de base
        cout << "Degats: " << degats << endl;
        cout << "-----------------------------------------" << endl;
    }

    void useMana() {
        // Utilisation de 30 points de mana
        mana -= 30;
    }

    // Méthode publique pour obtenir la valeur de degats
    float getDegats() const {
        return degats;
    }
};

class SortVie : public Sort {
    private:
    float vie;
    public:
    // constructeur par défaut
    SortVie() : vie(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    SortVie(string nom, float mana, float vie) { 
        this->vie = vie;
    }
    void afficher() const
    {
        cout << "----------------- " << nom << " -----------------" << endl;
        cout << "Mana: " << mana << endl;
        cout << "Vie: " << vie << endl;
        cout << "-----------------------------------------" << endl;
    }
    void useMana() {
        // Utilisation de 30 points de mana
        mana -= 50;
    }

      // Méthode publique pour obtenir la valeur de vie
    float getVie() const {
        return vie;
    }
};


class Personnage; 

class Monstre : public Objet
{
    

public:

    string nom;
    float degats;
    float vie;
    float niveau;
    float xp;

    // constructeur par défaut
    Monstre() : nom(""), degats(0.0), vie(0.0), niveau(0.0), xp(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    Monstre(string nom, float degats, float vie, float niveau, float xp)
    {
        this->nom = nom;
        this->degats = degats;
        this->vie = vie;
        this->niveau = niveau;
        this->xp = xp;
    }
    void afficher() const
    {
        cout << "-----------------" +nom+ "-----------------" << endl;
        cout << "Degats: " << degats << endl;
        cout << "Vie: " << vie << endl;
        cout << "Niveau: " << niveau << endl;
        cout << "XP: " << xp << endl;
        cout << "----------------------------------" << endl;
    }

     // Méthode pour générer une quantité aléatoire d'argent lorsque le monstre est tué
    float genererQuantiteArgent() const {
        // Utilisation de rand() pour générer une quantité d'argent aléatoire
        return rand() % 101; 
    }
    
    float genererQuantiteXP() const {
        // Utilisation de rand() pour générer une quantité d'XP aléatoire
        return rand() % 101;
    }

    float viePerdue() const {
        // Utilisation de rand() pour générer une quantité de vie perdue aléatoire
        return rand() % 40;
    }

    void attaquerPersonnage(Personnage& personnage, const SortDegats& sortDegats) { 
        cout << nom << " attaque le personnage !" << endl;
        cout << "Utilisation du sort de dégâts : " << sortDegats.nom << endl;
        personnage.perdreVie(sortDegats.getDegats()); // Réduction de la vie du personnage par les dégâts du sort
        cout << "Le personnage perd " << sortDegats.getDegats() << " points de vie !" << endl;
    }
    
};


class Personnage
{

private:
    string nom;
    string prenom;
    float vie;
    float mana;
    float endurance;
    float niveau;
    float xp;
    float argent;
    vector<Potion> potions; 
    vector<Arme> armes;
    vector<Armure> armures;

public:
    // constructeur par défaut
    Personnage() : nom(""), prenom(""), vie(0.0), mana(0.0), endurance(0.0), niveau(0.0), xp(0.0), argent(0.0) {}
    // constructeur avec des paramètres pour préciser les attributs
    Personnage(string nom, string prenom, float vie, float mana, float endurance, float niveau, float xp, float argent)
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

    void afficher() const
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
    void ajouterPotion(const Potion &potion)
    {
        potions.push_back(potion);
    }

    // Méthode pour utiliser une potion et regagner des points de vie
    void utiliserPotion()
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
    void attribuerArme(const Arme& arme)
    {
        armes.push_back(arme);
    }

    void attribuerArmure(const Armure &armure)
    {
        armures.push_back(armure);
    }

      void afficherEquipement() const
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

    void perdreVie(float degats) {
        vie -= degats;
    }

   void attaquerMonstre(Personnage& personnage, Monstre& monstre, const SortDegats& sortDegats) {
    cout << "   🗲 🗲 🗲  Attaque du monstre !🗲 🗲 🗲  " << endl;
    cout << "Utilisation du sort de dégâts : " << sortDegats.nom << endl;
    personnage.mana -= sortDegats.mana;
    cout << "Vous avez perdu " << sortDegats.mana << "points de mana !" << endl;

    float degatsInfliges = sortDegats.getDegats();
    
    // Vérifier si les dégâts infligés sont suffisants pour tuer le monstre
    if (degatsInfliges >= monstre.vie) {
        cout << "Le monstre a été tué !" << endl;
        monstre.vie = 0;
        // Récupérer les points d'expérience du monstre
        float xpDuMonstre = monstre.genererQuantiteXP();
        xp += xpDuMonstre;
        float argentDuMonstre = monstre.genererQuantiteArgent();
        argent += argentDuMonstre;
        float viePerdue = monstre.viePerdue();
        vie -= viePerdue;
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
    cout << "🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲 🗲" << endl;
    }

    

};

int main()
{
    srand(time(0));
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
    personnage1.afficher();
    return 0;
}