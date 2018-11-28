#include "my_header.h"
#include "TP_lib_suite.h"

unsigned char i, i2, nb;
short tirage[6]={24,6,5,19,31,48};
short bon[6];
unsigned char bon_nb(){
    nb=0;
	
	for(i=0; i<6;i++){
		for(i2=0; i2<6;i2++){
			if(tirage[i]==bon[i2]){
				nb++;
			}
		}
	}
	
    return nb;
}

 int tirer(){
	initialiserTirage();
	
	for(i=0; i<6; i++){
		bon[i]=tirerNumero();
	}
	return 0;
}