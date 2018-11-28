#include <ansi_c.h>
#include "my_header.h"
#include "bras.h"

 int main(void){
	unsigned char i=0, max=0, nb;
	
	for(i=0; i<100; i++){
		tirer();
		nb=bon_nb();
		if(max<nb){
			max=nb;
		}
		
	}
	
	return 0;
}
