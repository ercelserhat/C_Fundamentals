#include <stdio.h>

int main()
{
	/* ESCAPE SEQUENCES*/
	printf("\a TEXT\n");
	printf("\b TEXT\n");
	printf("\f TEXT\n");
	printf("\n TEXT\n");
	printf("\r TEXT\n");
	printf("\t TEXT\n");
	printf("\v TEXT\n");
	printf("\" TEXT\n");
	printf("\' TEXT\n");
	printf("\\ TEXT\n");
	printf("%% TEXT\n");
	
	/* CONVERSION SPECIFIERS
	%c -> char
	%s -> string
	%d -> int, short
	%ld -> long
	%u -> unsigned int, unsigned short
	%f -> float
	%lf -> double
	*/
	
	int a = 2, b = 10, c = 50;
	float f = 1.05, g = 25.5, h = -0.1, yuzde;
	
	printf("3 tamsayi : %d %d %d\n", a, b, c);
	printf("3 tamsayi : %d \t%d \t%d\n", a, b, c);
	
	printf("\n");
	
	printf("3 reel sayi : %f %f %f\n", f, g, h);
	printf("3 reel sayi : \n%f\n%f\n%f\n\n", f, g, h);
	
	yuzde = 220 * 25 / 100.0;
	printf("220'nin %%25'i %f'dir.", yuzde);
	printf("%f/%f isleminin sonucu = %f\n", g, f, g / f);
	
	return 0;
}