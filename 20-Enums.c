#include <stdio.h>

enum renkler {kirmizi, mavi, sari} renk;
enum gunler {pazartesi, sali, carsamba, persembe, cuma, cumartesi, pazar};

enum BOOLEAN {FALSE, TRUE}; /* 0, 1 */
int tek(int n){return (n%2);}

enum bolumler{
	muhendislik = 1,
	donanim,
	muhasebe,
	motor,
	buro
} bolum;

int main()
{
	enum BOOLEAN sonuc;
	int x;
	
	printf("Bir sayi girin: ");
	scanf("%d", &x);
	
	sonuc = tek(x);
	
	if(sonuc == TRUE)
		puts("Girilen sayi tek.");
	else
		puts("Girilen sayi cift.");
		
		
		
	bolum = donanim;
	printf("bolum: %d\n", bolum);
	bolum += 2;
	printf("yeni bolum: %d\n", bolum);
	
	if(bolum == motor)
		printf("Bolum: motor");
	
	return 0;
}