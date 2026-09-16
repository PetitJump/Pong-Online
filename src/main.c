#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

int main(void)
{
    sfVideoMode taille = {2000, 1200, 32}; // Largeur hauteur couleurs
    sfRenderWindow *fenetre = sfRenderWindow_create(taille, "Pong", sfDefaultStyle, sfWindowed, NULL);
    
    sfRectangleShape *raquette1 = creation_raquette1();
    sfRectangleShape *raquette2 = creation_raquette2();

    while(sfRenderWindow_isOpen(fenetre)){
        sfEvent event;
        while(sfRenderWindow_pollEvent(fenetre, &event)){ // On effectue une boucle pour utiliser tout les evenement en attente
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(fenetre);
        }
        sfRenderWindow_clear(fenetre, sfBlack);
        sfRenderWindow_drawRectangleShape(fenetre, raquette1, NULL);
        sfRenderWindow_drawRectangleShape(fenetre, raquette2, NULL);
        sfRenderWindow_display(fenetre);
    }
    return 0;
}   