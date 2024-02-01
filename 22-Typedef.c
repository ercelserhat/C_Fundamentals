#include <stdio.h>

typedef struct{
	int gun, ay, yil;
} TARIH;

typedef int tamsayi;

void goster(TARIH x){
	printf("Tarih %02d/%02d/%4d\n", x.gun, x.ay, x.yil);
}

int main()
{
	TARIH n;
	n.gun = 1;
	n.ay = 2;
	n.yil = 2024;
	
	goster(n);
	
	
	/* int x, y */
	tamsayi x, y; 
	
	return 0;
}