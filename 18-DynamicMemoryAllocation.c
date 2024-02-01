/*
void *malloc(size_t eleman_sayısı);	
		Bellekte herbiri size_t tipinde olan eleman_sayısı kadar yer (bellek bloğu) ayırır. 
		Bu yer verilmezse geriye NULL gönderir.
void *calloc(size_t eleman_sayısı, size_t nbayt);	
		Bellekte herbiri nbayt kadar yer işgal edecek eleman_sayısı kadar boş yer ayırır ve bütün bitleri sıfırlar. 
		Bu yer ayrılamazsa geriye NULL gönderir.
void *realloc(void *ptr, size_t nbayt);	
		ptr işaretçisi ile gösterilen bellek bloğunu, nbayt kadar büyüterek veya küçülterek değiştirir. 
		Bu iş gerçekleşmezse geriye NULL gönderir.
void free(void *ptr);	
		Daha önce ayrılan adresi ptr'de saklanan bellek alanının boşaltır.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	float *x, toplam, ort;
	
	while(1)
	{
		/*dizinin eleman sayısı okunuyor.*/
		printf("\nEleman sayisini girin: ");
		scanf("%d", &n);
		
		/*Eleman sayısı <= 0 ise döngüden çık*/
		if(n<=0)
			break;
		
		/*Bellekten yer isteniyor*/
		x = (float *) malloc(sizeof(float)*n);
		
		/*İstenen yer ayrıldı mı?*/
		if(x==NULL)
		{
			puts("Yetersiz bellek alani");
			exit(1);
		}
		
		/*Elemanlar tek tek belleğe yazılıp toplamları hesaplanıyor.*/
		for(toplam=0.0, i=0; i<n; i++)
		{
			printf("%d. eleman: ", i+1);
			scanf("%f", &x[i]);
			toplam += x[i];
		}
		
		ort = toplam / n;
		printf("Ortalama = %f\n", ort);
		
		/*Ayrılan alan boşaltılıyor.*/
		free(x);
	}
	
	return 0;
}