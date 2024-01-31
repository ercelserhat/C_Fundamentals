#include <stdio.h>
#define N 10

int main(){
	
	int dizi[N];
	
	float kutle[5] = {8.471, 3.683, 9.107, 4.739, 3.918};
	int maliyet[3] = {25, 72, 94};
	double a[4] = {10.0, 5.2, 7.5, 0.0};
	
	int b[] = {100, 200, 300, 400};
	float v[] = {9.8, 11.0, 7.5, 0.0, 12.5};
	
	
	int x[10];
	
	for (int i=0; i<10; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d\n", x[i]);
	}
	
	
	/* Klavyeden girilen 10 adet sayının ortalamasını hesapla */
	float y[N], ort, toplam=0;
	
	for(int i=0; i<N; i++)
	{
		printf("%d. sayi: ", i+1);
		scanf("%f", &y[i]);
		toplam += y[i];
	}
	
	ort = toplam / N;
	printf("Sayilarin ortalamasi = %f\n", ort);
}