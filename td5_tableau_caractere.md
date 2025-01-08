# Exerccie tableau de caractères

Réalisez un programme en langage C qui demande à l'utilisateur de saisir jusqu'à 5 mots (max. 100 caractères par mot) et les stocke dans un tableau de chaînes de caractères. 

### Consignes :
1. À chaque saisie, le programme demande si l'utilisateur souhaite continuer à saisir des mots (Y/N). Si l'utilisateur choisit `N` ou que 5 mots ont été saisis, la saisie s'arrête.
2. Lorsque la saisie est terminée, le programme affiche les mots saisis dans l'ordre croissant de leur longueur.
3. Chaque mot sera affiché sous la forme suivante, avec un alignement correct :
   - Numéro de ligne
   - Longueur du mot
   - Le mot

### Approche :
**Affichage (sans tri)**
Une autre solution, plus simple, consiste à utiliser un tableau auxiliaire displayed de type bool pour marquer les mots déjà affichés. Lors de l'affichage, on parcourt le tableau principal de mots et on affiche uniquement les mots qui n'ont pas encore été affichés, en cherchant à chaque étape le mot le plus court non marqué.

Créer une fonction `findShortestWord` qui prend en paramètre le tableau de mots et le tableau de booléens displayed et retourne l'index du mot le plus court non marqué. Si tous les mots ont été affichés, la fonction retourne -1.

**Tri (bonus)**
Une solution consiste à trier le tableau en fonction de la longueur des chaînes de caractères. Pour cela, la fonction strcpy peut être utilisée afin de copier les chaînes de caractères lors des échanges pendant le tri.

```c
// Fonction pour trier les mots par longueur croissante
void sortWordsByLength(char words[2][2], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                char temp[101];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}
```


### Exemple d'exécution
```
Saisissez un mot (max. 100 caractères) : programmation
Voulez-vous continuer à saisir des mots (Y/N) ? Y
Saisissez un mot (max. 100 caractères) : C
Voulez-vous continuer à saisir des mots (Y/N) ? Y
Saisissez un mot (max. 100 caractères) : tableau
Voulez-vous continuer à saisir des mots (Y/N) ? N
Liste des mots triés par longueur :

#  | caractères | mots
1    1            C
2    7            tableau
3    12           programmation
```

### Fonction pour demander à l'utilisateur s'il veut continuer
```c
#include <stdbool.h>
#include <stdio.h>

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 5

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

bool askToContinue() {
    char response;
    while (true) {
        printf("Do you want to continue entering words (Y/N)? ");
        scanf("%c", &response);
        
        clearInputBuffer();

        if (response == 'Y' || response == 'y') {
            return true;
        } else if (response == 'N' || response == 'n') {
            return false;
        } else {
            printf("Invalid input. Please enter 'Y' for Yes or 'N' for No.\n");
        }
    }
}

int main(){

    do {
        // Code pour saisir les mots

        if (!askToContinue()) {
            break;
        }
    } while (true);

    // Code pour afficher les mots triés
    bool displayed[MAX_WORDS] = {false};

    return 0;
}
```