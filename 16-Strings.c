#include <stdio.h>

int main(){
	
	/*TANIMLAMA SEKILLERI*/
	char s1[5] = {'I', 'z', 'm', 'i', 'r', '\0'};
	char s2[5] = "Izmir";
	char s3[] = "Ankara";
	char *s4 = "İstanbul";
	char *s5;
	s5 = "Bursa";
	char isim[5][8] = {"Semra", "Mustafa", "Ceyhun", "Asli", "Leyla"};
	char isim2[][8] = {"Semra", "Mustafa", "Ceyhun", "Asli", "Leyla"};
	char *isim3[5] = {"Semra", "Mustafa", "Ceyhun", "Asli", "Leyla"};
	
	
	char dizi[7] = {'S', 'e', 'r', 'h', 'a', 't', '\0'};
	/*Her bir karakteri ayrı ayrı alt alta yaz*/
	printf("Dizi elemanlari:\n");
	for(int i=0; i<7; i++)
	{
		printf("dizi[%d] icerigi: %c\n", i, dizi[i]);
	}
	printf("\n");
	
	/*1. yöntem: Her elemanı yan yana yaz*/
	printf("Butun dizi (1. yontem): ");
	for(int i=0; i<7; i++)
	{
		printf("%c", dizi[i]);
	}
	
	/*2. yöntem: Butun diziyi yaz*/
	printf("\nButun dizi (2. yontem): ");
	printf("%s\n", dizi);
	printf("\n");
	
	
	
	/*Bir string icindeki 'm' karakter sayısını hesapla */
	char str[20];
	int sayac = 0;
	printf("Bir string girin: ");
	gets(str);
	
	for(int i=0; str[i] != '\0'; i++)
		if(str[i] == 'm') sayac++;
	printf("'m' karakteri sayisi = %d\n", sayac);
	
	
	
	/*Elemanları katar olan karakter dizisini yazdırma*/
	char *gun[7] = {"Pazartesi", "Sali", "Carsamba", "Persembe",
					"Cuma", "Cumartesi", "Pazar"};
	for(int i=0; i<7; i++)
		printf("%d- %s\n", i+1, gun[i]);
	
	return 0;
}