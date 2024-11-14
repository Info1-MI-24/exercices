#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour convertir Celsius en Fahrenheit
double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Fonction pour convertir Fahrenheit en Celsius
double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Utilisation: conv [c|f] valeur1 valeur2 ...\n");
        return 1;
    }

    // conv toto 12 3.4 -45
    // argv[1] == toto
    // argv[2] == 12
    // argv[1][0] == t
    // "c"  == chaine de caractères "Bonjour"
    // 'c'  == char

    // #include <string.h>
    //if( strcmp(argv[1], "c") == 0 ){
    //}

    // Vérifie le mode de conversion (c pour Celsius, f pour Fahrenheit)
    char mode = argv[1][0];
    if (mode != 'c' && mode != 'f') {
        printf("Mode invalide. Utilisez 'c' pour Celsius et 'f' pour Fahrenheit.\n");
        return 1;
    }

    for (int i = 2; i < argc; i++) {
        double valeur;
        // Utilisation de sscanf pour lire chaque valeur en double
        if (sscanf(argv[i], "%lf", &valeur) != 1) {
            printf("Erreur : '%s' n'est pas un nombre valide.\n", argv[i]);
            continue;
        }

        // Effectue la conversion et affiche le résultat
        if (mode == 'c') {
            double resultat = celsius_to_fahrenheit(valeur);
            printf("%.2f °C -> %.2f °F\n", valeur, resultat);
        } else if (mode == 'f') {
            double resultat = fahrenheit_to_celsius(valeur);
            printf("%.2f °F -> %.2f °C\n", valeur, resultat);
        }
    }

    return 0;
}
