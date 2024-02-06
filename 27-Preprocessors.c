/* PREPROCESSORS
   #include    #define     #pragma
   #error      #undef      #ifdef      #ifndef
   #if         #else       #elif       #endif
*/


#include <stdio.h>
#include "faktoriyel.h"
#include <math.h>

#define PROGRAM main()
#define BASLA {
#define BITIR }
#define YAZ printf

#define km *1000.0
#define saat *3600.0

#define kare(x) (x*x)
#define topla(x, y) (x+y)
#define hipo(x, y) sqrt(x*x+y*y)
#define takas(x,y) {g=(x); (x)=(y); (y)=g;}

#define SIFRE 123456
#undef SIFRE
#define SIFRE 987654

/*int main()
{
	for(int i=0; i<=10; i++)
	{
		printf("%2d! = %d\n", i, faktoriyel(i));
	}
	return 0;
}*/

PROGRAM
BASLA
	YAZ("Hello World\n");
	
	double yol, zaman, hiz;
	yol = 100 km;
	zaman = 1.2 saat;
	hiz = yol / zaman;
	YAZ("HIZ = %lf m/s\n", hiz); //HIZ = 23.148148 m/s
	
	float a=3.0, b=4.0;
	YAZ("kare(2)   = %f\n", kare(2)); //kare(2)   = 0.000000
	YAZ("topla(a,b) = %f\n", topla(a,b)); //topla(a,b) = 7.000000
	YAZ("hipo(a,b) = %f\n", hipo(a,b)); //hipo(a,b) = 5.000000
BITIR