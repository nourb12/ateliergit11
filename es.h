#ifndef ES_H_INCLUDED
#define ES_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>


typedef struct 
{
    SDL_Surface *ennemi_annime[3][10];
    int num;
    SDL_Rect posEnnemi;
    SDL_Rect min , max ;
      
}Ennemi;



void initEnnemi(Ennemi *E);

void animerEnnemi (Ennemi *E);
void afficherEnnemi(Ennemi E, SDL_Surface *screen,int *a);

void deplacer (Ennemi *E,int rapidite);
int collisionBB(SDL_Rect pos1 , SDL_Rect pos2);
void deplacerIA(Ennemi *E , SDL_Rect posPerso);


#endif // NEW_H_INCLUDED

