# Exercices sur les Arguments en Ligne de Commande en C

### 0. Argument
En considérant la ligne de commande suivante : 
```console
./prg 12 foo bar
```

Quelles-sont les valeurs suivantes : 
- `argc` ?
- `argv[0]` ?
- `argv[1]` ?
- `argv[2]` ?


Quel est le type de `argv[0]` ?
Quel est le type de `argv[1]` ?
Quel est le type de `argv[2]` ?


### 1. Afficher tous les arguments
Écrivez un programme en C qui affiche tous les arguments passés en ligne de commande.
**Exemple de ligne de commande :**
```console
./programme arg1 arg2 arg3
```

**Sortie attendue :**
```console
Argument 0 : ./programme  
Argument 1 : arg1  
Argument 2 : arg2  
Argument 3 : arg3
```


### 2. Compter le nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un deux trois
```


### 3. Identifier un argument spécifique
A quoi correspond `argv[2]` ?

**Exemple de ligne de commande :**
```console
./programme Bonjour Monde
```


### 4. Conversion d'un argument en entier
Écrivez un programme en C qui prend un argument, le convertit en entier et l'affiche.
**Exemple de ligne de commande :**
```console
./programme 42
```


### 5. Afficher uniquement les arguments en position impaire
Écrivez un programme qui affiche uniquement les arguments passés aux positions impaires (1, 3, 5...).
**Exemple de ligne de commande :**
```console
./programme un deux trois quatre cinq
```

**Sortie attendue :**
```console
Arguments en position impaire : un trois cinq
```


### 6. Vérifier si un argument est un nombre pair ou impair
Écrivez un programme en C qui prend un argument entier et affiche s'il est pair ou impair.
**Exemple de ligne de commande :**
```console
./programme 7
```
**Sortie attendue :**
```console
7 est impair
```


### 7. Afficher les arguments en ordre inversé
Écrivez un programme qui affiche tous les arguments en ordre inversé.
**Exemple de ligne de commande :**
```console
./programme rouge vert bleu
```
**Sortie attendue :**
```console
bleu vert rouge
```

### 8. Afficher le nom du programme uniquement
Écrivez un programme qui affiche uniquement le nom du programme.
**Exemple de ligne de commande :**
```console
./programme arg1 arg2
```
**Sortie attendue :**
```console
Nom du programme : ./programme
```

### 9. Calculer la somme de plusieurs arguments entiers
Écrivez un programme qui prend des arguments entiers et calcule leur somme.
**Exemple de ligne de commande :**
```console
./programme 4 5 6
```
**Sortie attendue :**
```console
Somme : 15
```

### 10. Afficher le nombre d'arguments qui sont des nombres
Écrivez un programme qui compte le nombre d'arguments passés qui sont des nombres.
**Exemple de ligne de commande :**
```console
./programme 123 test 456 78
```
**Sortie attendue :**
```console
Nombre d'arguments numériques : 3
```

## 11. Nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un 12 -45 toto
```

## 12. Nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un deux trois "bonjour le monde"
```

# Solutions

# Corrigé des Exercices sur les Arguments en Ligne de Commande en C
### 0. Argument
Ligne de commande : ./prg 12 foo bar
- argc : 4
- argv[0] : ./prg
- argv[1] : 12
- argv[2] : foo
- argv[3] : bar
  
**Types :**
- argv[0] : chaines de caractères ou char*
- argv[1] : chaines de caractères ou char*
- argv[2] : chaines de caractères ou char*

### 1. Afficher tous les arguments
```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Argument %d : %s\n", i, argv[i]);
    }
    return 0;
}
```

### 2. Compter le nombre d'arguments
Le nombre d'arguments est donné par argc - 1.
Exemple :
Ligne de commande : ./programme un deux trois
- Nombre d'arguments : 3
  
>La réponse 4 ne serait pas fausse, car il est possible de considérer le nom du programme comme un argument.


### 3. Identifier un argument spécifique
Ligne de commande : ./programme Bonjour Monde
- argv[2] : Monde
  
### 4. Conversion d'un argument en entier
```c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc > 1) {
        int number;
        if (sscanf(argv[1], "%d", &number) == 1) {
            printf("Nombre converti : %d\n", number);
        } else {
            printf("Erreur : l'argument fourni n'est pas un nombre entier valide.\n");
        }
    } else {
        printf("Aucun argument fourni.\n");
    }
    return 0;
}
```

### 5. Afficher uniquement les arguments en position impaire
```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Arguments en position impaire : ");
    for (int i = 1; i < argc; i += 2) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
```

### 6. Vérifier si un argument est un nombre pair ou impair
```c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc > 1) {
        int number;
        if (sscanf(argv[1], "%d", &number) == 1) {
            if (number % 2 == 0) {
                printf("%d est pair\n", number);
            } else {
                printf("%d est impair\n", number);
            }
        } else {
            printf("Erreur : l'argument fourni n'est pas un nombre entier valide.\n");
        }
    } else {
        printf("Aucun argument fourni.\n");
    }
    return 0;
}
```

### 7. Afficher les arguments en ordre inversé
```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Arguments en ordre inversé : ");
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
```

### 8. Afficher le nom du programme uniquement
```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Nom du programme : %s\n", argv[0]);
    return 0;
}
```

### 9. Calculer la somme de plusieurs arguments entiers

En cas d'erreur, la valeur est ignorée.

```c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        int number;
        if (sscanf(argv[i], "%d", &number) == 1) {
            sum += number;
        }
    }
    printf("Somme : %d\n", sum);
    return 0;
}
```

### 10. Afficher le nombre d'arguments qui sont des nombres
```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int count = 0;
    double val;
    for (int i = 1; i < argc; i++) {
        if (sscanf(argv[i], "%lf", &val) == 1) {
            count++;
        }
    }
    printf("Nombre d'arguments numériques : %d\n", count);
    return 0;
}
```

### 11. Nombre d'arguments
Ligne de commande : ./programme un 12 -45 toto
- Nombre d'arguments : 4

>La réponse 5 ne serait pas fausse, car il est possible de considérer le nom du programme comme un argument.

### 12. Nombre d'arguments
Ligne de commande : ./programme un deux trois "bonjour le monde"
- Nombre d'arguments : 4

>La réponse 5 ne serait pas fausse, car il est possible de considérer le nom du programme comme un argument.