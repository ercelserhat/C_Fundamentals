#include <stdio.h>

void f1(int);
void f2(int *);

void takas(int*, int*);

int main(){
	int x = 55;
	printf("x'in degeri,\n", x);
	printf("Fonksiyonlar cagrilmadan once: %d\n", x);
	
	f1(x);
	printf("f1 cagrildiktan sonra: %d\n", x);
	
	f2(&x);
	printf("f2 cagrildiktan sonra: %d\n", x);
	
	
	int a, b;
	a = 22; b = 33;
	printf("Takas oncesi: a=%d, b=%d\n", a, b);
	takas(&a, &b);
	printf("Takas sonrasi: a=%d, b=%d\n", a, b);
}

/* Değer geçerek aktarım */
void f1(int n)
{
	n = 66;
	printf("f1 fonksiyonunun icinde: %d\n", n);
}

/* Adres geçerek aktarım */
void f2(int *n)
{
	*n = 77;
	printf("f2 fonksiyonunun icinde: %d\n", *n);
}

/*İki tamsayının birbiri ile takas edilmesi */
void takas(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}