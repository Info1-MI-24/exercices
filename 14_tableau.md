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