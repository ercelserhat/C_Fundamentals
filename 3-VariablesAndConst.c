#include <stdio.h>

int main()
{
	char karakter = 's';
	char *isim = "Serhat";
	int sayi = 23;
	float f = 33.3;
	double d = 44.4;
	
	printf("Karakter = %c\n", karakter);
	printf("Isim = %s\n", isim);
	printf("Integer = %d\n", sayi);
	printf("Float = %f\n", f);
	printf("Double = %lf\n", d);
	
	
	/* CONSTS */
	const float PI = 3.142857;
	const double NOT = 12345.67890;
	const int NEGATIF = -1;
	const *METIN = "Devam etmek icin bir tusa basin...";
	
	#define MAX 100
	#define DATA 0x0378
	#define YARICAP 14.22
	
	printf("PI: %f\n", PI);
	printf("NOT: %lf\n", NOT);
	printf("NEGATIF: %d\n", NEGATIF);
	printf("METIN: %s\n", METIN);
	
	return 0;
	
}