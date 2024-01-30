#include <stdio.h>

int main()
{
	/* WHILE LOOP*/
	
	int x = 0;
	while(x <= 10)
	{
		printf("%d\n", x++);
	}
	
	
	/* DO-WHILE LOOP */
	int sayi;
	do
	{
		printf("Bir sayi girin: ");
		scanf("%d", &sayi);
		printf("Iki kati : %d\n", 2*sayi);
	}while(sayi > 0);
	
	
	/* FOR LOOP */
	long i, n, faktor;
	printf("Faktoriyeli hesaplanacak sayi girin: ");
	scanf("%ld", &n);
	
	faktor = 1;
	for(i = 1; i <= n; i++)
	{
		faktor *= i;
	}
	printf("%ld! = %ld\n", n, faktor);
	
	return 0;
}