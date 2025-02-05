#include <stdio.h>
#include <stdlib.h>

void afficher_menu ();

int recup_valeur (int x); 

int main ()
{        
        int nombre; //le nombre demandé à l'utilisateur

	afficher_menu();

	recup_valeur(nombre);


        return 0;
}

void afficher_menu ()
{  
      printf("Si vous voulez afficher l'adresse IP , veuillez entrer 1.\n");
      printf("Si vous voulez afficher la table de routage ,veuillez entrer 2.\n");
      printf("Si vous voulez vérifier la connectivité avec Google , veuillez entrer 3 .\n");
      printf("Si vous souhaitez quitter ,veuillez entrer 0 .\n");      
	      
}


int recup_valeur (int x)
{
      printf("Veuillez entrer le nombre souhaité:");
      scanf("%i",&x);

}	
