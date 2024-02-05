/* PREPROCESSORS
   #include    #define     #pragma
   #error      #undef      #ifdef      #ifndef
   #if         #else       #elif       #endif
*/


#include <stdio.h>
#include "faktoriyel.h"

int main()
{
	for(int i=0; i<=10; i++)
	{
		printf("%2d! = %d\n", i, faktoriyel(i));
	}
	return 0;
}