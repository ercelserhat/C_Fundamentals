#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Dizinin ilk n elemanına [0,1] arasında rastgele sayı atayan fonksiyon*/
void rastgele(double *dizi, int n){
	for(int i=0; i<n; i++){
		*(dizi+i) = (double) rand()/RAND_MAX;
	}
}

/*Dizinin elemanlarını küçükten büyüğe doğru sıralayan fonksiyon*/
void sirala(int *a, int n){
	int k, j, gecici;
	
	for(k=0; k<n-1; k++){
		for(j=0; j<n-1; j++){
			if(a[j] > a[j+1]){
				gecici = a[j];
				a[j] = a[j+1];
				a[j+1] = gecici;
			}
		}
	}
}

/*Bir dizinin karekökünü hesaplayan fonksiyon örneği*/
double *kare_kok(double *, int);

int main(){
	double x[5];
	/*rastgele sayı üretecini değiştir*/
	srand(1234567);
	rastgele(x, 5);
	puts("Rastgele dizi elemanlari:");
	for(int i=0; i<4; i++){
		printf("%lf\n", x[i]);
	}	
	
	
	
	int i, y[5] = {22, 44, 11, 55, 33};
	printf("Once: ");
	for(i=0; i<5; i++){
		printf("%5d", y[i]);
	}
	printf("\n");
	sirala(y, 5);
	printf("Sonra: ");
	for(i=0; i<5; i++){
		printf("%5d", y[i]);
	}
	printf("\n");
	
	
	
	double A[5] = {1.0, 2.0, 4.0, 8.0, 16.0};
	double *B;
	printf("A dizisi: ");
	for(i=0; i<5; i++){
		printf("%lf ", A[i]);
	}
	printf("\n");
	
	B = kare_kok(A, 5);
	printf("B dizisi: ");
	for(i=0; i<5; i++){
		printf("%lf ", B[i]);
	}
	printf("\n");
	return 0;
}

/*Bir dizinin butün elemanlarının karekökünü gönderir*/
double *kare_kok(double *dizi, int boyut){
	int i;
	static double *c;
	
	/*bellekten yer iste*/
	c = (double *) calloc(boyut, sizeof(double));
	if(c==NULL) return NULL;
	
	for(i=0; i<boyut; i++){
		c[i] = sqrt(dizi[i]);
	}
	
	return c;
}