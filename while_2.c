#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	int faktoriyel = 1;
	int sayi;
	int n;
	
	printf("-----faktoriyel alma-----\n");
	printf("faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	
	while(sayi != 0){
		
		printf("%d\n",sayi);
		faktoriyel = sayi * faktoriyel;
		sayi--;
	}
	
	printf("faktoriyel sonucu = %d",faktoriyel);
	
	
	return 0;
}
