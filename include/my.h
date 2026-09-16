#ifndef MY_H_
    #define MY_H_

sfRectangleShape* creation_raquette1(void);
sfRectangleShape* creation_raquette2(void);
void run(sfRenderWindow *fenetre, sfRectangleShape *raquette1, sfRectangleShape *raquette2);
void move_raquette(sfRectangleShape *raquette1, sfRectangleShape *raquette2);

#endif