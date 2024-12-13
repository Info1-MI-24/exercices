# Exercices sur les tableaux

## Ex 1
Ecrire une fonction qui retourne la moynne d'un tableau de double.

```c
double tab[] = {1.0, 2.0, 3.0, 4.0, 5.0};

// Ajouter le code pour calculer le nombre d'éléments dans le tableau
const n = ???

// Ajouter le code pour calculer la moyenne
const double mean = ???

printf("mean = %f\n", mean);
```

## Ex 2
Ecrire une fonction qui calcul le maximum et le minimum d'un tableau d'entiers.
On doit pouvoir utiliser cette fonction de la manière suivante :

Calculer le nombre d'éléments dans le tableau.

```c
int tab[] = {1, 2, 3, 4, 5};

// Ajouter le code pour calculer le nombre d'éléments dans le tableau
int n = ???

int max, min;

// Ajouter le code pour calculer le maximum et le minimum
max_min() ???

printf("max = %d, min = %d\n", max, min);
```



## Ex 3
Écrire une fonction qui compte le nombre d'éléments supérieurs à la moyenne d'un tableau donné et retourne ce nombre.

```c
double tab[] = {1.0, 2.0, 3.0, 4.0, 5.0, 100.0, -2};

// Ajouter le code pour calculer le nombre d'éléments dans le tableau
const n = ???

// Ajouter le code pour compter le nombre d'éléments supérieur à la moyenne
nbr_sup_mean() ???

printf("nbr_sup_mean = %d\n", nbr_sup_mean);
```

## Ex 4
Ecire une fonction qui calcul la somme des éléments d'un tableau d'entiers.
La fonction retourne `true` si la somme est positive, `false` sinon.
La somme des éléments doit être disponible dans la variable `sum` par référence.

```c
int tab[] = {1, 2, 3, 4, 5};

// Ajouter le code pour calculer le nombre d'éléments dans le tableau
int n = ???

int sum;

const bool is_sum_positive = sum_tab(tab, n, &sum) ???

if(is_sum_positive){
    printf("sum = %d, positive\n", sum);
}
else{
    printf("sum = %d, negative\n", sum);
}
```

## Ex 5
Erire une fonction qui inverse la valeur de deux variables entières.

```c
int a = 1;
int b = 2;

// Ajouter le code pour inverser les valeurs de a et b
swap() ???

printf("a = %d, b = %d\n", a, b);
```

## Ex 6
Ecrire une fonction qui transforme une chaîne de caractères en majuscule.

```c
char str[] = "Hello World!";

// Ajouter le code pour transformer la chaîne en majuscule

printf("str = %s\n", str);
```

## Ex 7
Ecrire une fonction qui donne la première position d'un caractère dans une chaîne de caractères.
Cette fonction retoure `true` si le caractère est trouvé, `false` sinon.
Il faut passer une référence à la position du caractère trouvé.

```c
char str[] = "Hello World!";

// Ajouter le code pour trouver la position du caractère 'W'

int pos;

const bool found = ???

if(found){
    printf("found at pos = %d\n", pos);
}
else{
    printf("not found\n");
}
```

## Ex 8
Ecrire une fonction qui trouve la valeur la plus proche d'un nombre donné dans un tableau d'entiers.
Si la valeur la plus proche est trouvée, la fonction retourne `true` et la valeur est disponible par référence.
Sinon, la fonction retourne `false`.

```c
int tab[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50};

// Ajouter le code pour trouver la valeur la plus proche de 17

const bool found = ???

if(found){
    printf("found = %d\n", found);
}
else{
    printf("not found\n");
}
```

## Ex 9
Ecrire une fonction qui cherche la valeur dans un tableau d'entiers qui apparaît le plus de fois.

Le nombre d'occurences ainsi que la valeur doivent être disponibles par référence.

```c

int tab[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

// Ajouter le code pour trouver la valeur qui apparaît le plus de fois

int value;
int occurences;

most_occurences() ???

printf("value = %d, occurences = %d\n", value, occurences);
```

# Solutions

