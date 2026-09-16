#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void move_raquette(sfRectangleShape *raquette1, sfRectangleShape *raquette2)
{
    if(sfKeyboard_isKeyPressed(sfKeyZ))
            sfRectangleShape_move(raquette1, (sfVector2f){0, -7}); // déplace de 5 pixels vers le haut
        
        if(sfKeyboard_isKeyPressed(sfKeyS))
            sfRectangleShape_move(raquette1, (sfVector2f){0, 7}); // déplace de 5 pixels vers le bas

        if(sfKeyboard_isKeyPressed(sfKeyUp))
            sfRectangleShape_move(raquette2, (sfVector2f){0, -7}); // déplace de 5 pixels vers le haut
        
        if(sfKeyboard_isKeyPressed(sfKeyDown))
            sfRectangleShape_move(raquette2, (sfVector2f){0, 7}); // déplace de 5 pixels vers le bas
}