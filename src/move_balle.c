#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void move_balle(sfCircleShape* balle)
{
    float vitesse_x = 5;
    float vitesse_y = 5;
    int largeur = 2000;
    int hauteur = 1200;
    sfVector2f pos = sfCircleShape_getPosition(balle);
    
    

    sfCircleShape_move(balle, (sfVector2f){vitesse_x, vitesse_y});
}