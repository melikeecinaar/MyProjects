#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	int i;
	int sayi;
	int faktor;
	
	faktor = 1;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	
	for(i = 1; i<=sayi; i++){
		
		faktor *= i;	
	}
	
	
	printf("faktoriyel sonucu: %d",faktor);
	return 0;
}
