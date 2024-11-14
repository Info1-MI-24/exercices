# Exercices sur les Arguments en Ligne de Commande en C

### 0. Argument
En considérant la ligne de commande suivante : 
```console
./prg 12 foo bar
```

Quelles-sont les valeurs suivantes : 
- `argc` ?
- `argv[0]` ?
- `argv[1]` ?
- `argv[2]` ?


Quel est le type de `argv[0]` ?
Quel est le type de `argv[1]` ?
Quel est le type de `argv[2]` ?


### 1. Afficher tous les arguments
Écrivez un programme en C qui affiche tous les arguments passés en ligne de commande.
**Exemple de ligne de commande :**
```console
./programme arg1 arg2 arg3
```

**Sortie attendue :**
```console
Argument 0 : ./programme  
Argument 1 : arg1  
Argument 2 : arg2  
Argument 3 : arg3
```


### 2. Compter le nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un deux trois
```


### 3. Identifier un argument spécifique
A quoi correspond `argv[2]` ?

**Exemple de ligne de commande :**
```console
./programme Bonjour Monde
```


### 4. Conversion d'un argument en entier
Écrivez un programme en C qui prend un argument, le convertit en entier et l'affiche.
**Exemple de ligne de commande :**
```console
./programme 42
```


### 5. Afficher uniquement les arguments en position impaire
Écrivez un programme qui affiche uniquement les arguments passés aux positions impaires (1, 3, 5...).
**Exemple de ligne de commande :**
```console
./programme un deux trois quatre cinq
```

**Sortie attendue :**
```console
Arguments en position impaire : un trois cinq
```


### 6. Vérifier si un argument est un nombre pair ou impair
Écrivez un programme en C qui prend un argument entier et affiche s'il est pair ou impair.
**Exemple de ligne de commande :**
```console
./programme 7
```
**Sortie attendue :**
```console
7 est impair
```


### 7. Afficher les arguments en ordre inversé
Écrivez un programme qui affiche tous les arguments en ordre inversé.
**Exemple de ligne de commande :**
```console
./programme rouge vert bleu
```
**Sortie attendue :**
```console
bleu vert rouge
```

### 8. Afficher le nom du programme uniquement
Écrivez un programme qui affiche uniquement le nom du programme.
**Exemple de ligne de commande :**
```console
./programme arg1 arg2
```
**Sortie attendue :**
```console
Nom du programme : ./programme
```

### 9. Calculer la somme de plusieurs arguments entiers
Écrivez un programme qui prend des arguments entiers et calcule leur somme.
**Exemple de ligne de commande :**
```console
./programme 4 5 6
```
**Sortie attendue :**
```console
Somme : 15
```

### 10. Afficher le nombre d'arguments qui sont des nombres
Écrivez un programme qui compte le nombre d'arguments passés qui sont des nombres.
**Exemple de ligne de commande :**
```console
./programme 123 test 456 78
```
**Sortie attendue :**
```console
Nombre d'arguments numériques : 3
```

## 11. Nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un 12 -45 toto
```

## 12. Nombre d'arguments
Combien d'arguments sont passés au programme ?
**Exemple de ligne de commande :**
```console
./programme un deux trois "bonjour le monde"
```