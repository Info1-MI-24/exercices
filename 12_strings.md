# Exercices chaîne de caractères

## Ex 1
Déclarer une variable `text` et l'initialiser avec la chaîne de caractères `Comment allez-vous ?`

## Ex 2
Compléter la deuxième déclaration pour initialiser le tableau avec des accolades.
Les deux tableaux doivent contenir la chaîne de caractères `foo`.

```c
int char1[] = "foo";
int char2[] = {...
```

## Ex 3
Quel est l'affichage du programme suivant
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char text1[] = "Hello";
    printf("Text 1 : %s\n", text1);
    printf("Sizeof 1 : %ld\n", sizeof(text1));
    printf("Strlen 1 : %ld\n\n", strlen(text1));

    char text2[] = "Test 1 2 3";
    printf("Text 2 : %s\n", text2);
    printf("Sizeof 2 : %ld\n", sizeof(text2));
    printf("Strlen 2 : %ld\n\n", strlen(text2));

    char text3[] = {'1', '2', '3'};
    printf("Text 3 : %s\n", text3);
    printf("Sizeof 3 : %ld\n", sizeof(text3));
    printf("Strlen 3 : %ld\n\n", strlen(text3));

    char text4[] = {'1', '2', '3', '\0'};
    printf("Text 4 : %s\n", text4);
    printf("Sizeof 4 : %ld\n", sizeof(text4));
    printf("Strlen 4 : %ld\n\n", strlen(text4));
    
    char text5[8] = {'a', 'b', 'c', '\0'};
    printf("Text 5 : %s\n", text5);
    printf("Sizeof 5 : %ld\n", sizeof(text5));
    printf("Strlen 5 : %ld\n\n", strlen(text5));

    char text6[] = "Foo Bar";
    printf("Text 6 : %s\n", &text6[2]);
    printf("Sizeof 6 : %ld\n", sizeof(text6[2]));
    printf("Strlen 6 : %ld\n\n", strlen(&text6[2]));

    char text7[] = "Hello\n";
    printf("Text 7 : %s\n", &text7[2]);
    printf("Sizeof 7 : %ld\n", sizeof(text7[2]));
    printf("Strlen 7 : %ld\n\n", strlen(&text7[2]));

    return 0;
}
```

## Ex 4

Dans un code, vous avez un tableau `val` qui contient des caractères (`char`).

Vous devez remplir ce tableau (`val[0]=...`), afin que le programme ci-dessous affiche `hello` en injectant votre tableau dans un `printf`.

```c
char val[10];

val[0] = ...
   ...
   
printf("%s", val);
```

## Ex 5
Écrire une fonction qui prend une chaîne de caractère en entrée.

Cette fonction affiche la chaîne passée en paramètre ainsi que le nombre de caractères qu'elle contient.

Exemple de prototype :

```c
int main(){
    my_func("Bonjour");
}
```

Résultat
```console
Text : Bonjour
Nbr : 7
```

## Ex 6

Quel est l'affichage du programme suivant ?

```c
void affichage(const char text[]){
    for (int i=0; text[i] != '\0'; i++ )
    {
        printf("%c", text[i]);
    }
}

int main(void)
{
    char text[] = {'H','e','l','l','o'};
    affichage(text);
    return 0;
}
```

## Ex 7

Quel est l'affichage du programme suivant ?

```c
    const char txt1[] = "Bonjour";
    const char txt2[10] = "Bonjour";

    printf("sizeof 1 = %d\n", sizeof(txt1));
    printf("sizeof 2 = %d\n", sizeof(txt2));
    printf("strlen 1 = %d\n", strlen(txt1));
    printf("strlen 2 = %d\n", strlen(txt2));
    
    printf("strlen 3 = %d\n", strlen(""));
    printf("strlen 4 = %d\n", strlen(" "));
