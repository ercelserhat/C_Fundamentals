/*
void göstericiler herhangi bir veri tipine ait olmayan göstericilerdir. 
Bu özelliğinden dolayı, void gösterici genel gösterici (generic pointer) olarak da adlandırılır.
*/

#include <stdio.h>

int main()
{
	char kar = 'a';
	int tam = 66;
	double ger = 1.2;
	void *veri;
	
	veri = &kar;
	printf("veri - > kar: veri %c karakter degerini gosteriyor.\n", *(char *) veri);
	
	veri = &tam;
	printf("veri - > tam: veri %d tamsayi degerini gosteriyor.\n", *(int *) veri);
	
	veri = &ger;
	printf("veri - > ger: veri %.2lf gercel sayi degerini gosteriyor.\n", *(double *) veri);
}