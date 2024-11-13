## Exercice de programmation en C : Manipulation des arguments de la ligne de commande

Dans cet exercice, vous allez réaliser un programme en C qui travaille avec les arguments de la ligne de commande.
Le programme prend un argument obligatoire qui est un prénom et affiche le message "Bonjour <prénom>".

Si des options ou des arguments non valides sont saisis, le programme se termine avec un code d'erreur égal à 5.

### Fonctionnalités attendues :

1. **Affichage de base** : 
    - Le programme affiche "Bonjour <prénom>" avec `<prénom>` remplacé par l'argument donné.

    Exemple :
    ```
    ./programme John
    ```
    Sortie attendue :
    ```
    Bonjour John
    ```

2. **Option `--help`** :
    - Si l'argument `--help` est fourni, le programme affiche une aide qui explique son fonctionnement.
    - Cette aide est prioritaire : si `--help` est utilisé dans la ligne de commande, le programme affiche l'aide et ignore les autres arguments.

    Exemple :
    ```
    ./programme --help
    ```
    Sortie attendue :
    ```
    Utilisation : ./programme <prénom> [options]
    Options :
      --help          Affiche cette aide.
      -e              Affiche le message en anglais (Hello <prénom>).
      -l              Affiche un message long (Bonjour <prénom>, comment ça va ?).
      -m <message>    Affiche <message> à la place de Bonjour.
                      Note : si -m est utilisé, l'option -e est ignorée.
    ```

    Exemple avec un prénom et `--help` :
    ```
    ./programme John --help
    ```
    Sortie attendue (l'aide est affichée malgré le prénom) :
    ```
    Utilisation : ./programme <prénom> [options]
    Options :
      --help          Affiche cette aide.
      -e              Affiche le message en anglais (Hello <prénom>).
      -l              Affiche un message long (Bonjour <prénom>, comment ça va ?).
      -m <message>    Affiche <message> à la place de Bonjour.
                      Note : si -m est utilisé, l'option -e est ignorée.
    ```

3. **Option `-e`** :
    - Si l'option `-e` est spécifiée, le programme affiche le message en anglais ("Hello <prénom>").
    - Cette option peut être placée n'importe où dans la ligne de commande.

    Exemple :
    ```
    ./programme John -e
    ```
    Sortie attendue :
    ```
    Hello John
    ```

4. **Option `-l`** :
    - Si l'option `-l` est spécifiée, le programme affiche un message plus long :
      - En français : "Bonjour <prénom>, comment ça va ?"
      - En anglais (si `-e` est également présent) : "Hello <prénom>, how are you ?"
    
    Exemples :
    ```
    ./programme John -l
    ```
    Sortie attendue :
    ```
    Bonjour John, comment ça va ?
    ```
    ```
    ./programme -l John -e
    ```
    Sortie attendue :
    ```
    Hello John, how are you ?
    ```

5. **Option `-m <message>`** :
    - Si l'option `-m` est suivie d'un message, le programme utilise ce message à la place de "Bonjour".
    - L'option `-e` est ignorée si `-m` est présent.
    - L'option `-l` est ignorée si `-m` est présent.

    Exemple :
    ```
    ./programme John -m "Salut"
    ```
    Sortie attendue :
    ```
    Salut John
    ```

    Exemple avec `-e` et `-m` (où `-e` est ignoré) :
    ```
    ./programme John -m "Hello there" -e
    ```
    Sortie attendue :
    ```
    Hello there John
    ```


### Résumé des commandes possibles :
    ```
    ./programme John                  # Bonjour John
    ./programme John -e               # Hello John
    ./programme John -l               # Bonjour John, comment ça va ?
    ./programme John -e -l            # Hello John, how are you ?
    ./programme --help                # Affiche l'aide
    ./programme John --help           # Affiche l'aide
    ./programme John -m "Salut"       # Salut John
    ./programme John -m "Salut" -l    # Salut John (option -l ignorée) ?
    ./programme John -m "Hey" -e      # Hey John (option -e ignorée)
    ```
