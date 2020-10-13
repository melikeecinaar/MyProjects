#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	int i,j;
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		
		for(j=0; j<i; j++){
			
			printf("%d",i);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
