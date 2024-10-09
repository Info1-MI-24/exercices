
# Laboratoire de Programmation en C : Saisie et Traitement de Valeurs Numériques

## Objectifs

Dans ce laboratoire, vous devez écrire un programme en C qui permet à l'utilisateur d'entrer des valeurs numériques,
puis d'effectuer plusieurs opérations sur ces valeurs (somme, nombre d'éléments, moyenne, minimum, maximum).

Le programme doit :
- Demander à l'utilisateur d'entrer des valeurs numériques.
- Après chaque entrée, demander à l'utilisateur s'il souhaite entrer une nouvelle valeur ou arrêter la saisie.
- Si la saisie est incorrecte (non numérique), redemander la saisie.
- Une fois que l'utilisateur arrête la saisie, le programme affiche le résultat (somme, nombre de valeurs, moyenne, minimum et maximum) de manière formatée et alignée.

## Exigences
- Utilisez les fonctions printf et scanf pour interagir avec l'utilisateur.
- Si l'utilisateur entre une valeur non numérique, une vérification d'erreur est nécessaire, et l'utilisateur doit être invité à entrer une nouvelle valeur.
- Le programme doit gérer les valeurs incorrectes et demander à l'utilisateur de recommencer en cas de problème de saisie.

## Exemple de déroulement du programme

```bash
Entrez une valeur numérique : 10
Voulez-vous entrer une nouvelle valeur ? (o/n) : o
Entrez une valeur numérique : 20
Voulez-vous entrer une nouvelle valeur ? (o/n) : o
Entrez une valeur numérique : trente
Erreur : entrée non valide. Veuillez entrer une valeur numérique.
Entrez une valeur numérique : 30
Voulez-vous entrer une nouvelle valeur ? (o/n) : n

Résultats :
+----------------------+-------+
| Nombre de valeurs    | 3     |
+----------------------+-------+
| Somme des valeurs    | 60    |
+----------------------+-------+
| Moyenne des valeurs  | 20.00 |
+----------------------+-------+
| Valeur minimale      | 10    |
+----------------------+-------+
| Valeur maximale      | 30    |
+----------------------+-------+
```

## Consignes
- Initialisation : Vous devez initialiser une variable pour stocker la somme des valeurs, le nombre de valeurs, la moyenne, ainsi que les valeurs minimales et maximales.
- Boucle principale : Le programme doit demander une entrée numérique à l'utilisateur, la vérifier, et la stocker si elle est valide. Une fois une valeur entrée, il doit demander à l'utilisateur s'il veut continuer.
- Calculs : Lorsque l'utilisateur choisit d'arrêter, vous devez calculer la somme, la moyenne, le minimum et le maximum des valeurs entrées.
- Formatage de la sortie : Les résultats doivent être alignés et formatés correctement pour une meilleure lisibilité.
