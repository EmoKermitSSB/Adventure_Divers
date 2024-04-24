#include <iostream>
#include "Terminides.h"
#include "Player.h"
#include <vector>
#include <unordered_map>

using namespace std;
int Index = 0;
Player p1;
Terminides t1;
bool TER1 = true;
bool TER2 = false;
bool TER3 = false;

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
}


int main() {
    // Liste des stratagèmes disponibles avec leur code de combo associé
    unordered_map<string, Stratageme> stratagemes = {
        {"ZSDZQ", {"Airstrike", "Lance une frappe aerienne sur la zone ciblee."}},
        {"ZZDD", {"500 KG Bombs", "Fait tomber le pouvoir de la démocratie."}},
        {"QDZS", {"Supply Drop", "Largue un conteneur de fournitures pour ravitailler les troupes."}}
        // Ajoute d'autres stratagèmes avec leurs combos si nécessaire
    };

    //Introduction / Tuto
    std::cout << "Bienvenue dans AdventureDivers !";
    std::cout << "\n----------------------------------\n";
    std::cout << "Vous devrez venir a bout des affreux terminides present sur cette planete";
    std::cout << "\n----------------------------------------------------------------------\n";
    std::cout << "Vous devait effectuez des combos pour pouvoir faire des actions, si vous vous rater vous perdrez de la vie !!";
    std::cout << "\n-------------------------------------------------------------------------------------------------------------\n";
    std::cout << "Il existe un enchainement secret qui permet de oneshot l'ennemi a vous de le trouver sans mourir";
    std::cout << "\n---------------------------------------------------------------------------------------------\n";
    std::cout << "Vous infligez 10 degats au ennemi";
    std::cout << "\n--------------------------------\n";
    std::cout << "Bonne Chance soldat et que l'amerique vous sauve !";

    string Startgame;
    std::cin >> Startgame;
    std::system("cls");
    
    std::cout << "\n-------------------------------\n";
    std::cout << "Un " << t1.getName() << " se trouve sur votre route \n";

    char input;
    std::cin >> input;

    if (Startgame.length() >= 0) {
        while (TER1 == true) {

            
            std::system("cls");
            // Demande à l'utilisateur de saisir un combo
            std::cout << "\n-------------------------------\n";
            std::cout << "Degat : ZSDZQ\n";
            std::cout << "Soin : QDZS\n";
            std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
            string input;
            std::cin >> input;


            std::system("cls");
            std::cout <<"Entrez un combo : ";


            //récupère les inputs dans combo pour les utilisers en fonction de quelle combo
            string combo;
            std::cin >> combo;

            //sert à vérifier le combo input pour l'action qu'il execute
            string comboverif;
            comboverif = combo;



            // Vérifie si le combo existe dans la liste des stratagèmes
            auto it = stratagemes.find(combo);
            if (it != stratagemes.end()) {
                // Active le stratagème correspondant
                activerStratageme(it->second);
                if (comboverif == "ZSDZQ") {
                    p1.attack(t1);
                    std::cout << endl << "<<<<<<<<<< " << t1.getName() << " Hp = " << t1.getHealth() << " >>>>>>>>>>" << endl;
                    std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
                    string input;
                    std::cin >> input;
                    std::system("cls");
                }


                if (comboverif == "QDZS") {
                    p1.setHealth(p1.getHealth() + 10);
                    std::cout << endl << "<<<<<<<<<< " << p1.getName() << " Hp = " << p1.getHealth() << " >>>>>>>>>>" << endl;
                    std::system("cls");
                    std::cout << "<<<<<<<<<< " << "Vous avez regagnez 10 HP" << " >>>>>>>>>>" << endl;
                    std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
                    string input;
                    std::cin >> input;
                    std::system("cls");
                }
            }
            else {
                std::system("cls");
                std::cout << "\n----------------------\n";
                std::cout << "Combo invalide !";
                t1.attack(p1);
                std::cout << "\n---------------------------\n";
                std::cout << "<<<<<<<<<< " << "Divers Hp = " << p1.getHealth() << " >>>>>>>>>>" << endl;
                std::system("cls");
            }



            //Demande si l'on veut continuer dés que le monstre est mort
            if (t1.getHealth() == 0) {
                Index += 1;

                std::system("cls");

                std::cout << "\n----------------------------\n";
                std::cout << "Voulez-vous continuez ? (o/n) ";
                t1.setHealth(t1.getHealth() + 30);
                

                

                
                char continuer;
                std::cin >> continuer;

                if (continuer != 'o' && continuer != 'O') {
                    break; // Quitte la boucle si l'utilisateur ne veut pas continuer
                    std::system("cls");
                }

            }else {
                TER1 = false;
                TER2 = true;
            }
        }
        














    if (TER1 == false) 
    {
        std::cout << "Un " << p1.getName() << " se trouve sur votre route \n";

        while (TER2 == true) {


            std::system("cls");
            // Demande à l'utilisateur de saisir un combo
            std::cout << "\n-------------------------------\n";
            std::cout << "Degat : ZSDZQ\n";
            std::cout << "Soin : QDZS\n";
            std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
            string input;
            std::cin >> input;


            std::system("cls");
            std::cout << "Entrez un combo : ";


            //récupère les inputs dans combo pour les utilisers en fonction de quelle combo
            string combo;
            std::cin >> combo;

            //sert à vérifier le combo input pour l'action qu'il execute
            string comboverif;
            comboverif = combo;



            // Vérifie si le combo existe dans la liste des stratagèmes
            auto it = stratagemes.find(combo);
            if (it != stratagemes.end()) {
                // Active le stratagème correspondant
                activerStratageme(it->second);
                if (comboverif == "ZSDZQ") {
                    p1.attack(t1);
                    std::cout << endl << "<<<<<<<<<< " << t1.getName() << " Hp = " << t1.getHealth() << " >>>>>>>>>>" << endl;
                    std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
                    string input;
                    std::cin >> input;
                    std::system("cls");
                }


                if (comboverif == "QDZS") {
                    p1.setHealth(p1.getHealth() + 10);
                    std::cout << endl << "<<<<<<<<<< " << p1.getName() << " Hp = " << p1.getHealth() << " >>>>>>>>>>" << endl;
                    std::system("cls");
                    std::cout << "<<<<<<<<<< " << "Vous avez regagnez 10 HP" << " >>>>>>>>>>" << endl;
                    std::cout << endl << "Appuyer sur une lettre pour continuer..." << endl;
                    string input;
                    std::cin >> input;
                    std::system("cls");
                }
            }
            else {
                std::system("cls");
                std::cout << "\n----------------------\n";
                std::cout << "Combo invalide !";
                t1.attack(p1);
                std::cout << "\n---------------------------\n";
                std::cout << "<<<<<<<<<< " << "Divers Hp = " << p1.getHealth() << " >>>>>>>>>>" << endl;
                std::system("cls");
            }



            //Demande si l'on veut continuer dés que le monstre est mort
            if (t1.getHealth() == 0) {
                Index += 1;

                std::system("cls");

                std::cout << "\n----------------------------\n";
                std::cout << "Voulez-vous continuez ? (o/n) ";
                t1.setHealth(t1.getHealth() + 30);


                char continuer;
                std::cin >> continuer;


                if (continuer != 'o' && continuer != 'O') {
                    break; // Quitte la boucle si l'utilisateur ne veut pas continuer

                }
                std::system("cls");
            }
        }
    }
    }
        









    //Vous remercie d'avoir jouer :}
    std::system("cls");
    std::cout << "\n----------------------";
    std::cout << "Merci d'avoir Jouer !!";
    std::cout << "----------------------\n";
    std::cout << "\n----------------------";
    std::cout << "Vous avez tue " << Index << " Terminides";
    std::cout << "----------------------\n";

    return 0;
}


