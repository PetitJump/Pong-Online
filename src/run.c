#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle)
{
    float vitesse_x = 5;
    float vitesse_y = 5;

    while(sfRenderWindow_isOpen(fenetre)){
        sfEvent event;
        while(sfRenderWindow_pollEvent(fenetre, &event)){ // On effectue une boucle pour utiliser tout les evenement en attente
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(fenetre);
        }

        move_raquette(raquette1, raquette2);

        sfCircleShape_move(balle, (sfVector2f){vitesse_x, vitesse_y});

        sfRenderWindow_clear(fenetre, sfBlack);
        sfRenderWindow_drawRectangleShape(fenetre, raquette1, NULL);
        sfRenderWindow_drawRectangleShape(fenetre, raquette2, NULL);
        sfRenderWindow_drawCircleShape(fenetre, balle, NULL);
        sfRenderWindow_display(fenetre);
    }
}