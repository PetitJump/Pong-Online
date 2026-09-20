#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int how_many_int(int nb)
{
    int rendu = 0;
    while(1){
        rendu += 1;
        if(nb / 10 == 0)
            break;
        nb = nb / 10;
    }
    return rendu;
}

char* my_itoa(int nb)
{
    char *rendu = malloc(BUFSIZ * sizeof(char));
    int nb_chiffres = how_many_int(nb);
    for(int i=(nb_chiffres-1); i>=0; i--){
        rendu[i] = nb % 10 + '0';
        nb = nb / 10;
    }
    rendu[nb_chiffres] = '\0';
    return rendu;
}

void draw(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle, sfText *score_text, int score)
{   
    sfText_setString(score_text, my_itoa(score));

    sfRenderWindow_clear(fenetre, sfBlack);
    sfRenderWindow_drawRectangleShape(fenetre, raquette1, NULL);
    sfRenderWindow_drawRectangleShape(fenetre, raquette2, NULL);
    sfRenderWindow_drawCircleShape(fenetre, balle, NULL);
    sfRenderWindow_drawText(fenetre, score_text, NULL);
    sfRenderWindow_display(fenetre);
}
