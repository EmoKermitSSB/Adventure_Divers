#include <iostream>
#include "Terminides.h"
#include "Player.h"
#include <vector>
#include <unordered_map>

using namespace std;
int Index = 0;
Player p1;
Terminides t1;

// Structure pour représenter un stratagème
struct Stratageme {
    string nom;
    string description;
};


// Fonction pour activer un stratagème
void activerStratageme(const Stratageme& stratageme) {
    std::system("cls");
    std::cout << "\n-------------------------------------------------------------------------";
    std::cout << endl << "Activation de : " << stratageme.nom << " - " << stratageme.description << endl;
    p1.attack(t1);
    std::cout << endl <<"<<<<<<<<<< " << t1.getName() << " Hp = " << t1.getHealth() << " >>>>>>>>>>" << endl;
}


int main() {
    // Liste des stratagèmes disponibles avec leur code de combo associé
    unordered_map<string, Stratageme> stratagemes = {
        {"ZSDZQ", {"Airstrike", "Lance une frappe aerienne sur la zone ciblee."}},
        {"ZZDD", {"Reinforcement", "Fait apparaitre des soldats supplementaires."}},
        {"QDZS", {"Supply Drop", "Largue un conteneur de fournitures pour ravitailler les troupes."}}
        // Ajoute d'autres stratagèmes avec leurs combos si nécessaire
    };

    //Introduction / Tuto
    std::cout << "Bienvenue dans AdventureDivers !";
    std::cout << "\n----------------------------------\n";
    std::cout << "Vous devrez venir a bout des affreux terminides present sur cette planete";
    std::cout << "\n----------------------------------------------------------------------\n";
    std::cout << "Vous aurez 5 sec pour faire le combo aussi non vous perdrez des PV !";
    std::cout << "\n----------------------------------------------------\n";
    std::cout << "Bonne Chance soldat et que l'amerique vous sauve !";

    string Startgame;
    std::cin >> Startgame;
    std::system("cls");


    if (Startgame.length() >= 0) {
        while (true) {


            // Demande à l'utilisateur de saisir un combo
            std::cout << "\n-------------------------------\n";
            std::cout << "Combos Possible : ZSDZQ\n";
            std::cout <<"Entrez un combo : ";

            string combo;
            std::cin >> combo;
            string comboverif;
            comboverif = combo;

            // Vérifie si le combo existe dans la liste des stratagèmes
            auto it = stratagemes.find(combo);
            if (it != stratagemes.end()) {
                // Active le stratagème correspondant
                activerStratageme(it->second);
            }
            else {
                std::system("cls");
                std::cout << "\n----------------------\n";
                std::cout << "Combo invalide !";
                t1.attack(p1);
                std::cout << "\n---------------------------\n";
                std::cout << "<<<<<<<<<< " << "Divers Hp = " << p1.getHealth() << " >>>>>>>>>>" << endl;
            }



            //Demande si l'on veut continuer dés que le monstre est mort
            if (t1.getHealth() == 0) {
                std::system("cls");
                std::cout << "\n----------------------------\n";
                std::cout << "Voulez-vous continuez ? (o/n) ";
                char continuer;
                std::cin >> continuer;
                if (continuer != 'o' && continuer != 'O') {
                    t1.setHealth(30);
                    Index += 1;
                    break; // Quitte la boucle si l'utilisateur ne veut pas continuer

                }
                std::system("cls");
            }
        }
        //Vous remercie d'avoir jouer :}
        std::system("cls");
        std::cout << "\n----------------------";
        std::cout << "Merci d'avoir Jouer !!";
        std::cout << "----------------------\n";
    }

    
    /*vector<string> combo = {"SSZZ", "SDZQS", "QQDDZ"};

    for (auto combos : combo) 
    {
        cout << combos << endl;
    }*/

    return 0;
}


