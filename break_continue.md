# Exercices sur les boucles avec continue et break

Donner l'affichage exact pour chaque code ci-dessous.
Exercice 1 :

## Exercice 1 :

```c
int i = 0;
while (i < 5) {
    if (i == 3)
        break;
    printf("%d ", i);
    i++;
}
```

## Exercice 2 :

```c
for (int i = 1; i < 6; i++) {
    if (i % 2 == 0)
        continue;
    printf("%d ", i);
}
```

## Exercice 3 :

```c
int i = 2;
while (i <= 7) {
    if (i == 5)
        break;
    printf("%d ", i);
    i++;
}
```

## Exercice 4 :

```c
for (int i = 6; i >= 0; i--) {
    if (i == 4)
        continue;
    printf("%d ", i);
}
```

## Exercice 5 :

```c
int i = 1;
while (i < 5) {
    i++;
    if (i == 3)
        continue;
    printf("%d ", i);
}
```

## Exercice 6 :

```c
for (int i = 10; i > 0; i--) {
    if (i % 3 == 0)
        continue;
    printf("%d ", i);
}
```

## Exercice 7 :

```c
int i = 0;
while (i < 6) {
    if (i == 4)
        break;
    printf("%d ", i);
    i++;
}
printf("\nTerminé !");
```

## Exercice 8 :

```c
for (int i = 0; i < 8; i++) {
    if (i % 2 == 1)
        continue;
    printf("%d ", i);
}
```

## Exercice 9 :

```c
int i = 1;
while (i <= 10) {
    if (i % 4 == 0)
        break;
    printf("%d ", i);
    i++;
}
```

## Exercice 10 :

```c
for (int i = 5; i <= 10; i++) {
    if (i == 7)
        break;
    printf("%d ", i);
}
```

## Exercice 11 :

```c
int i = 0;
while (i < 10) {
    if (i == 5) {
        i++;
        continue;
    }
    printf("%d ", i);
    i++;
}
```

## Exercice 12 :

```c
for (int i = 1; i < 8; i++) {
    if (i % 2 == 0)
        continue;
    printf("%d ", i);
}
```

## Exercice 13 :

```c
int i = 10;
while (i > 0) {
    if (i == 5)
        break;
    printf("%d ", i);
    i--;
}
```

## Exercice 14 :

```c
for (int i = 0; i < 7; i++) {
    if (i == 3 || i == 5)
        continue;
    printf("%d ", i);
}
```

## Exercice 15 :

```c
int i = 0;
while (i < 10) {
    if (i == 7) {
        printf("Fin du programme.");
        break;
    }
    printf("%d ", i);
    i++;
}
```
