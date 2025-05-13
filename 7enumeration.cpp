#include <iostream>

/*Les énumérations en C++ sont un type de données qui permet de définir un ensemble de constantes nommées. 
Elles sont utiles pour représenter des valeurs discrètes et faciliter la lecture et la maintenance du code. Voici une explication détaillée sur les énumérations en C++ :

Définition d'une énumération
Une énumération est définie à l'aide du mot-clé enum. Voici un exemple simple :

cpp*/
enum Couleur {
    Rouge,
    Vert,
    Bleu
};
/*Dans cet exemple, Couleur est un type énuméré qui contient trois valeurs : Rouge, Vert, et Bleu.

Utilisation des énumérations
Les énumérations peuvent être utilisées pour déclarer des variables qui prennent l'une des valeurs définies dans l'énumération :

cpp*/
Couleur maCouleur = Rouge;

/*Valeurs par défaut
Par défaut, les valeurs des énumérations commencent à 0 et augmentent de 1 pour chaque élément suivant. Vous pouvez également spécifier des valeurs explicites :

cpp*/
enum Jour {
    Lundi = 1,
    Mardi,
    Mercredi,
    Jeudi = 10,
    Vendredi
};
/*Dans cet exemple, Lundi a la valeur 1, Mardi a la valeur 2, Mercredi a la valeur 3, Jeudi a la valeur 10, et Vendredi a la valeur 11.

Énumérations fortement typées
C++11 a introduit les énumérations fortement typées avec le mot-clé enum class, qui offre une meilleure sécurité de type et évite les conflits de noms :

cpp*/
enum class Direction {
    Nord,
    Sud,
    Est,
    Ouest
};

Direction maDirection = Direction::Nord;

/*
Avantages des énumérations
Lisibilité : Les énumérations rendent le code plus lisible en utilisant des noms significatifs au lieu de valeurs numériques.
Maintenance : Elles facilitent la modification des valeurs sans affecter le reste du code.
Sécurité de type : Les énumérations fortement typées évitent les erreurs de type et les conflits de noms.
Conclusion
Les énumérations sont un outil puissant en C++ pour gérer des ensembles de valeurs discrètes de manière lisible et maintenable. 
Elles sont particulièrement utiles dans les situations où vous avez besoin de représenter des états ou des options prédéfinies.*/

//Pratique:


//enumeration reguliere ( porté globale)
enum NaturalElement{
    earth, // 0
    air,    // 1
    fire,   // 2
    water   // 3
};

// enumeration etendue: porté limité a l'enum, plus de convertion implicite
enum class NaturalElement2{ //on peut ecrire struct au lieu de class
    earth, 
    air,    
    fire,   
    water   
};

int main(){
    NaturalElement ne{water};
    NaturalElement2 ne2{NaturalElement2::fire};

    std::cout << ne << std::endl;
    std::cout << static_cast<int>(ne2) << std::endl; //on fait la conversion pour l'affichage 
    return 0;
}

