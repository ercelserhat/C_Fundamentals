/*PREPROCESSORS
#if, #elif, #else, #endif
*/


#include <stdio.h>

#if _WIN32
	#define ISLETIM_SISTEMI "WINDOW ISLETIM SISTEMI"
#elif __linux__
	#define ISLETIM_SISTEMI "LINUX ISLETIM SISTEMI"
	#error "Bu program LINUX isletim sisteminde calismaz."
#elif __APPLE__
	#define ISLETIM_SISTEMI "MAC ISLETIM SISTEMI"
#else
	#define ISLETIM_SISTEMI "X ISLETIM SISTEMI"
#endif

int main()
{
	printf(ISLETIM_SISTEMI);
}