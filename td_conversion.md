# Laboratoire Informatique en C - Conversion de Températures

**But du laboratoire** : Dans ce laboratoire, vous allez développer un programme en C qui convertit des températures de degrés Celsius à Fahrenheit, 
ou de Fahrenheit à Celsius, en utilisant des arguments passés en ligne de commande. 
Ce programme doit fonctionner en ligne de commande avec des arguments et doit effectuer les conversions dans des fonctions spécifiques.

## Description du Programme

Le programme doit recevoir, en argument de ligne de commande, une commande de conversion suivie d'une série de valeurs numériques représentant des températures. 
Le programme doit ensuite effectuer la conversion spécifiée pour chaque valeur et afficher le résultat.

### Spécifications

1. **Commande** : La commande a la structure suivante : `conv x nombre1 nombre2 ...`
  - `x` indique le type de conversion souhaitée :
  - `f` pour convertir des valeurs de Celsius à Fahrenheit.
  - `c` pour convertir des valeurs de Fahrenheit à Celsius.
- Les `nombre1, nombre2, ...` sont une série de valeurs (de type `double` ou `int`) à convertir.

2. **Exemple d'utilisation** : Pour convertir des températures de Celsius à Fahrenheit :

```bash
./programme conv f 12 34 56 -5 45

Conversion de Celsius à Fahrenheit :
12°C = 53.6°F
34°C = 93.2°F
56°C = 132.8°F
-5°C = 23°F
45°C = 113°F
```

Et pour convertir des températures de Fahrenheit à Celsius :
```bash
./programme conv c 32 100 212

Conversion de Fahrenheit à Celsius :
32°F = 0°C
100°F = 37.8°C
212°F = 100°C
```

## Conversions

Pour réaliser les conversions, utilisez les équations suivantes :

- De Celsius à Fahrenheit : F = C * 9/5 + 32
- De Fahrenheit à Celsius : C = (F - 32) * 5/9
