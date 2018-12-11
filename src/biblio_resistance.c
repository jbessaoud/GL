#include <ansi_c.h>
#include "math.h"

long saisir_anneau(long val_min_anno, long val_max_anno, long numero_anneau){
	int val=0;
	
	printf("Entrer la valeur du %d anneau comprise entre %d et %d: ", numero_anneau, val_min_anno, val_max_anno);
	scanf("%d", &val);
	
	while(val_min_anno>=val || val>=val_max_anno){
		printf("Entrer la valeur du %d, anneau comprise entre %d, et %d: ", numero_anneau, val_min_anno, val_max_anno);
		scanf("%d", &val);
	}
	
	return val;
}



long calculer_val_resistance(long val_anno1, long val_anno2, long val_anno3){
	int R=0;
	
	R=(10*val_anno1+val_anno2)*pow(10,val_anno3);
	
	return R;
}


void afficher_resistance(long valeur_resistance){
	printf("La valeur de la resistance est de: %d",valeur_resistance);
}
