# Fonctions de Référence
 **Attention :** Pour ces exercices, testez vos fonctions avec [onlinegdb](https://www.onlinegdb.com)

## Exercice 1
Définissez une fonction `void triple(...)` qui prend un paramètre entier en entrée et ne retourne rien.
Cette fonction modifie le paramètre passé afin d'obtenir le triple de sa valeur.
```c
// Exemple d'appel de la fonction
int val = 2;
triple(...);
printf("Résultat : %d", val);
```
Console :
```
Résultat : 6
```

## Exercice 2
Définissez une fonction de type `bool` qui prend un caractère en entrée.
- Si c'est une lettre minuscule, la fonction modifie la lettre en majuscule et retourne `true`.
- Sinon, elle retourne `false` et le paramètre reste inchangé.

## Exercice 3
Quel est l'affichage du programme suivant :
```c
#include <stdio.h>
void func1(int val){
    val = val + 5;
    printf("Q2 = %d\n", val);
}
void func2(int* val){
    printf("Q3 = %p\n", (void*)val);
    printf("Q4 = %d\n", *val);
    *val = 0;
}
void func3(int val1, int val2, double* val3){
    *val3 = val1 + val2;
}
int func4(int* i, double* d){
    printf("Q10 = %d\n", *i);
    *i = (int)(*d);
    return 8;
}
int main(int argc, char *argv[])
{
    int i1 = 12;
    int i2 = 1;
    int i3 = 0;
    double d1 = 1.2;
    func1(i1);
    printf("Q1 = %d\n", i1);
    func2(&i1);
    printf("Q5 = %d\n", i1);
    
    func2(&i2);
    printf("Q6 = %d\n", i2);
    i1 = 5;
    i2 = 2;
    func3(i1, i2, &d1);
    printf("Q7 i1 = %d\n", i1);
    printf("Q8 i2 = %d\n", i2);
    printf("Q9 d1 = %.2lf\n", d1);
    i1 = 3;
    d1 = 4.5;
    int res = func4(&i1, &d1);
    printf("Q11 i1 = %d\n", i1);
    printf("Q12 d1 = %.2lf\n", d1);
    printf("Q13 res = %d\n", res);

    return 0;
}
```

## Exercice 4
Définissez une fonction `swap` qui intervertit deux valeurs entières passées en paramètres.

## Exercice 5
Écrivez une fonction `tri` de type `void` qui prend trois entiers en entrée.
Une fois la fonction terminée, les valeurs doivent être triées par ordre croissant.
Utilisez la fonction `swap` de l'exercice 4.
Le premier paramètre doit être le plus petit.
```c
int i1 = 6;
int i2 = 12;
int i3 = 2;

tri(&i1, &i2, &i3);

printf("Résultat tri : i1=%d, i2=%d, i3=%d\n", i1, i2, i3);
```
Affichage :
```
Résultat tri : i1=2, i2=6, i3=12
```

## Exercice 6
Écrivez une fonction de type `void` qui prend 3 paramètres en entrée :
- `val` : `int`
- `min` : `int`
- `max` : `int`
- Si `val` est supérieur à `max`, `val` prend la valeur de `max`.
- Si `val` est inférieur à `min`, `val` prend la valeur de `min`.
- Sinon, `val` reste inchangé.

## Exercice 7
Écrivez une fonction qui cherche le plus grand diviseur commun entre deux nombres.
Le prototype de la fonction est : `bool pgcd(int val1, int val2, int* res);`
Utilisez les boucles `for`.
Si un diviseur différent de 1 existe, la fonction retourne `true`, sinon `false`.
La valeur du plus grand diviseur sera retournée via le paramètre `res`.

## Exercice 8 
Quel est l'affichage du programme suivant :
```c
#include <stdio.h>

void afficher(double val, int* nbr){
    printf("Val %d : %.2lf\n", *nbr, val);
    (*nbr)++;
}

void func1(double* val, int* nbr){
    int cpt = 0;
    while(*val > 0){
        *val -= 10;
        cpt++;
    }
    afficher(*val, nbr);
}

int main()
{
    int valeur_nbr = 0;
    double val = 56.0;
    
    afficher(25, &valeur_nbr);
    func1(&val, &valeur_nbr);
    afficher(val, &valeur_nbr);

    return 0;
}
```

## Exercice 9
Quel est l'affichage du programme suivant :
```c
#include <stdio.h>

void fonc(double* val){
    printf("Val : %p\n", (void*)val);
    printf("Val* : %lf\n", *val);
}

int main()
{
    double val = 10.0;
    fonc(&val);

    return 0;
}
```


## Solutions
### Ex 1
```C
#include <stdio.h>

void triple(int* val){
    *val = 3*(*val);
}

int main()
{
    int demo = 2;
    triple(&demo);
    printf("Res : %d", demo);
    return 0;
}
```

### Ex 2
```C
#include <stdio.h>
#include <stdbool.h>

bool to_upper(char* c){
    if( *c >= 'a' && *c <= 'z' ){
        *c -= ('a'-'A');
        return true;
    }
    return false;
}

int main()
{
    char demo = 'a';
    bool res = to_upper(&demo);
    printf("Res : %d - Char : %c\n", res, demo);
    
    demo = 'C';
    res = to_upper(&demo);
    printf("Res : %d - Char : %c\n", res, demo);
    
    demo = '1';
    res = to_upper(&demo);
    printf("Res : %d - Char : %c\n", res, demo);
    
    return 0;
}
```

### Ex 3
```BASH
Q2 = 17
Q1 = 12
Q3 = -1600249280 (adresse, nombre aléatoire)
Q4 = 12
Q5 = 0
Q3 = -1600249276 (adresse, nombre aléatoire)
Q4 = 1
Q6 = 0
Q7 i1=5
Q8 i2=2
Q9 d1=7.000000
Q10 = 3
Q11 i1=4
Q12 d1=4.500000
Q13 res=8
```

### Ex 4
```C
#include <stdio.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int v1 = 12;
    int v2 = 45;
    
    printf("V1 : %d - V2 : %d\n", v1, v2);
    swap(&v1, &v2);
    printf("V1 : %d - V2 : %d\n", v1, v2);
    
    return 0;
}
```

### Ex 5
```C
#include <stdio.h>

void swap(int* i1, int* i2){
    int tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void tri(int* i1, int* i2, int* i3){
    if( *i1 > *i2) swap(i1, i2);
    if( *i1 > *i3) swap(i1, i3);
    if( *i2 > *i3) swap(i2, i3);
}

int main(int argc, char* argv[])
{
    int i1=1, i2=3, i3=2;
    tri(&i1, &i2, &i3);
    printf("i1=%d  i2=%d  i3=%d\n", i1, i2, i3);
    
    i1=7, i2=3, i3=1;
    tri(&i1, &i2, &i3);
    printf("i1=%d  i2=%d  i3=%d\n", i1, i2, i3);
    
    i1=10, i2=20, i3=30;
    tri(&i1, &i2, &i3);
    printf("i1=%d  i2=%d  i3=%d\n", i1, i2, i3);
    
    i1=6, i2=6, i3=6;
    tri(&i1, &i2, &i3);
    printf("i1=%d  i2=%d  i3=%d\n", i1, i2, i3);    
}
```

### Ex 6
```C
#include <stdio.h>

void check(int* val, int min, int max){
    *val = *val >= max ? max : *val;
    *val = *val <= min ? min : *val;
}

int main(int argc, char* argv[])
{
    int min = 0;
    int max = 12;
    int val = 1;
    printf("Test 1 : min=%d / max=%d / val=%d ", min, max,val);
    check(&val, min, max);
    printf("Res : %d\n", val);
 
    min = 10;
    max = 12;
    val = 1;
    printf("Test 2 : min=%d / max=%d / val=%d ", min, max,val);
    check(&val, min, max);
    printf("Res : %d\n", val);
    
    min = -6;
    max = 12;
    val = 145;
    printf("Test 2 : min=%d / max=%d / val=%d ", min, max,val);
    check(&val, min, max);
    printf("Res : %d\n", val);    
}
```

### Ex 7
```C
#include <stdbool.h>

bool pgmc(int val1, int val2, int* res){
    int max = val1 > val2 ? val1 : val2;
    
    for(int i=max; i>1; i--){
        if( (val1 % i == 0 && val2 % i == 0) ){
            *res = i;
            return true;
        }
    }
    return false;
}

int main()
{
    int val1 = 489;
    int val2 = 123;
    int res;
    if( pgmc(val1, val2, &res) )
        printf("Test 1 : val1=%d / val2=%d / pgmc=%d\n", val1, val2, res);

    val1 = 123*7;
    val2 = 123;
    if( pgmc(val1, val2, &res) )
        printf("Test 1 : val1=%d / val2=%d / pgmc=%d\n", val1, val2, res);

    val1 = 85*17;
    val2 = 85*59;
    if( pgmc(val1, val2, &res) )
        printf("Test 1 : val1=%d / val2=%d / pgmc=%d\n", val1, val2, res);        

    return 0;
}
```

### Ex 8
???