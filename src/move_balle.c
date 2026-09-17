#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void move_balle(sfCircleShape* balle, float *vitesse_x, float *vitesse_y)
{
    int largeur = 2000;
    int hauteur = 1200;
    sfVector2f pos = sfCircleShape_getPosition(balle);
    if (pos.y <=15 || pos.y >=1185)
        *vitesse_y = *vitesse_y * -1;
    if (pos.x <= 15 || pos.x >= 1985)
        *vitesse_x = *vitesse_x * -1;
    

    sfCircleShape_move(balle, (sfVector2f){*vitesse_x, *vitesse_y});
}