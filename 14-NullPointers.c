/*
Bir göstericinin bellekte herhangi bir adresi göstermesi
veya önceden göstermiş olduğu adres iptal edilmesi istenirse NULL sabiti kullanılır. 
Bu sabit derleyicide ASCII karakter tablosunun ilk karakteridir ve '\0' ile sembolize edilir.
*/
#include <stdio.h>

int main()
{
	int *ptr, a = 12;
	ptr = &a;
	printf("Deger: %d\n", a);
	printf("Adresi: %p\n", ptr);
	ptr = NULL;
	printf("NULL'dan sonra adres: %p\n", ptr);
}