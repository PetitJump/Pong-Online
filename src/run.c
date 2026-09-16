#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2)
{
    while(sfRenderWindow_isOpen(fenetre)){
        sfEvent event;
        while(sfRenderWindow_pollEvent(fenetre, &event)){ // On effectue une boucle pour utiliser tout les evenement en attente
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(fenetre);
        }

        move_raquette(raquette1, raquette2);
        
        sfRenderWindow_clear(fenetre, sfBlack);
        sfRenderWindow_drawRectangleShape(fenetre, raquette1, NULL);
        sfRenderWindow_drawRectangleShape(fenetre, raquette2, NULL);
        sfRenderWindow_display(fenetre);
    }
}