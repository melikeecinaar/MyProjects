#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
	int a = 0;
	int toplam = 0;
	
	
	printf("....HOSGELDINIZ....\n");
	printf("gireceginiz sayi;\n");
	printf("cift ise ---> girilen sayilar toplanacaktir.\n");
	printf("tek ise ---> girdiginiz sayiya kadar olan sayilarin toplami verilecektir.\n");
	

	while(a % 2 == 0){
		
		toplam += a;
        
		printf("lutfen bir sayi giriniz:");
	    scanf("%d",&a);
	}
	printf("dongu sona erdi...");
	printf("toplam = %d",toplam);
	
	
	
	
	
	
	
	return 0;
}
