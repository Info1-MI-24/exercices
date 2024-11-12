## Exercice 1
Remplacez l'instruction `if` par une expression ternaire pour vérifier si un nombre est pair ou impair et affichez le résultat.

>Pour afficher une chaîne de caractères, il faut utiliser `%s`

```c
int nombre = 5;
bool pair;
if (nombre % 2 == 0) {
    printf("Pair\n");
} else {
    printf("Impair\n");
}
```

## Exercice 2
Créez une expression ternaire qui affiche "Positif" si un nombre est positif, sinon "Négatif".
```c
int nombre = -3;
// Utiliser une expression ternaire ici
```

## Exercice 3
Écrivez une expression ternaire pour déterminer le plus grand de deux nombres.
```c
int a = 10, b = 20;
int max = ???
printf("Le maximum est : %d\n", max);
```

## Exercice 4
Utilisez une expression ternaire pour placer la plus petite valeur dans min.
```c
int nombre1 = 15;
int nombre2 = -5;

int min = ???
printf("Le min est : %d\n", min);
```

## Exercice 5
Écrivez une expression ternaire pour afficher "Majeur" si l'âge est supérieur ou égal à 18, sinon "Mineur".
```c
int age = 17;
printf("%s\n", (age >= 18) ? "Majeur" : "Mineur");
```

## Exercice 6
Remplacez l'instruction `if` par une expression ternaire pour déterminer si un caractère est une voyelle ou une consonne.
```c
char c = 'e';
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    printf("Voyelle\n");
} else {
    printf("Consonne\n");
}
```

## Exercice 7
Quel sera l'affichage du code suivant ? Expliquez la réponse.
```c
int a = 5, b = 10;
printf("Resultat: %d\n", (a > b) ? a : b);
```

## Exercice 8
Quel sera l'affichage du code suivant ? Expliquez la réponse.
```c
int x = -2;
printf("Valeur absolue: %d\n", (x < 0) ? -x : x);
```

