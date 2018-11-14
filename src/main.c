#include "my_header.h"
#include "TP_lib.h"
#include <stdio.h>

int main(void){
	short int points=0 , i=0;

	printf("C'est votre tour.");
	i= LancerDe();

	if(i==1){
		printf("Fin de votre tour.");
	}

	else{
	    while(i!=1){
            if(i==2 || i==4 || i==6){
                points=points+i;
            }
            
            else if(i==3){
                points=points*3;
            }
            
            else if(i==5 && points>=2){
                points=points-2;
            }

            else if(i==5 && points<2){
                points=0;
            }
            i=LancerDe();
	    }

	printf("Fin de votre tour. Votre score est de %d",points);
	return 0;
	}
}