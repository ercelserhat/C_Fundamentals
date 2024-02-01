#include <stdio.h>

double* maxAdr(double a[], int boyut)
{
	double ebd = a[0];
	double *eba = &a[0];
	for(int i=1; i<boyut; i++)
	{
		if(a[i] > ebd)
		{
			ebd = a[i]; //en büyük değer
			eba = &a[i]; //en büyük adres
		}
	}
	return eba;
}

int main()
{
	double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
	double *p;
	
	//indiz, dizi ve adresini ekrana bas
	for(int k=0; k<6; k++)
	{
		printf("%d %lf %p\n", k, x[k], x[k]);
	}
	
	p = maxAdr(x, 6);
	
	printf("En buyuk deger: %lf\n", *p);
	printf("En buyuk adres: %p\n", p);
	printf("En buyuk konum: %d\n", p - &x[0]);
	
	return 0;
}