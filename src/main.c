#include <ansi_c.h>
#include "my_header.h"
#include "bras.h"

 int main(void){
	char phrase [100]= "Je m'appelle prenom nom et je suis ne en annee";
	char nom [100];
	char prenom [100];
	unsigned long int annee=2000;
	
	printf("Veiller taper votre nom: ");
	scanf("%s", nom);
	printf("Veiller taper votre prenom: ");
	scanf("%s", prenom);
	printf("Veiller taper votre annee de naissance: ");
	scanf("%lu", &annee);
	sprintf(phrase, "Je m'appelle %s %s et je suis ne en %lu", prenom, nom, annee);
	
	printf ("%s\0", phrase);
	
	return 0;
}
