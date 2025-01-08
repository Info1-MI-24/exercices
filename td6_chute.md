### Énoncé de l'exercice :
Un objet tombe en chute libre, mais la présence d'un frottement de l'air proportionnel à sa vitesse doit être prise en compte.

1. Vous devez écrire un programme en C pour calculer le temps de chute d'un objet d'une hauteur donnée.
2. La force de frottement est modélisée comme étant proportionnelle à la vitesse de l'objet : $`F_f = -k \cdot v, où ( k )`$ est une constante de frottement.
3. La formule de la vitesse instantanée est donnée par :

   $$v(t) = \frac{g}{k}(1 - e^{-k \cdot t})$$

   où :
   - \( g \) est l'accélération due à la gravité (9.81 m/s²).
   - \( k \) est la constante de frottement (valeur donnée par l'utilisateur).
   - \( t \) est le temps.

6. Le programme doit calculer le temps approximatif pour que l'objet atteigne une position proche du sol.
7. Utilisez une méthode itérative (par ex. boucle `while`) pour simuler la chute.

### Consignes :
- Demandez à l'utilisateur de saisir :
  - La hauteur initiale de l'objet (en mètres).
  - La constante \( k \) de frottement.
- Utilisez des petits pas de temps (\( \Delta t \)) pour simuler la chute.
- Arrêtez la simulation lorsque l'objet atteint le sol ou une vitesse terminale.

### Exemple de sortie attendue :
```
Hauteur initiale (m) : 100
Constante de frottement k : 0.2
L'objet a touché le sol après 12.35 secondes.
```

### Code exemple :

```c
#include <stdio.h>
#include <math.h>

// Mettre à 1 pour demander à l'utilisateur, 0 pour utiliser des valeurs par défaut
#define SAISIE 0

int main() {
    const double g = 9.81; // Accélération due à la gravité (m/s^2)
    double hauteur, k, vitesse = 0.0, temps = 0.0;

#if SAISIE
    // Saisie de l'utilisateur
    printf("Entrez la hauteur initiale (m) : ");
    scanf("%lf", &hauteur);
    printf("Entrez la constante de frottement k : ");
    scanf("%lf", &k);
#else
    // Valeurs par défaut
    hauteur = 100.0; // Hauteur en mètres
    k = 0.2; // Constante de frottement
    printf("Utilisation des valeurs par défaut :\n");
    printf("Hauteur initiale : %.2f m\n", hauteur);
    printf("Constante de frottement k : %.2f\n", k);
#endif

    // Simulation de la chute


    // Résultat
    printf("L'objet a touché le sol après %.2f secondes.\n", temps);

    return 0;
}
