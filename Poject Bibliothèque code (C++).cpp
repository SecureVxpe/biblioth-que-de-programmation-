#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

// Structure pour stocker les bibliothèques par projet
map<string, vector<string>> bibliothequesCPlusPlus;
map<string, vector<string>> bibliothequesPython;
map<string, vector<string>> bibliothequesJavaScript;

// Fonction pour initialiser les bibliothèques
void initialiserBibliotheques() {
    // Bibliothèques pour C++
    bibliothequesCPlusPlus["jeu"] = {"SFML", "SDL", "OpenGL"};
    bibliothequesCPlusPlus["web"] = {"C++ REST SDK", "Boost.Beast"};
    bibliothequesCPlusPlus["IA"] = {"TensorFlow", "Dlib"};

    // Bibliothèques pour Python
    bibliothequesPython["jeu"] = {"Pygame", "Arcade", "Pyglet"};
    bibliothequesPython["web"] = {"Flask", "Django", "FastAPI"};
    bibliothequesPython["IA"] = {"TensorFlow", "Keras", "PyTorch"};

    // Bibliothèques pour JavaScript
    bibliothequesJavaScript["jeu"] = {"Three.js", "Babylon.js", "Phaser"};
    bibliothequesJavaScript["web"] = {"React", "Vue.js", "Node.js"};
    bibliothequesJavaScript["IA"] = {"TensorFlow.js", "Brain.js", "Synaptic"};
}

// Fonction pour afficher les bibliothèques recommandées
void afficherBibliotheques(const string& langage, const string& projet) {
    if (langage == "C++") {
        if (bibliothequesCPlusPlus.find(projet) != bibliothequesCPlusPlus.end()) {
            cout << "Les bibliothèques recommandées pour C++ dans le projet " << projet << " sont :\n";
            for (const string& biblio : bibliothequesCPlusPlus[projet]) {
                cout << "- " << biblio << endl;
            }
        } else {
            cout << "Projet invalide pour C++.\n";
        }
    } else if (langage == "Python") {
        if (bibliothequesPython.find(projet) != bibliothequesPython.end()) {
            cout << "Les bibliothèques recommandées pour Python dans le projet " << projet << " sont :\n";
            for (const string& biblio : bibliothequesPython[projet]) {
                cout << "- " << biblio << endl;
            }
        } else {
            cout << "Projet invalide pour Python.\n";
        }
    } else if (langage == "JavaScript") {
        if (bibliothequesJavaScript.find(projet) != bibliothequesJavaScript.end()) {
            cout << "Les bibliothèques recommandées pour JavaScript dans le projet " << projet << " sont :\n";
            for (const string& biblio : bibliothequesJavaScript[projet]) {
                cout << "- " << biblio << endl;
            }
        } else {
            cout << "Projet invalide pour JavaScript.\n";
        }
    } else {
        cout << "Langage invalide.\n";
    }
}

int main() {
    string langage, projet;

    // Initialisation des bibliothèques
    initialiserBibliotheques();

    // Demander à l'utilisateur d'entrer le langage et le projet
    cout << "Entrez le langage de programmation (C++, Python, JavaScript): ";
    cin >> langage;
    cout << "Entrez le type de projet (jeu, web, IA): ";
    cin >> projet;

    // Afficher les bibliothèques recommandées
    afficherBibliotheques(langage, projet);

    return 0;
}
