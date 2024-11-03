## Exercice 1
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

void afficherMessage() {
    printf("Bonjour, le monde !\n");
}

int main() {
    afficherMessage();
    return 0;
}
```

## Exercice 2
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

int renvoyerNombre() {
    return 42;
}

int main() {
    printf("Le nombre est : %d\n", renvoyerNombre());
    return 0;
}
```

## Exercice 3
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

void modifierValeur(int x) {
    x = 10;
    printf("Valeur dans la fonction : %d\n", x);
}

int main() {
    int a = 5;
    modifierValeur(a);
    printf("Valeur après appel de fonction : %d\n", a);
    return 0;
}
```

## Exercice 4
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

void doubleValeur(int n) {
    printf("%d\n", n * 2);
}

int main() {
    int nombre = 7;
    doubleValeur(nombre);
    return 0;
}
```

## Exercice 5
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

void incrementer(int x) {
    x++;
    printf("Valeur dans la fonction : %d\n", x);
}

int main() {
    int nombre = 10;
    incrementer(nombre);
    printf("Valeur après appel de fonction : %d\n", nombre);
    return 0;
}
```

## Exercice 6
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int main() {
    const int resultat = addition(3, 4);
    printf("Résultat : %d\n", resultat);
    return 0;
}
```

## Exercice 7
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

void resetValeur(int x) {
    x = 0;
    printf("Valeur dans la fonction : %d\n", x);
}

int main() {
    int valeur = 8;
    resetValeur(valeur);
    printf("Valeur après appel de fonction : %d\n", valeur);
    return 0;
}
```

## Exercice 8
Quel est l'affichage du code suivant ?

```c
#include <stdio.h>

double diviser(double a, double b) {
    return a / b;
}

int main() {
    double resultat = diviser(9.0, 2.0);
    printf("Résultat : %.2f\n", resultat);
    return 0;
}
```
