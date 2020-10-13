#include <stdio.h>
#include <stdlib.h>


int main( ) {
	
	int sayi;
	int i;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		
		if(i % 3 == 0 && i % 5 == 0){
			
			printf("%d\n",i);
			
		}

	}
	
	
	
	return 0;
}
