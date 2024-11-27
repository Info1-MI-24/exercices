# Switch

## Ex 1
Écrire un `switch` pour que la variable `res` prenne une valeur en fonction de la variable `test` :
- `test = 0` => `res = 1;` 
- `test = 1` => `res = 5;`
- `test = 3 ou 4` => `res = -2;`
- Pour les autres valeurs => `res = 7;` 

```c
int res;
int test = 0;
```

## Ex 2
Quel est l'affichage du programme suivant :

*Attention aux `break`*

```C
for(int i=0; i<10; i++){
    switch(i){
        case 1:
        case 2:
            printf("V1\n");
            break;

        case 4:
        case 8:
            printf("V2\n");
            break;

        case 5:
            printf("V3\n");
            break;

    }
}
```

## Ex 3
Quel est l'affichage du programme ?

*Attention aux `break`*

```C
int i = 4;
switch(i){
    case 1:
    case 2:
        printf("V1\n");
        break;

    case 4:
    case 8:
        printf("V2\n");

    case 5:
        printf("V3\n");
        break;

}
```

## Ex 4
Ajouter un switch dans la boucle ci-dessous afin d'afficher les voyelles.

```C
for(char c='A'; c < 'Z'; c++){
    // switch ...
}
```

```console
Voyelle : A
Voyelle : E
...
Voyelle : Y
```


## Solutions
### Ex 1
```C
int test = 0;
int res;

switch(test){
    case 0:
        res = 1;
        break;
    case 1:
        res = 5;
        break;
    case 3:
    case 4:
        res = -2;
        break;

    default:
        res = 7;
}
```

### Ex 2
```console
V1
V1
V2
V3
V2
```

### Ex 3
```console
V2
V3
```

### Ex 4
```C
for(char c='A'; c < 'Z'; c++){
    switch(c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("Voyelle : %c\n",c);
            break;
    }
}
```