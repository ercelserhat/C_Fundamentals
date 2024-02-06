/*PREPROCESSORS
#ifdef, ifndef
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141593

#define SIFRE 99999
#ifndef SIFRE
	#define SIFRE 12345
#endif

int main()
{
	double c, r = 21.3;
	
	#ifdef PI
		c = 2.0 * PI * r;
		printf("Dairenin cevresi = %lf\n", c);
	#else
		printf("PI sayisi tanimlanmamis.\n");
	#endif
	
	
	printf("SIFRE = %d\n", SIFRE); //SIFRE = 99999
}