## Ex 1
```c
double calculer_moyenne(double tab[], int n) {
    double somme = 0.0;
    for(int i = 0; i < n; i++) {
        somme += tab[i];
    }
    return somme / n;
}

int main() {
    double tab[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    const int n = sizeof(tab) / sizeof(tab[0]);
    double mean = calculer_moyenne(tab, n);
    printf("mean = %f\n", mean);
    return 0;
}
``` 

## Ex 2
```c
#include <stdio.h>

void trouver_max_min(int tab[], int n, int *max, int *min) {
    *max = tab[0];
    *min = tab[0];
    for(int i = 1; i < n; i++) {
        if(tab[i] > *max) {
            *max = tab[i];
        }
        if(tab[i] < *min) {
            *min = tab[i];
        }
    }
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    const int n = sizeof(tab) / sizeof(tab[0]);
    int max, min;
    trouver_max_min(tab, n, &max, &min);
    printf("max = %d, min = %d\n", max, min);
    return 0;
}
```

## Ex 3
```c
double calculer_moyenne(double tab[], int n) {
    double somme = 0.0;
    for(int i = 0; i < n; i++) {
        somme += tab[i];
    }
    return somme / n;
}

int compter_sup_moyenne(double tab[], int n) {
    const double moyenne = calculer_moyenne(tab, n);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(tab[i] > moyenne) {
            count++;
        }
    }
    return count;
}
```

## Ex 4
```c
bool somme_tableau(int tab[], int n, int *sum) {
    *sum = 0;
    for(int i = 0; i < n; i++) {
        *sum += tab[i];
    }
    return (*sum > 0) ? true : false;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    const int n = sizeof(tab) / sizeof(tab[0]);
    int sum;
    bool is_sum_positive = somme_tableau(tab, n, &sum);
    
    if(is_sum_positive){
        printf("sum = %d, positive\n", sum);
    }
    else{
        printf("sum = %d, negative\n", sum);
    }
    return 0;
}
```

## Ex 5
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

## Ex 6
```c
#include <stdio.h>
#include <ctype.h>

void en_majuscule(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello World!";
    
    en_majuscule(str);
    
    printf("str = %s\n", str);
    return 0;
}
```

## Ex 7
```c
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>

bool trouver_caractere(char *str, char caractere, int *pos) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == caractere) {
            *pos = i;
            return true;
        }
    }
    return false;
}

int main() {
    char str[] = "Hello World!";
    int pos;
    
    bool found = trouver_caractere(str, 'W', &pos);
    
    if(found){
        printf("found at pos = %d\n", pos);
    }
    else{
        printf("not found\n");
    }
    return 0;
}
```

## Ex 8
```c
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool valeur_plus_proche(int tab[], int n, int cible, int *valeur_proche) {
    if(n == 0) return false;
    
    *valeur_proche = tab[0];
    int min_diff = abs(tab[0] - cible);
    
    for(int i = 1; i < n; i++) {
        int diff = abs(tab[i] - cible);
        if(diff < min_diff) {
            min_diff = diff;
            *valeur_proche = tab[i];
        }
    }
    return true;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50};
    int n = sizeof(tab) / sizeof(tab[0]);
    int cible = 17;
    int valeur;
    
    bool found = valeur_plus_proche(tab, n, cible, &valeur);
    
    if(found){
        printf("found = %d\n", valeur);
    }
    else{
        printf("not found\n");
    }
    return 0;
}
```

## Ex 9
```c
#include <stdio.h>

void valeur_plus_frequente(int tab[], int n, int *valeur, int *occurences) {
    if(n == 0) {
        *valeur = 0;
        *occurences = 0;
        return;
    }
    
    int max_count = 1;
    *valeur = tab[0];
    
    for(int i = 0; i < n; i++) {
        int count = 1;

        // i+1 car il n'est pas nécessaire de comparer avec les éléments précédents
        for(int j = i + 1; j < n; j++) { 
            if(tab[j] == tab[i]) {
                count++;
            }
        }
        
        if(count > max_count) {
            max_count = count;
            *valeur = tab[i];
        }
    }
    *occurences = max_count;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int n = sizeof(tab) / sizeof(tab[0]);
    int value;
    int occurences;
    
    valeur_plus_frequente(tab, n, &value, &occurences);
    
    printf("value = %d, occurences = %d\n", value, occurences);
    return 0;
}
```


