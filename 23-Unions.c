/*
Unions
Yapılar gibi sürekli belleğe yerleşen nesnelerdir. 
Birlikler yapılara göre seyrek kullanılır. 
Bir programda veya fonksiyonda değişkenlerin aynı bellek alanını paylaşması için ortaklık bildirimi union deyimi ile yapılır. 
Bu da belleğin daha verimli kullanılmasına imkan verir. 
*/

#include <stdio.h>

union paylas{
	int x;
	int y;
}z;

int main()
{
	int *xAdres, *yAdres;
	
	z.x = 11;
	xAdres = &z.x;
	printf("x = %d    y = %d\n", z.x, z.y);
	
	z.y = 22;
	yAdres = &z.y;
	printf("x = %d    y = %d\n", z.x, z.y);
	
	printf("xAdres = %p    yAdres = %p\n", xAdres, yAdres);
	
	return 0;
}