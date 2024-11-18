# Exercice 1
Créez une fonction qui retourne `true` si un des arguments passés au programme est `"--help"`, sinon elle retourne `false`.

> Le prototype de la fonction sera : `bool is_help(int argc, char* argv[]);`

# Exercice 2
Dans un programme, il est possible de passer une option en utilisant `-e<nbr>` où `<nbr>` est un nombre entier positif. Créez une fonction qui retourne le nombre passé en argument. Si l'option n'est pas passée, la fonction retourne `-1`.

> Le prototype de la fonction sera : `int get_nbr(int argc, char* argv[]);`

Exemple d'utilisation :
```c
int main(int argc, char* argv[])
{
    int nbr = get_nbr(argc, argv);
    if (nbr != -1)
        printf("Nombre passé en argument : %d\n", nbr);
    else
        printf("Aucun nombre passé en argument\n");
    return 0;
}
```

```shell
$ ./a.out -e5
Nombre passé en argument : 5

$ ./a.out
Aucun nombre passé en argument

$ ./a.out -e
Aucun nombre passé en argument

$ ./a.out -e-5
Aucun nombre passé en argument

$ ./a.out -etutu
Aucun nombre passé en argument
```

# Solution

## Exercice 1
```c
bool is_help(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--help") == 0)
            return true;
    }
    return false;
}
```

## Exercice 2
```c
int get_nbr(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        int nbr;
        if (sscanf(argv[i], "-e%d", &nbr) == 1 && nbr >= 0) {
            return nbr; // Retourne le nombre s'il est positif
        }
    }
    return -1; // Retourne -1 si aucun nombre n'a été trouvé
}
```