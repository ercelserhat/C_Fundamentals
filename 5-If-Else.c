#include <stdio.h>
#include <math.h>

int main()
{
	int sayi;
	
	printf("Bir sayi girin: ");
	scanf("%d", &sayi);
	
	if (sayi % 2 == 0)
	{
		printf("Sayi cifttir.\n");
	}
	else{
		printf("Sayi tektir.\n");
	}
	
	
	/* ax*x + bx + c = 0 denkleminin (karmaşık sayılı kökler dahil) çözümü */
	float a, b, c, delta, x1, x2, x, kok_delta;
	
	printf("a, b, c degerlerini girin: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	delta = b*b - 4.0*a*c;
	
	if (delta > 0.0)
	{
		x1 = (-b + sqrt(delta)) / (2.0*a);
		x2 = (-b - sqrt(delta)) / (2.0*a);
		
		printf("\nReel Kokler:");
		printf("\nx1 = %f", x1);
		printf("\nx2 = %f", x2);
	}
	else if (delta < 0.0)
	{
		kok_delta = (sqrt(-delta)) / (2.0 * a);
		x = -0.5 * b / a;
		
		printf("\nKarmasik Kokler: ");
		printf("\nx1 = %f + (%f)i", x, kok_delta);
		printf("\nx2 = %f - (%f)i", x, kok_delta);
	}
	else
	{
		x = -0.5*b/a;
		printf("\nKokler esit:");
		printf("\nx1 = x2 = %f", x);
	}
	
	return 0;
}