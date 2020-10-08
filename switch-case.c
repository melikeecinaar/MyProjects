#include <stdio.h>
#include <stdlib.h>


int main( ) {
	
	int islem;
	int tutar; 
	int bakiye = 1000;
	char onay;
	
	printf("islemler:\n----------------------\n1-para cekme\n2-para yatirma\n3-havale yapma\n4-bakiye sorgulama\n5-kart iade\n----------------------\n");
	
	printf("lutfen girmek istediginiz islemin numarasini giriniz:");
	scanf("%d",&islem);
	
	switch(islem)
	{
		
		case 1 :
			printf("hesap bakiyeniz= 1000 TL\n");
			printf("lutfen cekmek istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			if (bakiye < tutar)
			{
				printf("hesabinizda yeterli bakiye bulunmamaktadir..\n");
			}
		    if (bakiye >= tutar)
			{
				bakiye -= tutar;
				printf("(onaylamak icin--> 'e'\ncikis yapmak icin--> 'h' tuslayiniz..)\n onayliyor musunuz:  ");
			    scanf("%s",&onay);
			    
				switch(onay)
				{
				    
				    case 'e' :
				    	
						printf("lutfen bekleyiniz...\n");
				        printf("kalan bakiye = %d",bakiye);
				        printf("\nlutfen parayi ve kartinizi aliniz...iyi gunler...\n");
						break;
				        
				    case 'h' :
				   		printf("lutfen kartinizi aliniz...");
				   		break;
				   		
				   	default :
				   		printf("hatali islem girdiniz.tekrar deneyiniz...");
				   	    break;
		    	}
	    	}
		        
		    break;
		
		
		
		case 2 :
			printf("hesap bakiyeniz = 1000\n");
			printf("lutfen yatirmak istediginiz tutari giriniz: ");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("\nlutfen parayi alttaki bolume duz bir sekilde yerlestiriniz...");
			printf("\nlutfen bekleyiniz...");
			
			printf("\nhesap bakineyiz:%d",bakiye);
			printf("\nlutfen kartinizi aliniz...iyi gunler... ");
			break;
			
	
		case 3 :
			printf("hesap bakiyeniz= 1000 TL\n");
			printf("lutfen havale etmek istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			if (bakiye < tutar)
			{
				printf("hesabinizda yeterli bakiye bulunmamaktadir..\n");
			}
		    if (bakiye >= tutar)
			{
				bakiye -= tutar;
				printf("(onaylamak icin--> 'e'\ncikis yapmak icin--> 'h' tuslayiniz..)\n onayliyor musunuz:  ");
			    scanf("%s",&onay);
			    
				switch(onay)
				{
				    
				    case 'e' :
				    	
						printf("lutfen bekleyiniz...\nislem basarili.\n");
				        printf("kalan bakiye = %d",bakiye);
				        printf("\nlutfen parayi ve kartinizi aliniz...iyi gunler...\n");
						break;
				        
				    case 'h' :
				   		printf("lutfen kartinizi aliniz...");
				   		break;
				   		
				   	default :
				   		printf("hatali islem girdiniz.tekrar deneyiniz...");
				   	    break;
		    	}
	    	}
		        
		    break;
			
		case 4 :
			printf("hesap bakiyeniz: %d",bakiye);
			break;
		
		case 5 :
			printf("lutfen kartinizi saðdaki bolumden aliniz...iyi gunler...");
		    break;
	    
	    default :
	    	printf("hatali islem girdiniz.lutfen tekrar deneyiniz...");
	    	break;
    }
			

	return 0;
}
