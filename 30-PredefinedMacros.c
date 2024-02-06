/* Predefined Macros
__LINE__	
	Önişlemci bu sabit yerine kaynak koddaki o anda bulunan satır numarasını yerleştirir.
__FILE__	
	Kaynak dosyanın ismin tutar.
__DATE__	
	Önişlemci bu sabit yerine derlemenin yapıldığı zaman tarihi (ay gün yıl formatında) yazar.
__TIME__	
	Önişlemci bu sabit yerine derlemenin yapıldığı zaman zamanı (sa:dak:sn gün yıl formatında) yazar.
__STDC__	
	C dilinde kullanılan kimi anahtar sözcükler standart değildir.
	Derleyici eğer yalnızca standart C'nin anahtar sözcüklerini destekliyorsa bu sabit tanımlı varsayılır.
M_PI	
	Pi sayısını tutar (M_PI = 3.14159265358979323846). Ayrıca bkz: math.h
M_E	
	e sayısını tutar (M_E = 2.7182818284590452354). Ayrıca bkz: math.h
RAND_MAX	
	Rastgele sayı üretec fonksiyonu rand() ile döndürlen en büyük sayıyı tutar.
	(32 bit işletim sitemi için: RAND_MAX = 2147483647). Ayrıca bkz: stdlib.h
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef __STDC__
  #error Bu derleyici ANSI C degil.
#endif

#ifndef RAND_MAX
  #error RAND_MAX tanımlı degil.
#endif

int main()
{
	printf("Satir No   : %d\n", __LINE__); //Satir No   : 26
	printf("Dosya adi  : %s\n", __FILE__); //C:\Users\...\Desktop\...\30-PredefinedMacros.c
	printf("Tarih      : %s\n", __DATE__); //Feb  6 2024
	printf("Saat       : %s\n", __TIME__); //14:27:41
	
	
	double r = (double) rand()/RAND_MAX;
	double ikiPi = 2.0*M_PI;
	double birBoluE = 1.0/M_E;
	
	printf("r  = %lf\n",r); //r  = 0.001251
	printf("ikiPi = %lf\n",ikiPi); //ikiPi = 6.283185
	printf("birBoluE = %lf\n",birBoluE); //birBoluE = 0.367879
}