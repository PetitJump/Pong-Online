#include <CSFML/Window.h>
#include <CSFML/Graphics.h>

sfRectangleShape* creation_raquette1(void)
{
    sfRectangleShape *raquette1 = sfRectangleShape_create(); // Crée le rectangle
    sfRectangleShape_setSize(raquette1, (sfVector2f){20, 100});
    sfRectangleShape_setPosition(raquette1, (sfVector2f){50, 250}); 
    sfRectangleShape_setFillColor(raquette1, sfWhite);
    return raquette1;
}

sfRectangleShape* creation_raquette2(void)
{
    sfRectangleShape *raquette2 = sfRectangleShape_create(); // Crée le rectangle
    sfRectangleShape_setSize(raquette2, (sfVector2f){20, 100});
    sfRectangleShape_setPosition(raquette2, (sfVector2f){1930, 250}); 
    sfRectangleShape_setFillColor(raquette2, sfWhite);
    return raquette2;
}