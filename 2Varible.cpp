#include <iostream>

/*
variables:
    lien pour les types les plus utilise: https://github.com/jasonchampagne/FormationVideo/blob/master/Ressources/C%2B%2B/types-fondamentaux.md
    il est interdit d'utiliser les mots réservés comme noms de variables
        exemple: int, float, if, else, return, for, while, class, private.
    conventions de nommage: camelCase, snake_case
*/

int main() {
    // bool is_secure {};
    int age = 25;           // Variable entière
    int some_number {25};   // variable entiere d'une autre façon
    float height_in_meters = 1.75;       // Variable à virgule flottante
    char grade = 'A';                    // Variable de type caractère
    std::string firstName = "Mohamed";   // Variable de type chaîne de caractères
    bool isStudent = true;               // Variable booléenne (vrai ou faux)


    // Affichage des valeurs des variables
    std::cout << "Nom : " << firstName << std::endl;
    std::cout << "Âge : " << age << std::endl;
    std::cout << "Taille (en mètres) : " << height_in_meters << std::endl;
    std::cout << "Note obtenue : " << grade << std::endl;
    std::cout << "Est étudiant ? " << (isStudent ? "Oui" : "Non") << std::endl;
    std::cout << "Age aussi : " << some_number << std::endl;

    // Séparateurs dans les littéraux numeriques
    int largeNumber = 1'000'000;  // Plus lisible que 1000000
    long binary = 0b1010'1101'0010;  // Binaire structuré

    /*
        Le mot-clé auto en C++ permet de déduire automatiquement le type d'une variable en fonction de la valeur avec laquelle elle est initialisée. Il a été introduit dans C++11 et simplifie le code en supprimant la nécessité de spécifier explicitement les types.
        auto x = 10;        // Déduit comme int
        auto y = 3.14;      // Déduit comme double
        auto name = "Moussa"; // Déduit comme const char*

    */
    auto last_name = "Diallo"; 


    return 0;
}