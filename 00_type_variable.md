# Exercices : Types et Variables en C
## Exercice 1 : Identifier le Type des Valeurs
Donnez le type de chaque valeur ci-dessous.
1. `12`
2. `"Bonjour"`
3. `'c'`
4. `"a"`
5. `3.14`
6. `0xAB`
7. `12 > 34`
8. `-4 && 5`
   
## Exercice 2 : Vérifier la Validité des Noms de Variables
Pour chaque nom de variable ci-dessous, indiquez s'il est valide en C ou non. Expliquez pourquoi si ce n'est pas valide.
1. `monVariable`
2. `2variable`
3. `nom_variable`
4. `variable-à-lunettes`
5. `âge`

## Exercice 3 : Associer une Valeur à un Type
Associez chaque type de donnée à une valeur parmi celles listées.
Types : `int`, `float`, `char`, `double`, `string`
Valeurs : `5`, `3.1415`, `"Hello"`, `'z'`, `-12`

## Exercice 4 : Identifier le Type de Résultats d'Opérations
Pour chaque opération ci-dessous, indiquez le type du résultat.
1. `5 + 3`
2. `7.0 / 2`
3. `'a' + 1`
4. `10 * 2.5`
5. `12 % 5`

## Exercice 5 : Variables et Initialisation
Dites si chaque déclaration de variable est correcte ou non en C. Si elle ne l'est pas, expliquez pourquoi.
1. `int nombre = 5;`
2. `double valeur = "3.14";`
3. `char lettre = 'z';`
4. `int total = 4.2;`
5. `string texte = "Bonjour";`
6. `int nombreOctal = 012;`
7. `int nombreHexa = 0x1A;`
8. `float pointFlottant = 3.5f;`
9. `char symbole = 35;`
10. `int mauvaiseValeur = "100";`

## Exercice 6 : Déclaration de Types et Variables
Associez chaque type de données à une description appropriée :
- `int`
- `float`
- `char`
- `double`
1. Stocke des caractères simples.
2. Stocke des nombres entiers.
3. Stocke des nombres à virgule flottante (précision simple).
4. Stocke des nombres à virgule flottante (précision double).


# Solutions
# Exercices : Types et Variables en C
## Exercice 1 : Identifier le Type des Valeurs
Donnez le type de chaque valeur ci-dessous.
1. `12` - `int`
2. `"Bonjour"` - `string` ou `char*`
3. `'c'` - `char`
4. `"a"` - `string` ou `char*`
5. `3.14` - `double`
6. `0xAB` - `int` (en notation hexadécimale)
7. `12 > 34` - `bool`
8. `-4 && 5` - `bool`
## Exercice 2 : Vérifier la Validité des Noms de Variables
Pour chaque nom de variable ci-dessous, indiquez s'il est valide en C ou non. Expliquez pourquoi si ce n'est pas valide.
1. `monVariable` - valide
2. `2variable` - non valide (les noms de variables ne peuvent pas commencer par un chiffre)
3. `nom_variable` - valide
4. `variable-à-lunettes` - non valide (le caractère `-` n'est pas autorisé dans les noms de variables)
5. `âge` - non valide en C standard (caractères spéciaux comme `é` ne sont pas autorisés)
## Exercice 3 : Associer une Valeur à un Type
Associez chaque type de donnée à une valeur parmi celles listées.
Types : `int`, `float`, `char`, `double`, `string`
Valeurs : `5`, `3.1415`, `"Hello"`, `'z'`, `-12`
- `int` -> `5` ou `-12`
- `float` -> `3.1415`
- `char` -> `'z'`
- `double` -> `3.1415` (si précision plus élevée nécessaire)
- `string` -> `"Hello"`
## Exercice 4 : Identifier le Type de Résultats d'Opérations
Pour chaque opération ci-dessous, indiquez le type du résultat.
1. `5 + 3` - `int`
2. `7.0 / 2` - `double`
3. `'a' + 1` - `int` (la valeur ASCII de `'a'` augmentée de 1)
4. `10 * 2.5` - `double`
5. `12 % 5` - `int`
## Exercice 5 : Variables et Initialisation
Dites si chaque déclaration de variable est correcte ou non en C. Si elle ne l'est pas, expliquez pourquoi.
1. `int nombre = 5;` - correcte
2. `double valeur = "3.14";` - incorrect (incompatibilité de type entre `double` et `string`)
3. `char lettre = 'z';` - correcte
4. `int total = 4.2;` - incorrect (`int` ne peut stocker une valeur décimale)
5. `string texte = "Bonjour";` - incorrect (le type `string` n'existe pas en C, utiliser `char*`)
6. `int nombreOctal = 012;` - correcte (notation octale pour `10` en base 8)
7. `int nombreHexa = 0x1A;` - correcte (notation hexadécimale)
8. `float pointFlottant = 3.5f;` - correcte (notation `f` pour indiquer un float littéral)
9. `char symbole = 35;` - correcte (le code ASCII pour `#`)
10. `int mauvaiseValeur = "100";` - incorrect (incompatibilité de type entre `int` et `string`)
## Exercice 6 : Déclaration de Types et Variables
Associez chaque type de données à une description appropriée :
- `int` - 2. Stocke des nombres entiers.
- `float` - 3. Stocke des nombres à virgule flottante (précision simple).
- `char` - 1. Stocke des caractères simples.
- `double` - 4. Stocke des nombres à virgule flottante (précision double).