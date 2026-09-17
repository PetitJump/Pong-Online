#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void move_raquette(sfRectangleShape *raquette1, sfRectangleShape *raquette2)
{
        if (sfKeyboard_isKeyPressed(sfKeyZ)){
            sfVector2f pos = sfRectangleShape_getPosition(raquette1);
            if (pos.y >= 0)
                sfRectangleShape_move(raquette1, (sfVector2f){0, -7}); // déplace de 5 pixels vers le haut
        }
        
        if (sfKeyboard_isKeyPressed(sfKeyS)){
            sfVector2f pos = sfRectangleShape_getPosition(raquette1);
            if (pos.y <=1100)
                sfRectangleShape_move(raquette1, (sfVector2f){0, 7}); // déplace de 5 pixels vers le bas
        }

        if (sfKeyboard_isKeyPressed(sfKeyUp)){ 
            sfVector2f pos = sfRectangleShape_getPosition(raquette2);
            if (pos.y >= 0)
                sfRectangleShape_move(raquette2, (sfVector2f){0, -7}); // déplace de 5 pixels vers le haut
        }

        if (sfKeyboard_isKeyPressed(sfKeyDown)){
            sfVector2f pos = sfRectangleShape_getPosition(raquette2);
            if (pos.y <= 1100)
                sfRectangleShape_move(raquette2, (sfVector2f){0, 7}); // déplace de 5 pixels vers le bas
        }
}