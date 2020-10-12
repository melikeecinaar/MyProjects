#include <stdio.h>
#include <stdlib.h>



int main( ) {
    
    
    int sayi;
    int hane = 0;
    int toplam = 0;
    
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);


	do{
		toplam += (sayi % 10);
		sayi = sayi / 10;
		hane++;
		
	}
	while(sayi > 0);
	
	printf("girdiginiz sayinin rakamlari toplami : %d\n",toplam);
	printf(	"girdiginiz sayinin hane sayisi: %d ",hane);
	return 0;
}
