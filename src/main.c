#include "my_header.h"
#include <stdlib.h>

#define SEUILH 200
#define SEUILB 100

//question 1
int quest1(){
	int i;
	unsigned char bin[10]={58,43,45,10,24,7,3,4,54,4};
	
	for(i=0; i<10;i++){
		if(bin[i]>24){
			bin[i]=1;
		}
		else{
			bin[i]=0;
		}
	}
	
    return 0;
}

//question 2
int quest2(){
	int sat[10]={58,213,216,10,150,6,3,2,500,4}, i2;
	
	for(i2=0; i2<10;i2++){
		if(sat[i2]>SEUILH){
			sat[i2]=SEUILH;
		}
		else if(sat[i2]<SEUILB){
			sat[i2]=SEUILB;
		}
	}
	
	return 0;
}

//question 3
int quest3(){
	int dist[10]={58,213,216,10,150,6,3,2,500,4}, i3;
	
	
	}
	
	return 0;
}


int main(void){
	quest1();
	quest2();
}



