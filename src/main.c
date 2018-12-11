#include <ansi_c.h>
#include "math.h"
#include "biblio_resistance.h"

int main(){
	long int anneau1, anneau2, anneau3, val_res;
	
	anneau1=saisir_anneau(0,9,1);
	anneau2=saisir_anneau(0,9,2);
	anneau3=saisir_anneau(0,6,3);
	
	val_res=calculer_val_resistance(anneau1,anneau2,anneau3);
	
	afficher_resistance(val_res);
	
	return 0;
}
