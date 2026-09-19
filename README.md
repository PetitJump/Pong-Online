# Pong Online

Ce projet a été codé entièrement à la main, sans aucun outil d'intelligence artificielle.
Ce README a en revanche été rédigé avec l'aide d'une intelligence artificielle.

## Le projet en quelques mots

Pong Online est une reprise du tout premier jeu vidéo d'arcade, le Pong de 1972, écrite en langage C. Deux raquettes se font face de chaque côté de l'écran, une bleue à gauche et une rouge à droite, et se renvoient une balle qui rebondit contre le haut et le bas de la fenêtre. Le premier joueur déplace sa raquette avec les touches Z et S, le second avec les flèches du clavier, les deux sur le même ordinateur. Chaque fois qu'une raquette parvient à renvoyer la balle, le compteur affiché en haut de l'écran augmente d'un point : il mesure donc la longueur de l'échange, pas le score individuel de chaque joueur. La partie s'arrête dès que la balle échappe à une raquette et sort par un côté.

Le jeu s'appuie sur CSFML, la version en langage C de la bibliothèque SFML, qui se charge d'ouvrir la fenêtre, de dessiner les formes et de lire les touches enfoncées. Tout le reste est écrit à la main : le calcul de la trajectoire de la balle, l'inversion de sa direction quand elle touche un bord ou une raquette, les limites qui empêchent les raquettes de sortir de l'écran, et l'affichage du score avec une police personnalisée. Le programme tourne à soixante images par seconde dans une fenêtre de 2000 par 1200 pixels.

Le code est réparti en six fichiers dans le dossier `src`, chacun avec une responsabilité claire : la création des éléments, la boucle de jeu, le déplacement des raquettes, celui de la balle, et l'affichage. Les signatures des fonctions sont regroupées dans un fichier d'en tête, et la compilation passe par un Makefile.

## Comment le lancer

Il faut un compilateur C et la bibliothèque CSFML installée sur la machine.

Sous Debian ou Ubuntu, CSFML s'installe avec :

```bash
sudo apt install libcsfml-dev
```

1. Récupérer le dépôt :

```bash
git clone https://github.com/PetitJump/Pong-Online.git
```

2. Compiler le projet :

```bash
cd Pong-Online && make
```

3. Lancer le jeu :

```bash
./main
```

Le jeu doit être lancé depuis la racine du dépôt, car la police d'écriture est chargée depuis le dossier `assets`.

Le Makefile propose aussi `make clean` pour supprimer les fichiers intermédiaires, `make fclean` pour tout nettoyer y compris l'exécutable, et `make re` pour recompiler entièrement.

## Commandes

Joueur de gauche : touche Z pour monter, touche S pour descendre.
Joueur de droite : flèche du haut pour monter, flèche du bas pour descendre.

## Mises à jour à venir

Le projet est encore en construction. Voici ce qui est prévu :

• Un menu de démarrage, pour lancer une partie et choisir son mode de jeu au lieu de tomber directement dans le match
• Une intelligence de jeu capable de contrôler la raquette adverse, afin de pouvoir jouer seul contre l'ordinateur
• Un mode en ligne permettant d'affronter un autre joueur à distance, accompagné d'un site web pour rejoindre les parties
