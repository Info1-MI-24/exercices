# Exercices opérateurs
## Ex 1
Quelle est la valeur des expressions suivantes ?

```c
int val1 = 5;
int val2 = 6;
int val3 = 2;
```

a) `val1 >> 1`  
b) `val1 << 2`  
c) `val1 | 0x7`  
d) `0x2 << val3`  
e) `0xC & 0x3`  
f) `0x2 | 0x3`  
g) `0x4 & 0x3`  
h) `0x4 | 0x3`   

## Ex 2
Donner une expression qui met le bit #0 de la variable `val` à `1`.
>val est de type `int`

## Ex 3
Donner une expression qui met le bit #3 de la variable `val` à `0`.
>val est de type `int`

## Ex 4
Donner une expression qui vaut `true` si le bit #2 de `val` est `1` sinon elle retourne `false`.
>val est de type `int`

## Ex 5
Écrire une fonction qui force un bit à 1 d'une variable passée par référence.
Le numéro du bit est passé en paramètre.
Le prototype de la fonction est : `void set_bit(int* value, int bit_num)`

## Ex 6
Donner une expression qui inverse le bit #0 de la variable `val`.

## Ex 7
Donner une expression qui inverse le bit #0 et le bit #2 de la variable `val`.

## Ex 8
Donner une expression qui force les bits #1 et #2 de la variable `val` à `1`.

## Ex 9
Donner une expression qui force les bit #2 et #3 de la variable `val` à `0`.

## Ex 10
Donner une expression qui retourne `true` si les bit #1 et #3 de la variable `val` sont à `1` sinon elle retourne `false`.

## Ex 11
Donner une expression qui extrait les 3 bits de poids fort (bits #29 à #31 inclus) de la variable val (de type int32_t) et retourne leur valeur dans une plage allant de 0 à 7.

## Solutions
### Ex 1
a) `val1 >> 1 = 2`  
b) `val1 << 2 = 20`  
c) `val1 | 0x7 = 7`  
d) `0x2 << val3 = 8`  
e) `0xC & 0x3 = 0`  
f) `0x2 | 0x3 = 3`  
g) `0x4 & 0x3 = 0`  
h) `0x4 | 0x3 = 7`   
### Ex 2
`val |= 0x1`
### Ex 3
`val &= ~0x8`
### Ex 4
`val & 0x4 == 0x4`
### Ex 5
```C
void set_bit(int* val, int nbr){
    *val = (*val) | (0x1 << nbr);
}
```
### Ex 6
```C
val ^= 1
```
### Ex 7
```C
val ^= 5
```
### Ex 8
```C
val |= 6
```
### Ex 9
```C
val &= ~12
// ou
val &= ~0xC
```
### Ex 10
```C
val & 0xA == 0xA
```

### Ex 11
```C
(val >> 29) & 0x7
```

