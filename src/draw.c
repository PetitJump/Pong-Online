#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include "my.h"

void draw(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle)
{
    sfRenderWindow_clear(fenetre, sfBlack);
    sfRenderWindow_drawRectangleShape(fenetre, raquette1, NULL);
    sfRenderWindow_drawRectangleShape(fenetre, raquette2, NULL);
    sfRenderWindow_drawCircleShape(fenetre, balle, NULL);
    sfRenderWindow_display(fenetre);
}