```

## Ex 8 - Palindrome

Écrire une fonction qui vérifie si une chaîne de caractères passée en paramètre est un palindrome.
Cette fonction doit retourner une valeur de type bool.
La vérification doit être insensible à la casse.

```c
int main(){
    
    char text[] = "Sugus";

    if( is_palindrome(text) ){
        printf("%s : C'est un palindrome", text);
    }
    else{
        printf("Ce n'est pas un palindrome");
    }
}
```

## Ex 10 - Occurrences

Écrire un programme qui demande à l'utilisateur de saisir une chaîne de caractères pouvant contenir des espaces.

Le programme doit :

- Compter le nombre d'occurrences de chaque caractère appartenant à la table ASCII.
- Ignorer les caractères qui ne font pas partie de la table ASCII.
- Afficher le nombre d'occurrences de chaque caractère présent au moins une fois.

La chaîne saisie peut contenir un maximum de 80 caractères.

Le programme reste simple, et la solution tient en environ 20 lignes de code.

**Aide**

*Pensez à utiliser un tableau pour stocker les occurrences*

Par exemple, si vous voulez compter les occurrences des chiffres dans `011569899`

On aurait un tableau comme ceci

```c
tab[0] = 1 // occurrence 0
tab[1] = 2 // occurrence 1
tab[2] = 0 // occurrence 2
...
tab[9] = 3 // occurrence 9
```

**L'affichage du programme**

```console
Veuillez saisir un texte : Quelle belle journée !

  |  3
! |  1
Q |  1
b |  1
e |  5
j |  1
l |  4
n |  1
o |  1
r |  1
u |  2
```

## Ex 11 - Saisie

Écrire un programme qui demande à l'utilisateur de saisir son nom et son prénom.

Attention il peut y avoir des espaces dans le nom ou dans le prénom et les majuscules sont autorisés.

Stocker le nom et le prénom dans des tableaux de caractères.

Afficher le nom et prénom sans modification.

```console
Veuillez saisir votre nom : Doe
Veuillez saisir votre prénom : john

Nom : Doe
Prénom : john
```


### Ex 12 - Majuscule

Écrire une fonction qui transforme une chaîne de caractères en majuscule.

**Vous ne devez pas utiliser la fonction `toupper`**. Vous devez écrire votre propre fonction.

```c
void to_upper(char text[]){
    // code
}

int main(){
    char text[] = "Bonjour";
    to_upper(text);
    printf("%s", text);
}
```

Résultat
```console
BONJOUR
```


### Ex 13 - Motif

Compléter la fonction `find` pour que le programme suivant affiche la position du motif s'il est présent dans 
la chaîne de caractères.

La taille du motif n'est pas fixe. Donc par exemple dans l'exemple ci-dessous, on peut utiliser comme modif :
-  on
-  Bonjour
-  allez

La fonction doit aussi compter le nombre de fois que le motif est présent dans toute la chaîne.

La position correspond à l'index du premier caractère dans la chaîne.

Si le motif n'est pas présent, la fonction doit mettre `-1` dans la position.

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void find(){
}

int main(void)
{
    const char txt[] = "Bonjour tout le monde, comment allez-vous oon?";
    const char motif[] = "on"; 
    int pos;
    int count;

    find(txt, motif, &pos, &count);

    if( pos >= 0)
        printf("Le premier motif commence à la pos : %d "
            "et il est présent %d fois.", pos, count);
    else
        printf("Le motif n'est pas présent");
    
    return 0;
}
```

Exemple d'utilisation

Voici un exemple d'utilisation du programme avec le motif `on` et la chaîne `Bonjour tout le monde, comment allez-vous oon?`

```console
Le premier motif commence à la pos : 1 et il est présent 3 fois.
```

# Solutions

## Ex 1

```c
char text[] = "Comment allez-vous ?";
```

## Ex 2

```c
int char1[] = "foo";
int char2[] = {'f', 'o', 'o', '\0'};
```

## Ex 4
```c
char val[10];

val[0] = 'h';
val[1] = 'e';
val[2] = 'l';
val[3] = 'l';
val[4] = 'o';
val[5] = '\0';
   
printf("%s", val);
```

## Ex 5

```c
void func(char tab[]){
    printf("Text : %s\n", tab);
    printf("Nbr : %ld\n", strlen(tab));
}
```

## Ex 6

Le programme va afficher `hello` et ensuite continuer d'afficher le contenu de la mémoire jusqu'à
ce que la valeur à afficher soit un `\0`

## Ex 7

```console
sizeof 1 = 8
sizeof 2 = 10
strlen 1 = 7
strlen 2 = 7
strlen 3 = 0
strlen 4 = 1
```

## Ex 8

