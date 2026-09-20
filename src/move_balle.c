#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include <stdio.h>
#include "my.h"

int move_balle(sfCircleShape* balle, float *vitesse_x, float *vitesse_y, sfRectangleShape *raquette1, sfRectangleShape *raquette2, int *score)
{
    sfVector2f pos_balle = sfCircleShape_getPosition(balle);
    if (pos_balle.y <=15 || pos_balle.y >=1185)
        *vitesse_y = *vitesse_y * -1;
    if (pos_balle.x <= 15 || pos_balle.x >= 1985)
        return 0;
    
    sfVector2f pos_raquette1 = sfRectangleShape_getPosition(raquette1);
    sfVector2f pos_raquette2 = sfRectangleShape_getPosition(raquette2);
    if (pos_balle.x <= 70 && pos_balle.y > pos_raquette1.y && pos_balle.y < pos_raquette1.y+100){
        *vitesse_x = *vitesse_x * -1;
        *score += 1;
    }

    else if (pos_balle.x >= 1900 && pos_balle.y > pos_raquette2.y-8 && pos_balle.y < pos_raquette2.y+108){
        *vitesse_x = *vitesse_x * -1;
        *score += 1;
        }

    sfCircleShape_move(balle, (sfVector2f){*vitesse_x, *vitesse_y});
    return 1;
}