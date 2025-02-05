#include <stdio.h>
#include <stdlib.h>

void afficher_menu ();


int main ()
{        
        int nombre; //le nombre demandé à l'utilisateur

	afficher_menu();
        
	do 
	{	

	           printf("Veuillez entrer le nombre souhaité:");
		   scanf("%i",&nombre);


	           if (nombre>0 && nombre<4)
	           {
                        if (nombre==1)
			{	
			        system("ip a");
			}

	                else if (nombre==2)
		        {
				system("ip route");
			}
	                
	                else if (nombre==3)
		        {	
			        system("ping -c 4 8.8.8.8");
			}	
          		
		   }   
			
                   
	           else if (nombre==0) 
	           {	
		        break;
	           }	

		   else 
                   {
                        printf("Erreur,veuillez entrer une nombre valide.\n");
                   }			

        }
	while (1);
	
        return 0;
}

void afficher_menu ()
{  
      printf("Si vous voulez afficher l'adresse IP , veuillez entrer 1.\n");
      printf("Si vous voulez afficher la table de routage ,veuillez entrer 2.\n");
      printf("Si vous voulez vérifier la connectivité avec Google , veuillez entrer 3 .\n");
      printf("Si vous souhaitez quitter ,veuillez entrer 0 .\n");      
	      
}



	      
