#include <stdio.h>
#include <stdlib.h>



int main( ) {
	
	double sayi;
	double toplam = 0.0;
	
	do{
		printf("bir sayi giriniz: ");
		scanf("%lf",&sayi);
		
		toplam += sayi;
		
	}
	while(sayi != 0.0);
	printf("girdiginiz sayilarin toplami: %.2f",toplam);
	return 0;
}
