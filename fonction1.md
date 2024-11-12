## Exercice 1
Écrire une fonction `afficheMessage()` qui n'a aucun paramètre et qui affiche le message : "Bonjour, utilisateur !". 

## Exercice 2
Écrire une fonction `getCinq()` qui retourne la valeur `5`. Ensuite, appelez cette fonction dans le `main()` et affichez le résultat.

## Exercice 3
Écrire une fonction `doubleValeur(int x)` qui prend un entier en paramètre et retourne le double de cette valeur. Appeler cette fonction avec différentes valeurs dans le `main()` et afficher les résultats.

## Exercice 4
Écrire une fonction `somme(int a, int b)` qui prend deux entiers en paramètres et retourne leur somme. 

## Exercice 5
Écrire une fonction `afficheEtoiles(int n)` qui prend un entier `n` en paramètre et affiche `n` étoiles (`*`) sur une seule ligne.

## Exercice 6
Créer une fonction `carre(int x)` qui retourne le carré de l'entier donné en paramètre. Appeler cette fonction dans le `main()` et afficher le résultat.

## Exercice 7
Écrire une fonction `soustraction(int a, int b)` qui retourne le résultat de `a - b`. Appeler cette fonction plusieurs fois avec différents arguments et afficher les résultats dans le `main()`.

## Exercice 8
Créer une fonction `conversionMetresEnCentimetres(double metres)` qui prend une valeur en mètres et retourne la valeur en centimètres. Tester la fonction dans le `main()` et afficher les conversions pour différentes valeurs de mètres.

## Exercice 9
Écrire une fonction `estPair(int n)` qui retourne `true` si le nombre `n` est pair, sinon `false`. Tester cette fonction dans le `main()` et afficher si le nombre est pair ou impair pour différents nombres.

## Exercice 10
Créer une fonction `sommeTrois(int a, int b, int c)` qui retourne la somme de trois entiers. Dans le `main()`, appeler la fonction avec plusieurs combinaisons de valeurs et afficher le résultat.

## Exercice 11
Écrire une fonction `puissanceDeux(int n)` qui retourne la puissance de 2 pour un nombre donné (par exemple, `puissanceDeux(3)` retourne `8` car 2^3 = 8).


# Solutions
## Exercice 1
Écrire une fonction `afficheMessage()` qui n'a aucun paramètre et qui affiche le message : "Bonjour, utilisateur !".
```c
#include <stdio.h>

void afficheMessage() {
    printf("Bonjour, utilisateur !\n");
}

int main() {
    afficheMessage();
    return 0;
}
```
## Exercice 2
Écrire une fonction `getCinq()` qui retourne la valeur `5`. Ensuite, appelez cette fonction dans le `main()` et affichez le résultat.

```c
#include <stdio.h>

int getCinq() {
    return 5;
}

int main() {
    int resultat = getCinq();
    printf("Le résultat est : %d\n", resultat);
    return 0;
}
```
## Exercice 3
Écrire une fonction `doubleValeur(int x)` qui prend un entier en paramètre et retourne le double de cette valeur. Appeler cette fonction avec différentes valeurs dans le `main()` et afficher les résultats.

```c
#include <stdio.h>

int doubleValeur(int x) {
    return x * 2;
}

int main() {
    printf("Le double de 3 est : %d\n", doubleValeur(3));
    printf("Le double de 7 est : %d\n", doubleValeur(7));
    printf("Le double de 10 est : %d\n", doubleValeur(10));
    return 0;
}
```
## Exercice 4
Écrire une fonction `somme(int a, int b)` qui prend deux entiers en paramètres et retourne leur somme.

```c
#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    printf("La somme de 3 et 5 est : %d\n", somme(3, 5));
    return 0;
}
```
## Exercice 5
Écrire une fonction `afficheEtoiles(int n)` qui prend un entier `n` en paramètre et affiche `n` étoiles (`*`) sur une seule ligne.

```c
#include <stdio.h>

void afficheEtoiles(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    afficheEtoiles(5);
    return 0;
}
```

## Exercice 6
Créer une fonction `carre(int x)` qui retourne le carré de l'entier donné en paramètre. Appeler cette fonction dans le `main()` et afficher le résultat.

```c
#include <stdio.h>

int carre(int x) {
    return x * x;
}

int main() {
    printf("Le carré de 4 est : %d\n", carre(4));
    return 0;
}
```
## Exercice 7
Écrire une fonction `soustraction(int a, int b)` qui retourne le résultat de `a - b`. Appeler cette fonction plusieurs fois avec différents arguments et afficher les résultats dans le `main()`.

```c
#include <stdio.h>

int soustraction(int a, int b) {
    return a - b;
}

int main() {
    printf("Résultat de 10 - 3 : %d\n", soustraction(10, 3));
    printf("Résultat de 20 - 5 : %d\n", soustraction(20, 5));
    return 0;
}
```
## Exercice 8
Créer une fonction `conversionMetresEnCentimetres(double metres)` qui prend une valeur en mètres et retourne la valeur en centimètres. Tester la fonction dans le `main()` et afficher les conversions pour différentes valeurs de mètres.

```c
#include <stdio.h>

double conversionMetresEnCentimetres(double metres) {
    return metres * 100.0;
}

int main() {
    printf("1.5 mètres en cm : %.2f\n", conversionMetresEnCentimetres(1.5));
    return 0;
}
```
## Exercice 9
Écrire une fonction `estPair(int n)` qui retourne `true` si le nombre `n` est pair, sinon `false`. Tester cette fonction dans le `main()` et afficher si le nombre est pair ou impair pour différents nombres.

```c
clude <stdio.h>
#include <stdbool.h>

bool estPair(int n) {
    return n % 2 == 0;
}

int main() {
    int nombre = 4;
    if (estPair(nombre)) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }
    return 0;
}
```
## Exercice 10
Créer une fonction `sommeTrois(int a, int b, int c)` qui retourne la somme de trois entiers. Dans le `main()`, appeler la fonction avec plusieurs combinaisons de valeurs et afficher le résultat.

```c
#include <stdio.h>

int sommeTrois(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("La somme de 1, 2 et 3 est : %d\n", sommeTrois(1, 2, 3));
    return 0;
}
```
## Exercice 11
Écrire une fonction `puissanceDeux(int n)` qui retourne la puissance de 2 pour un nombre donné (par exemple, `puissanceDeux(3)` retourne `8` car 2^3 = 8).

```c
#include <stdio.h>
#include <math.h>

int puissanceDeux(int n) {
    return (int)pow(2, n);
}

int main() {
    printf("2 puissance 3 est : %d\n", puissanceDeux(3));
    return 0;
}
```