#include <stdio.h>

int topla(int, int); /* Toplama fonksiyonunun prototipi */

/* Çıkarma fonksiyonunun tanımlanması */
int cikar(int x, int y){
	return (x-y);
}

char harf(int not)
{
	if(not>=0 && not<50) return 'F';
	if(not>=50 && not<70) return 'D';
	if(not>=70 && not<80) return 'C';
	if(not>=80 && not<90) return 'B';
	if(not>=90) return 'A';
}

void kutu_ciz(int satir, int sutun)
{
	for(int i = 0; i < satir; i++)
	{
		for(int j = 0; j < sutun; j++)
		{
			printf("X");
		}
		printf("\n");
	}
}

void hata_mesaji()
{
	printf("Hata olustu!\n");
}

int main()
{
	int toplam, fark, a, b;
	printf("Iki sayi girin: ");
	scanf("%d %d", &a, &b);
	
	toplam = topla(a, b);
	printf("%d ve %d'nin toplami %d'dir.\n", a, b, toplam);
	
	fark = cikar(a, b);
	printf("%d ve %d'nin farki %d'dir.\n", a, b, fark);
	
	char harfim;
	harfim = harf(78);
	printf("Harf Notu: %c\n", harfim);
	
	kutu_ciz(10, 30);
	
	hata_mesaji();
	
	return 0;
}

/* Toplama fonksiyonunun tanımlanması */
int topla(int x, int y)
{
	int sonuc;
	sonuc = x + y;
	return sonuc;
}

