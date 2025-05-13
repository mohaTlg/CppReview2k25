/*Les fichiers sont des structures de données utilisées pour stocker des informations de manière persistante sur un système de stockage, comme un disque dur. 
En programmation, la manipulation des fichiers est essentielle pour lire, écrire, et gérer des données externes. 
Voici une explication détaillée sur les fichiers en programmation, en particulier en C++ :

Types de fichiers
Fichiers texte : Contiennent des données sous forme de texte lisible par l'homme. Ils sont souvent utilisés pour stocker des configurations, des logs, ou des données structurées comme CSV.
Fichiers binaires : Contiennent des données sous forme binaire, ce qui est plus compact et rapide à lire/écrire, mais moins lisible par l'homme. Utilisés pour stocker des images, des vidéos, ou des fichiers exécutables.

Manipulation des fichiers en C++
En C++, la bibliothèque <fstream> est utilisée pour manipuler les fichiers. Elle fournit trois classes principales :

std::ifstream : Utilisée pour lire des données à partir d'un fichier.
std::ofstream : Utilisée pour écrire des données dans un fichier.
std::fstream : Utilisée pour lire et écrire des données dans un fichier.
Exemple de lecture et écriture de fichiers
Voici un exemple simple de lecture et écriture de fichiers texte en C++ :

Écriture dans un fichier
cpp*/
#include <iostream>
#include <fstream>

int main() {
    std::ofstream fichier("exemple.txt");

    if (fichier.is_open()) {
        fichier << "Bonjour, ceci est un exemple de texte écrit dans un fichier.\n";
        fichier << "C++ est un langage puissant pour la manipulation de fichiers.\n";
        fichier.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier pour écrire.\n";
    }

    return 0;
}

//Lecture d'un fichier
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fichier("exemple.txt");
    std::string ligne;

    if (fichier.is_open()) {
        while (std::getline(fichier, ligne)) {
            std::cout << ligne << std::endl;
        }
        fichier.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier pour lire.\n";
    }

    return 0;
}
/*Concepts clés
Ouverture et fermeture : Les fichiers doivent être ouverts avant d'être manipulés et fermés après utilisation pour libérer les ressources.
Modes d'ouverture : Les fichiers peuvent être ouverts en mode lecture (std::ios::in), écriture (std::ios::out), ajout (std::ios::app), etc.
Gestion des erreurs : Il est important de vérifier si un fichier a été correctement ouvert avant de le manipuler pour éviter les erreurs.
Conclusion
La manipulation des fichiers est une compétence fondamentale en programmation, permettant de gérer des données externes de manière efficace. 
En C++, la bibliothèque <fstream> offre des outils puissants pour lire et écrire des fichiers, facilitant ainsi le développement d'applications qui nécessitent une interaction avec le système de fichiers.*/


//PRATIQUE

#include <iostream>
#include <fstream>
#include <istream>
#include <string>

/*
    std::ios::out, std::ios:in
    std::ios::binary    
    std::ios::trunc    // efface le contenue avant d'ecrire
    std::ios::ate    
    std::ios::app // ecrire a la fin

*/

int main(){
    // lecture
    std::ifstream f("animals.txt"); // std::ios::in

    std::string name("");
    std::string line("");
    
    f >> name;
    std::cout << name << std::endl;
    
    f >> name;
    std::cout << name << std::endl;
    
    //lire une ligne complete
    std::getline(f >> std::ws, line);
    std::cout << line << std::endl;

    std::getline(f >> std::ws, line);
    std::cout << line << std::endl;

    // c++ ferme automatiquement le fichier ouvert à la fin du prog
    // f.is_open(): pour verifier si le fichier est ouvert
    // f.close(): pour fermer un fichier, au cas ou on a besoin de le fermer


    //Ecriture
    std::ofstream f2("data.txt"); // std::ios::out
    if (f2.is_open()) {
        f2 << "Hello World !";
    }
    return 0;
}
