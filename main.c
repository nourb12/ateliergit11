#include "entite_secondaire.h"

void initEnnemi(Ennemi *E)
{
     
     int i ; 
	    
	    // j'ai initialisé le premier obstable avec plusieurs images pour l'annimer
	    // ces images sont des images de notre personnage // c'est just pour le test MME 
	    
	    for ( i=0 ; i < 15 ; i++ )
	    	{
	    		E->ennemi_annime[0][i]=IMG_Load("images/baton2.png");
	    	}

	     for ( i=0 ; i < 15 ; i++ )
	    	{
	    		E->ennemi_annime[1][i]=IMG_Load("images/ceinture.png");
	    	}
	 for ( i=0 ; i < 15 ; i++ )
	    	{
	    		E->ennemi_annime[2][i]=IMG_Load("images/chleka.png");
	    	}
	    	
	    	// dans ce cas l'entitée n'est pas animée donc je vais just charger une seule image 
	    
	    E->num = 0 ;
	    E->posEnnemi.x = 1000;
	    E->posEnnemi.y = 350;   
    		E->min.x = 0; 
    		E->max.x = 2500;
		E->max.y = E->min.y = 200;

             E->test_min_max = 0 ;
}



