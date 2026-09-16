#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

int main(void)
{
    sfVideoMode taille = {2000, 1200, 32}; // Largeur hauteur couleurs
    sfRenderWindow *fenetre = sfRenderWindow_create(taille, "Pong", sfDefaultStyle, sfWindowed, NULL);
    sfRenderWindow_setFramerateLimit(fenetre, 60);

    sfRectangleShape *raquette1 = creation_raquette1();
    sfRectangleShape *raquette2 = creation_raquette2();
    sfCircleShape *balle = creation_balle();
    
    run(fenetre, raquette1, raquette2, balle);
    
    return 0;
}   