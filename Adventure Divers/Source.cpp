#include <iostream>
#include "Terminides.h"
#include "Player.h"
#include <vector>
#include <unordered_map>

using namespace std;
int Index = 0;
Player p1;
Terminides t1;

// Structure pour repr�senter un stratag�me
struct Stratageme {
    string nom;
    string description;
};


// Fonction pour activer un stratag�me
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
    // Liste des stratag�mes disponibles avec leur code de combo associ�
    unordered_map<string, Stratageme> stratagemes = {
        {"ZSDZQ", {"Airstrike", "Lance une frappe aerienne sur la zone ciblee."}},
        {"ZZDD", {"Reinforcement", "Fait apparaitre des soldats supplementaires."}},
        {"QDZS", {"Supply Drop", "Largue un conteneur de fournitures pour ravitailler les troupes."}}
        // Ajoute d'autres stratag�mes avec leurs combos si n�cessaire
    };

    cout << "Bienvenue dans AdventureDivers !\n";
    cout << "Amongus " << endl;
    
    while (true) {
        std::system("cls");
        
        // Demande � l'utilisateur de saisir un combo
        cout << "ZSDZQ----ZZDD----QDZS\n";
        cout << "Entrez un combo : ";
        
        string combo;
        cin >> combo;

        // V�rifie si le combo existe dans la liste des stratag�mes
        auto it = stratagemes.find(combo);
        if (it != stratagemes.end()) {
            // Active le stratag�me correspondant
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


