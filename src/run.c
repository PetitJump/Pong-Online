#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle)
{
    float vitesse_x = 5.0f;
    float vitesse_y = 5.0f;
    while(sfRenderWindow_isOpen(fenetre)){
        sfEvent event;
        while(sfRenderWindow_pollEvent(fenetre, &event)){ // On effectue une boucle pour utiliser tout les evenement en attente
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(fenetre);
        }
        move_raquette(raquette1, raquette2);
        move_balle(balle, &vitesse_x, &vitesse_y);

        draw(fenetre, raquette1, raquette2, balle);
    }
}   