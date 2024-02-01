#include <stdio.h>

double ortalama(double dizi[], int n);

int main()
{
	int sayi = 33;
	printf("Deger: %d\n", sayi);
	printf("Adres: %p\n", &sayi);
	
	int *ptam, tam = 33;
	ptam = &tam;
	printf("Tam - Deger: %d\n", tam);
	printf("Tam - Adres: %p\n", &tam);
	printf("Tam - Adres: %p\n", ptam);
	
	*ptam = 44;
	printf("Tam - Deger: %d\n", tam);
	printf("Tam - Adres: %p\n", &tam);
	printf("Tam - Adres: %p\n", ptam);
	
	
	char *pk, k = 'a';
	int *pt, t = 22;
	double *pg, g = 5.5;
	pk = &k;
	pt = &t;
	pg = &g;
	
	printf("Onceki adresler: pk= %p, pt= %p, pg= %p\n", pk, pt, pg);
	
	pk++;
	pt--;
	pg = pg + 10;
	
	printf("Sonraki adresler: pk= %p, pt= %p, pg= %p\n", pk, pt, pg);
	
	
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double o;
	o = ortalama(a, 5);
	printf("Dizinin ortalamasi= %lf\n", o);
}

double ortalama(double dizi[], int n)
{
	double *p, t=0.0;
	int i;
	
	p = dizi;  /* veya p = &dizi[0]; */
	
	for(i=0; i<n; i++)
	{
		t += *(p+i);
	}
	
	return (t/n);
}