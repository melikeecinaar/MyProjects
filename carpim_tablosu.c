#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	int i,j;
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		
		printf("----------------\n");
		for(j=1; j<=10; j++){
			
			printf("%d * %d = %d\n",i,j,(i*j));
		
		}
	}
	
	
	
	
	return 0;
}
