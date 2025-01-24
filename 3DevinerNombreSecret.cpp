#include <iostream> // Bibliothèque pour les entrées et sorties

int main() {
    // Déclaration du nombre secret
    const int secretNumber = 42; // Nombre à deviner
    int userGuess = 0;          // Variable pour stocker la saisie utilisateur
    int attempts = 0;           // Compteur d'essais
    const int maxAttempts = 5;  // Nombre maximal d'essais

    std::cout << "Bienvenue au jeu du nombre secret !" << std::endl;
    std::cout << "Essayez de deviner le nombre secret (entre 1 et 100)." << std::endl;

    // Boucle principale : l'utilisateur a un maximum de 5 essais
    while (attempts < maxAttempts) {
        // Demander à l'utilisateur d'entrer un nombre
        std::cout << "Entrez votre supposition : ";
        std::cin >> userGuess;

        // Incrémenter le compteur d'essais
        attempts++;

        // Vérifier si la saisie est correcte
        if (userGuess == secretNumber) {
            std::cout << "Bravo ! Vous avez deviné le nombre secret en " << attempts << " essai(s) !" << std::endl;
            break; // Sortir de la boucle
        } else if (userGuess < secretNumber) {
            std::cout << "Le nombre secret est plus grand !" << std::endl;
        } else {
            std::cout << "Le nombre secret est plus petit !" << std::endl;
        }

        // Vérifier si l'utilisateur a utilisé tous ses essais
        if (attempts == maxAttempts) {
            std::cout << "Désolé, vous avez utilisé tous vos essais. Le nombre secret était : " << secretNumber << "." << std::endl;
        }
    }

    std::cout << "Merci d'avoir joué ! À bientôt." << std::endl;
    return 0;
}
