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
	
	return 0;
}