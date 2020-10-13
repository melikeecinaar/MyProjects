#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	
	int sayi1,sayi2;
	int i,j,k;

	
	for(i=1; i<9; i++){
		
		for(j=0; j<9; j++){
			
		    for(k=0; k<9; k++){
		    	
		    	sayi1 = 100*i + 10*j + 1*k;
		    	sayi2 = i*i*i + j*j*j + k*k*k;
		    	
		    	if(sayi1 == sayi2){
		    		
		    		
		    	printf("%d\n",sayi1);
				}
			}
		}
	}
	
	
	
	return 0;
}