```c
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(const char text[]){
    const int l = strlen(text);
    for(int i=0; i < l/2; i++){
        if( tolower(text[i]) != tolower(text[l-i-1]) ){
            return false;
        }
    }
    return true;
}


bool is_palindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Convertir les caractères à minuscule pour ignorer la casse
        char left_char = tolower(str[left]);
        char right_char = tolower(str[right]);

        // Vérifier si les caractères correspondent
        if (left_char != right_char) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
```

## Ex 10

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80
#define ASCII_SIZE 128

int main() {
    char input[MAX_LENGTH + 1];  // +1 pour le caractère nul '\0'
    int occurrences[ASCII_SIZE] = {0};  // Tableau pour compter les occurrences

    printf("Saisissez une chaîne de caractères (max %d caractères) : ", MAX_LENGTH);
    fgets(input, MAX_LENGTH + 1, stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        const char ch = input[i];
        if (ch > 0 && ch < ASCII_SIZE) {  // Vérifier si le caractère est dans la table ASCII
            occurrences[ch]++;
        }
    }

    printf("\nOccurrences des caractères :\n");
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (occurrences[i] > 0) {
            printf("'%c' : %d\n", i, occurrences[i]);
        }
    }

    return 0;
}

```

## Ex 11

```c
void saisie_text(const char message[], char text[], const int max_size){
    printf("%s", message);
    fgets(text, max_size, stdin);
    
    const int l = strlen(text);
    if( l > 0 && text[l-1] == '\n'){
        text[l-1] = '\0';
    }
}

#define MAX_CHAR 20
int main(int argc, char* argv[])
{
    char nom[MAX_CHAR];
    char prenom[MAX_CHAR];

    saisie_text("Veuillez saisir votre nom : ", nom, MAX_CHAR);   
    saisie_text("Veuillez saisir votre prénom : ", prenom, MAX_CHAR);

    print( nom, max_size );
    print( prenom, max_size );

    return 0;
}
```

## Ex 12 - Majuscule

```c
void to_upper(char text[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - ('a' - 'A');
        }
    }
}
```

## Ex 13 - Motif

La solution `find_simple` utilise deux boucles, mais est plus facile à faire et à comprendre

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void find(const char text[], const char motif[], int* pos, int* count)
{
    bool inside_motif = false;
    int pos_start;
    *pos = -1;
    *count = 0;

    for (int ind = 0; text[ind] != '\0'; ind++)
    {
        if (inside_motif)
        {
            const int pos_motif = ind - pos_start;  // pos inside motif
            if (motif[pos_motif] != text[ind])
            {  // motif not equal
                inside_motif = false;
            }
            else if (motif[pos_motif + 1] == '\0')  // end of motif
            {
                (*count)++;
                if (*pos == -1)  // set pos only the first time
                {
                    *pos = pos_start;
                }
                inside_motif = false;
            }
        }

        // detect start of motif
        if (text[ind] == motif[0] && !inside_motif)
        {
            pos_start = ind;
            inside_motif = true;
        }
    }
}

void find_simple(const char text[], const char motif[], int* pos, int* count)
{
    *pos = -1;
    *count = 0;

    for (int ind = 0; text[ind] != '\0'; ind++)
    {
        // detect start of motif
        if (text[ind] == motif[0])
        {
            // browse through the pattern
            for (int pos_motif = 0; motif[pos_motif] != '\0'; pos_motif++)
            {
                // motif not equal text
                if (motif[pos_motif] != text[ind + pos_motif]){
                    break;
                }

                if (motif[pos_motif + 1] == '\0') // last motif char
                {
                    (*count)++;
                    if (*pos == -1)  // set pos only the first time
                    {
                        *pos = ind;
                    }
                }
            }
        }
    }
}

int main(int argc, char* argv[])
{
    // const char txt[] = "onBojoonur tout le mononde, comment allez-vous on?";
    // const char motif[] = "on";
    int pos;
    int count;

    //find(argv[2], argv[1], &pos, &count);
    find_simple(argv[2], argv[1], &pos, &count);

    if (pos >= 0)
        printf(
            "Le premier motif commence à la pos : %d "
            "et il est présent %d fois.",
            pos, count);
    else
        printf("Le motif n'est pas présent");

    return EXIT_SUCCESS;
}
```
