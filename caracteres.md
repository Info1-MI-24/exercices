# Caractères

## Ex 1

Rappel Code ASCII :
Valeur | Caractère
---|---
49|1
97|a
65|A


Quel est l'affichage du programme suivant :
```C
int val1 = '1';
int val2 = 97;
int val3 = '2';
char c = 'C';

printf("Valeur 1: %d\n", val1);
printf("Valeur 2: %c\n", val1);
printf("Valeur 2: %c\n", c-1);
printf("Valeur 3: %c\n", c + (val3 - val1));
```

## Ex 2
Donner une expression qui affiche le code ASCII de la variable `c`

Exemple : Donner l'expression qui donne le double de la variable `test` : `(test * 2)`

```C
char c = '2';
```

## Ex 3
Donner une expression (sans utiliser de fonction) qui retourne `true` si la variable `test` est un caractère qui représente un chiffre.
```C
char test = 'a';
```

## Ex 4
Donner une expression qui donne `true` si la valeur de `val` est comprise dans la table ASCII


## Ex 5
Réaliser un programme qui demande à un utilisateur de saisir un caractère en minuscule et ensuite le programme affiche le caractère en majuscule.

Utiliser une fonction de la libraire `ctype.h` pour contrôler que la saisie est en minuscule.

Vous trouverez les fonctions sur la `Refcard` dans *Tests de classe de caractères*

Afin de réaliser la transformation en majuscule, je vous conseille d'analyser la table ASCII : [lien](https://www.asciitable.com/)

Exemple d'utilisation
```C
// Ne pas oublier le include
#include <ctype.h>

char c = '1';
if( isalnum(c) ){
    printf("Le caractère %c est un alphanumérique", c);
}
```

Vous ne devez pas utiliser de fonction de `ctype.h` pour transformer le caractère.

S'il y a une erreur sur la saisie, le programme retourne simplement `1`

Exemple d'exécution du programme :
```console
Veuillez entrer un caractère en minuscule :
>u
Le caractère en majuscule est : U
```

## Ex 6
Réaliser un programme qui demande à l'utilisateur de saisir trois caractères en minuscules séparés par une virgule.

Vous devez ensuite afficher les caractères dans l'ordre alphabétique.

S'il y a une erreur sur la saisie, le programme retourne simplement `1`

Exemple d'execution du programme :
```console
Veuillez entrer trois caractères minuscules séparés par une virgule :
>u,b,j
Les caractères sont :
1: b
2: j
3: u
```

## Solutions
### Ex 1
```console
Valeur 1: 49
Valeur 2: 1
Valeur 2: B
Valeur 3: D
```

### Ex 2
```C
printf("%d",c);
```

### Ex 3
```C
( c >= '0' && c <= '9' )
```

### Ex 4
```C
( val >= 0 && val <= 127 )
```

## Ex 5
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Veuillez entrer un caractère en minuscule :\n>");
    scanf("%c",&c);
    
    if( !islower(c) ){
        return 1;
    }

    printf("Le caractère en majuscule est : %c", (c - ('a'-'A')) );
    return 0;
}
```

## Ex 6
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c1, c2, c3;
    printf("Veuillez entrer trois caractères en minuscules "
        "séparés par une virgule :\n>");
        
    const int ret = scanf("%c,%c,%c", &c1, &c2, &c3);
    
    if( ret != 3 ){
        return 1;
    }
    else if( !islower(c1) || !islower(c2) || !islower(c3) ){
        return 1;
    }

    if( c1 < c2 ){
        if( c1 < c3 ){
            if( c2 < c3 ){
                printf("1: %c\n2: %c\n3: %c\n", c1, c2, c3);
            }
            else{
                printf("1: %c\n2: %c\n3: %c\n", c1, c3, c2);
            }
        }
        else{
            printf("1: %c\n2: %c\n3: %c\n", c3, c1, c2);
        }
    }
    else if( c2 < c3 ){
        if( c1 < c3 ){
            printf("1: %c\n2: %c\n3: %c\n", c2, c1, c3);
        }
        else{
            printf("1: %c\n2: %c\n3: %c\n", c2, c3, c1);
        }
    }
    else{
        printf("1: %c\n2: %c\n3: %c\n", c3, c2, c1);
    }

    return 0;
}
```