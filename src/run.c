#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include <stdio.h>
#include "my.h"

void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle)
{
    float vitesse_x = 5.0f;
    float vitesse_y = 5.0f;
    int score = 0;

    // Création du texte
    sfFont *police = sfFont_createFromFile("assets/Jersey25-Regular.ttf");
    sfText *score_text = sfText_create(police);
    sfText_setCharacterSize(score_text, 40);
    sfText_setFillColor(score_text, sfGreen);
    sfText_setPosition(score_text, (sfVector2f){950, 20});
    /// Création du texte


    while(sfRenderWindow_isOpen(fenetre)){
        sfEvent event;
        while(sfRenderWindow_pollEvent(fenetre, &event)){ // On effectue une boucle pour utiliser tout les evenement en attente
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(fenetre);
        }
        move_raquette(raquette1, raquette2);
        if (move_balle(balle, &vitesse_x, &vitesse_y, raquette1, raquette2, &score) == 0)
            break; // Fin du jeu
        
        draw(fenetre, raquette1, raquette2, balle, score_text, score);
    }
}   