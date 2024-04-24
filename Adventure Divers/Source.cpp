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
    cout << "Activation de : " << stratageme.nom << " - " << stratageme.description << endl;
    p1.attack(t1);
    cout << t1.getName() << " Hp = " << t1.getHealth() << endl;
}


void clearConsole()
{
    std::system("cls");
}


int main() {
    // Liste des stratagèmes disponibles avec leur code de combo associé
    unordered_map<string, Stratageme> stratagemes = {
        {"ZSDZQ", {"Airstrike", "Lance une frappe aerienne sur la zone ciblee."}},
        {"ZZDD", {"Reinforcement", "Fait apparaitre des soldats supplementaires."}},
        {"QDZS", {"Supply Drop", "Largue un conteneur de fournitures pour ravitailler les troupes."}}
        // Ajoute d'autres stratagèmes avec leurs combos si nécessaire
    };

    cout << "Bienvenue dans AdventureDivers !\n";
    cout << "Amongus " << endl;
    
    while (true) {
        std::system("cls");
        
        // Demande à l'utilisateur de saisir un combo
        cout << "ZSDZQ----ZZDD----QDZS\n";
        cout << "Entrez un combo : ";
        
        string combo;
        cin >> combo;

        // Vérifie si le combo existe dans la liste des stratagèmes
        auto it = stratagemes.find(combo);
        if (it != stratagemes.end()) {
            // Active le stratagème correspondant
            activerStratageme(it->second);
        }
        else {
            cout << "Combo invalide !" << endl;
            t1.attack(p1);
            cout << "Divers Hp = " << p1.getHealth() << endl;
        }

        
        
        
        if (t1.getHealth() == 0) {
            cout << "Voulez-vous continuez ? (o/n) ";
            char continuer;
            cin >> continuer;
            if (continuer != 'o' && continuer != 'O') {
                t1.setHealth(30);
                Index += 1;
                break; // Quitte la boucle si l'utilisateur ne veut pas continuer
               
            }
            
        }
    }
    cout << "fIN\n";

    return 0;
}


