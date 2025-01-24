#include <iostream> // Inclure la bibliothèque standard pour les entrées et sorties

int main() {
    std::cout << "Hello, World!" << std::endl; // Afficher "Hello, World!" suivi d'un retour à la ligne
    return 0; // Indiquer que le programme s'est exécuté correctement
}

/*
    std::cout : affichage standard (en memoire tampon)
    std::cerr : erreur (affichage direct)
    std::clog : journalisation (en memoire tampon)

    std::endl : retour à la ligne (\n) + flush
    std::flush : (vider le tampon)

    \n : retour à la ligne
    \t : tabulation
    \\ : afficher un antislash
*/