# Exercices incréments

## Ex 1
Quel est l'affichage du code suivant ?
```C
int a = 0;

int b = a++;
printf("Val 1 : %d\n", b);

b = ++a;
printf("Val 2 : %d\n", b);
```

## Ex 2
Quel est l'affichage du code suivant ?
```C
int b=0;
while( ++b < 10 ){}
printf("Val b : %d",b);
```

## Ex 3
Quel est l'affichage du programme suivant ?
```C
int i=0;
char tab[] = {'1', '2', '3'};
printf("Val 1 : %c\n", tab[++i]);
printf("Val 2 : %c\n", tab[++i]);
```

## Ex 4
Quel est l'affichage du programme suivant ?
```C
int i=0;
if( i++ )
    printf("Cas 1");
else
    printf("Cas 2");
```

# Ex 5
Dans ce programme, quel sera l'affichage ?
Comparez l'utilisation de tab[i++] vs tab[++i].
```C
#include <stdio.h>
int main() {
    int i = 0;
    char tab[] = "ABC";
    printf("Val 1 : %c\n", tab[i++]);  
    printf("Val 2 : %c\n", tab[++i]); 
    return 0;
}
```

# Ex 6
Dans ce programme, quel sera l'affichage ?
Observez l'évolution de i à chaque appel tab[i++] ou tab[++i].

```c
#include <stdio.h>
int main() {
    int i = 0;
    char tab[] = {'X','Y','Z','W','\0'};
    printf("Caractère 1 : %c\n", tab[i++]); 
    printf("Caractère 2 : %c\n", tab[i++]); 
    printf("Caractère 3 : %c\n", tab[++i]); 
    return 0;
}
```

# Ex 7
Dans le programme suivant, que va-t-il afficher ?

```C
#include <stdio.h>
int main() {
    char tab[] = {'A', 'B', 'C', 'D', 'E'};
    int i;
    for(i = 0; i < 5; i++) {
        printf("tab[%d] = %c\n", i, tab[i++]);
    }
    return 0;
}
```

# Solutions
## Ex 1
```console
Val 1 : 0
Val 2 : 2
```

## Ex 2
```console
Val b : 10
```

## Ex 3
```console
Val 1 : 2
Val 2 : 3
```

## Ex 4
```console
Cas 2
```
