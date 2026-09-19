#ifndef MY_H_
    #define MY_H_

sfRectangleShape* creation_raquette1(void);
sfRectangleShape* creation_raquette2(void);
sfCircleShape* creation_balle(void);
void draw(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle, sfText *score_text, int score);
void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2, sfCircleShape *balle);
int move_balle(sfCircleShape* balle, float *vitesse_x, float *vitesse_y, sfRectangleShape *raquette1, sfRectangleShape *raquette2, int *score);
void move_raquette(sfRectangleShape *raquette1, sfRectangleShape *raquette2);


#endif