#include "my_header.h"
#include <stdlib.h>

int main(void){

    int s1=0 , i1=3, n=30, n2=3, s3=0, val3=0, i3=1, s4=0, n4=1, i4=1;
	long unsigned int s2=0;

//1
	while(i1<n){
		s1 = s1+i1;
		i1 = i1+3;
	}

//2
	while(n2<9876){
		s2= s2+n2;
		n2= n2+3;
	}

//3
	while(i3<=12){
		val3= rand() %10 +1;
		s3= s3+val3;
		i3++;
	}

//4
	while(i4<=20){
		if(n4%3==0 || n4%7==0){
			s4= s4+n4;
			i4++;
		}
	}

	return 0;
    
}