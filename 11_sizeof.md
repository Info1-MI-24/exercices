# Ex 1
Quelle est l'unité de `sizeof(int)`

# Ex 2
Quelle est la valeur des expressions suivantes :
1. `sizeof(int)` : 
1. `sizeof(int16_t)` :
1. `sizeof(char)` :

# Ex 3
On considère que le type `int` est sur `32bits`

Quelle est l'affichage du programme suivant :

```c
int val1[10];
int val2[] = {1,2,3};
int val3[5] = {2,3};
printf("Size 1 : %d\n", sizeof(val1));
printf("Size 2 : %d\n", sizeof(val2));
printf("Size 3 : %d\n", sizeof(val3));
printf("Size 4 : %d\n", sizeof(val1) / sizeof(int) );
```

# Ex 4
Quel est l'affichage du programme suivant :
```c
char text[100];
printf("Char : %ld", sizeof(text));
```

# Solutions

## Ex 1
La fonction `sizeof` retourne le nombre de byte.

## Ex 2
1. : Le nombre de `byte` pour stocker une valeur `int`. En général 2 ou 4
1. : 2
1. : 1

## Ex 3
```console
Size 1 : 40
Size 2 : 12
Size 3 : 20
Size 4 : 10
```

## Ex 4
```console
Char : 100
```