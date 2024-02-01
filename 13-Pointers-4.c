/*
Fonksiyon betiğinin (kodlarının) bellekte bir adreste tutulduğu şeklinde düşünebiliriz. 
Fonksiyon göstericisi basit olarak fonksiyon adının saklandığı bellek adresini tutan bir göstericidir. 
Fonksiyon göstericileri sayesinde fonksiyonlar başka fonksiyonlara parametre olarak aktarılabilmektedir.
Fonksiyon adının bellete yer işgal ettiği şöyle öğrenilebilir:

          int f(int);      fonksiyon bildirimi 
          int (*pf)(int);  fonksiyon göstericisi bildirimi 
          pf = &f;         f'nin adresini pf'ye ata! 
*/

#include <stdio.h>

int f(int n){
	int f=1;
	for(int i=1; i<n; i++)
	{
		f *= i;
	}
	return f;
}

int main()
{
	int (*pf)(int);
	pf = &f;
	
	printf("Fonksiyonun adresi = %p\n", &f); //Fonksiyonun adresi = 0000000000401560
	printf("Fonksiyonun adresi = %p\n", pf); //Fonksiyonun adresi = 0000000000401560
}