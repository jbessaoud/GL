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
	int dist[10]={58,213,216,10,150,6,3,2,500,4}, i3, nbmax, nbmin;
	
	for(i3=1; i3<10;i3++){
		if(dist[i3]>dist[i3-1]){
			nbmax=dist[i3];
			nbmin=dist[i3-1];
		}
		else{
			nbmin=dist[i3];
			nbmax=dist[i3-1];
		}
		
		dist[i3]=nbmax-nbmin;
	}
	
	return 0;
}

//question 4
int quest4(){
	int a[5]={1,5,9,8,11}, b[5]={0,1,2,3,4}, i4;

	for(i4=0; i4<5; i4++){
		b[i4]=a[4-i4];
	}
	
	return 0;
}

//question 5
int quest5(){
	int miroir[10]={1,2,3,4,5}, i5;

	for(i5=0;i5<5;i5++){
		miroir[i5+5]=miroir[4-i5];
	}
	
	return 0;
}