# Exercice : Afficher les arguments passés au programme dans un tableau de taille variable

Écrivez un programme en C qui affiche les arguments passés en ligne de commande sous forme de tableau.
Le tableau doit respecter les contraintes suivantes :

1. Les bordures du tableau doivent être dessinées avec des caractères.
2. Chaque valeur doit être entourée d’un espace et alignée à gauche avec un espace suffisant pour le plus long argument numérique.
3. Les nombres doivent être affichés avec **deux chiffres après la virgule** (ex. : `12.34`).
4. Les arguments non numériques doivent être ignorés.
5. Le tableau doit ajuster sa largeur pour inclure les bordures et les valeurs correctement.

6. (BONUS) Centrer au mieux un titre dans le tableau.

### Exemple d'utilisation :
#### Commande :

```bash
./app 12.5 abc 123456789 45.6789
```

#### Sortie :
```
Le titre `Valeurs` est un affichage BONUS

┌──────────────┐
│    Valeurs   │ 
├──────────────┤
│        12.50 │ 
├──────────────┤
│ 123456789.00 │
├──────────────┤
│        45.68 │
└──────────────┘ 
```

## Aide

Pour ce programme, vous aurez besoin des fonctions suivantes : 

```c
double max(double a, double b) : retourne le plus grand des deux nombres passés en paramètre.
int nbr_digits(int n) : retourne le nombre de chiffres d'un nombre entier.
void reapet_array_line(int n) : affiche une ligne de caractères '-' de longueur n.
```

1. Parcourez les arguments passés en ligne de commande.
2. Calculez le nombre de chiffres de ce nombre (c'est le nombre de caractères nécessaires pour afficher un nombre entier).
3. Mise à jour de la valeur maximale de la largeur du tableau si le nombre de chiffres est supérieur à la valeur maximale actuelle.
4. Parcourez à nouveau les arguments pour afficher les nombres entourés de caractères.

```c
#include <stdio.h>

double max(double a, double b){
    return a > b ? a : b;
}

int nbr_digits(int n){
    return log10(n)+1;
}

void reapet_array_line(int n){
    for(int i=0; i<n; i++){
        printf('─');
    }
}

int main(int argc, char *argv[])
{
    int max_digits = 0;

    // Parcours des arguments
    for(int i=0; i<argc; i++){
        
        // Conversion de l'argument en nombre
        double val;
        if(sscanf(argv[i], "%lf", &val) == 1){
        }

    }

    // Parcours des arguments pour afficher le tableau
    for(int i=0; i<argc; i++){
        
        // Conversion de l'argument en nombre
        double val;
        if(sscanf(argv[i], "%lf", &val) == 1){
        }

    }


    printf("┌───┐\n");
    printf("│   │\n");
    printf("├───┤\n");
    printf("│   │\n");
    printf("└───┘\n");
    return 0;
}
```