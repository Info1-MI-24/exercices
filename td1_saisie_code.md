# Exercice de Programmation en C

## Énoncé

Écrivez un programme en C qui :

1. Demande à l'utilisateur de saisir une chaîne de caractères **exactement dans ce format** : `X123Y456Z789`.
   
   - Le format est fixe : il doit toujours y avoir une lettre suivie de 3 chiffres, répétée trois fois avec les lettres `X`, `Y`, et `Z`.
   
2. Le programme doit extraire les trois groupes de nombres (les chiffres) et les afficher **séparément**.

3. Si la chaîne saisie ne correspond pas exactement au format imposé (`X123Y456Z789`), le programme doit demander à l'utilisateur de recommencer jusqu'à ce qu'une saisie correcte soit fournie.

4. Vous utiliserez uniquement des fonctions de base telles que `scanf` et des boucles comme `while` ou `for`. Aucune fonction externe n'est autorisée pour cet exercice.

## Exigences

- Utilisez la fonction `scanf` pour capturer la saisie de l'utilisateur.
- Le programme doit vérifier que la chaîne respecte strictement le format imposé : trois lettres fixes (`X`, `Y`, `Z`), et chaque lettre suivie d'un groupe de trois chiffres.
- Les nombres doivent être extraits et affichés séparément, chacun sur une nouvelle ligne.

## Exemple de fonctionnement :

```plaintext
Veuillez entrer une chaîne dans le format 'X123Y456Z789' : A12B3
Erreur : la chaîne doit être au format exact 'X123Y456Z789'. Veuillez recommencer.
Veuillez entrer une chaîne dans le format 'X123Y456Z789' : X123Y456Z789
X : 123
Y : 456
Z : 789
