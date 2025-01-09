### Énoncé de l'exercice :
Un boulet de canon est tiré avec une vitesse initiale sous un angle par rapport à l'horizontale.
Vous devez prendre en compte la résistance de l'air proportionnelle à sa vitesse pour modéliser sa trajectoire.

1. Vous devez écrire un programme en C pour calculer la trajectoire d'un boulet de canon.
2. La force de frottement est modélisée comme étant proportionnelle à la vitesse de l'objet : $`F_f = -k \cdot v`$, où ( k ) est une constante de frottement.
3. Calculer les accélérations en \( x \) et \( y \).
4. Calculer les vitesses en \( x \) et \( y \) à chaque instant \( t \).
5. La position en \( x \) et \( y \) est obtenue par intégration numérique.

### Consignes :
- Simulez la trajectoire du boulet en utilisant des petits pas de temps $(\( \Delta t \))$.
- Arrêtez la simulation lorsque le boulet touche le sol $( y \leq 0 )$.
- Affichez la distance parcourue en $\( x \)$ et la durée totale du vol.

### Exemple de sortie attendue :
```
Vitesse initiale (m/s) : 50
Angle de tir (degrés) : 45
Constante de frottement k : 0.1
Le boulet a touché le sol après 8.47 secondes.
Distance horizontale parcourue : 237.55 mètres.
```

### Code exemple :
```c
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {

    const double g = 9.81; // Accélération due à la gravité (m/s^2)    
    double vx, vy, x = 0.0, y = 0.0, t = 0.0, dt = 0.01;

    double v0 = 50;
    double angle = 45;
    double k = 0.1;

    angle = angle * PI / 180.0;

    // Caclul des vitesses initiales

    printf("\nSimulation de la trajectoire...\n");
    while (y >= 0) {

    }

    // Résultats
    printf("Le boulet a touché le sol après %.2f secondes.\n", t);
    printf("Distance horizontale parcourue : %.2f mètres.\n", x);
    return 0;
}
```
