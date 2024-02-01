#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *dg; /*Dosya göstericisi*/
	char Ad[10];
	int Not, No, eb, ek, n, top;
	float ort;
	
	if((dg=fopen("ogrenci.txt", "r")) == NULL){
		puts("Dosya acilamadi!\n");
		exit(1);
	}
	
	/*başlangıç değerleri ata*/
	ek = 1000; /*çok büyük*/
	eb = -1000; /*çok küçük*/
	top = 0; /*notların toplamı*/
	n = 0; /*notu 0'dan farklı öğrencilerin toplamı*/
	
	while(!feof(dg)){ /*Dosyanın sonuna kadar*/
		fscanf(dg, "%d %s %d", &No, Ad, &Not); /*Verileri oku*/
		
		if(Not>eb) eb = Not; /* en büyük ve en küçük bulunuyor.*/
		if(Not<ek) ek = Not;
		if(Not) n++; /*Not 0'dan farklı mı?*/
		top += Not; /*Notların toplamı*/
	}
	
	fclose(dg); /*Dosyayı kapat*/
	
	ort = (float) top / n; /*Ortalama (0'lar hariç)*/
	
	printf("En yuksek not: %2d\n", eb);
	printf("En dsuk not: %2d\n", ek);
	printf("Ortalama: %2d\n", ort);
	
	return 0;
}