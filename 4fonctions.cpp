#include <iostream>
#include <vector>
#include <algorithm>

/*
    #include <vector>: fournit la classe std::vector, qui représente un tableau dynamique. Contrairement aux tableaux statiques, un std::vector peut redimensionner automatiquement sa capacité en fonction des besoins
    #include <algorithm>: contient des fonctions utilitaires pour effectuer des opérations courantes sur les conteneurs (comme les vecteurs, listes, tableaux, etc.). Ces algorithmes STL permettent de trier, rechercher, transformer, ou manipuler les données.
*/

/*
    historiquement une fonction qui ne renvoie rien est une procedure
*/

void afficheBonjour() {
    std::cout << "Bonjour, le monde!" << std::endl;
}

int sum(int a, int b) {
    return a + b;
}

void increment(int &num){
    num++; // Modification de la variable directement via sa référence
}

int& getLargest(int& a, int& b) {
    return (a > b) ? a : b; // Retourne une référence à la plus grande valeur
}

int main() {
    afficheBonjour(); // Appel de la fonction
    int resultat = sum(5, 10); // Appel de la fonction avec des paramètres
    std::cout << "La somme de 5 et 10 est : " << resultat << std::endl; // Affichage du résultat

    /*
    une référence est un type de variable qui agit comme un alias pour une autre variable déjà existante. Cela signifie que la référence n'est pas une copie de la variable, mais plutôt un autre nom pour accéder directement à cette même variable en mémoire.
    Une référence doit être liée à une variable au moment de sa déclaration.
    Elle ne peut pas être réassignée pour référencer une autre variable.
    */
    int x = 5, y = 20;
    int& reference = x; // Création d'une référence sur x
    std::cout << "Avant modification : x = " << x << std::endl;
    reference = 10; // Modification de la variable à laquelle la référence est liée
    std::cout << "Apres modification : x = " << x << std::endl;

    increment(reference);
    std::cout << "Apres incrementation a traver la fonction increment : x = " << x << std::endl; // Affichage du résultat

    int& largest = getLargest(x, y); // Appel de la fonction avec des références
    std::cout << "La plus grande valeur est : " << largest << std::endl; // Affichage du résultat
    largest = 25; // change la valeur d'origine de la plus grande
    std::cout << " x = " << x << ", y = " << y << std::endl;
    /*
    Quand utiliser des références ?
    Pour éviter les copies inutiles :
    Par exemple, lors du passage d'objets lourds à des fonctions.
    Pour modifier directement des variables dans une fonction :
    Comme vu dans l'exemple avec l'incrémentation.
    Pour simplifier la syntaxe par rapport aux pointeurs.
    */


   /*
   La surcharge de fonction (function overloading) en C++ est une fonctionnalité qui permet de déclarer plusieurs fonctions ayant le même nom mais des signatures différentes (différents types ou nombres de paramètres). Cela permet d'adapter une fonction pour gérer différents types de données ou cas d'utilisation tout en conservant une interface claire.
   */

    /*Expressions lambda
    En C++, une expression lambda (ou fonction anonyme) est une façon concise de définir une fonction directement à l'endroit où elle est utilisée, sans lui donner de nom explicite. Les lambdas sont particulièrement utiles pour des tâches temporaires, comme passer une fonction en paramètre ou définir une logique simple.
    syntaxe:
    [ capture_list ] ( parameters ) -> return_type {
    // corps de la lambda
    };
    capture_list : Spécifie les variables locales que la lambda peut utiliser.
    */
    auto sayHello = [](){
        std::cout << "Hello, World! avec lamba expression" << std::endl;
    };
    sayHello(); // Appel de la lambda
    /*
        La liste de capture permet à une lambda d'accéder aux variables définies dans son environnement extérieur.
        Différents modes de capture :
        Par valeur (=) : Copie les variables dans la lambda.
        Par référence (&) : Permet à la lambda de modifier les variables extérieures.
        Capture spécifique : Capture une variable particulière par valeur ou par référence.
    */
   int z = 10, a = 20;

    // Capture par valeur
    auto lambda1 = [=]() {
        std::cout << "z = " << z << ", a = " << a << std::endl;
    };

    // Capture par référence
    auto lambda2 = [&]() {
        z += 5; // Modifie z
        a += 5; // Modifie a
    };

    lambda1(); // Affiche z = 10, a = 20
    lambda2(); // Modifie z et a
    std::cout << "z = " << z << ", a = " << a << std::endl;

    /*
    Les lambdas peuvent être utilisées dans les paramètres de fonctions pour fournir des logiques de traitement différentes.
    */
    auto addLambda = [](int b, int c){
        return b + c;
    };
    std::cout << "La somme de 5 et 10 avec param lambda est : " << addLambda(5, 10) << std::endl; // Appel de la lambda avec des paramètres

    /*Le type de retour peut être déduit automatiquement, mais tu peux aussi le préciser à l'aide de ->
    auto divide = [](double a, double b) -> double {
        if (b == 0) return 0; // Gestion division par zéro
        return a / b;
    };
    */

   /*
    Lambdas et les algorithmes de la STL
    Les lambdas sont très pratiques avec les algorithmes de la STL comme std::sort, std::for_each, etc
   */
    std::vector<int> numbers = {5, 2, 1, 9, 6};
    //Tri avec une lambda
    std::sort(numbers.begin(), numbers.end(), [](int d, int e){
        return d < e; // Tri croissant
    });
    for(int num : numbers) {
        std::cout << num << " ";
    }
    
    /*Par défaut, les lambdas capturent les variables par valeur de manière constante (non modifiable). Si tu veux modifier une variable capturée par valeur, ajoute le mot-clé mutable*/
    int f = 26;
    auto lambda = [f]() mutable {
        f += 5; // Modifie f
        std::cout << "\n a l'interieur de la lambda f = " << f << std::endl;
    };
    lambda();
    std::cout << "a l'extérieur de la lambda f = " << f << std::endl; // Affiche f = 31
    return 0;
}
