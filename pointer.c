#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
	
	int a = 5, *ap;
	float b = 3.4, *bp;
	double c = 3.456, *cp;
	char d = 'a', *dp;
	
	int sayilar[5] = {1,2,3,4,5};
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	arrayp = &sayilar[1];
	
	printf("a'nin adresi: %u\n",a);
	printf("b'nin adresi: %u\n",b);
	printf("c'nin adresi: %u\n",c);
	printf("d'nin adresi: %u\n",d);
	printf("array'in adresi: %u\n",sayilar);

	printf("--------------------------------\n");
	
	printf("a'nin adresindeki degeri:%d\n",*ap);
	printf("b'nin adresindeki degeri:%f\n",*bp);
	printf("c'nin adresindeki degeri:%lf\n",*cp);
	printf("d'nin adresindeki degeri:%c\n",*dp);
	printf("array'in adresindeki degeri:%d",*arrayp);
	return 0;
}
