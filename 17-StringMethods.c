#include <stdio.h>
#include <string.h>

/*
BAZI STRING FONKSIYONLARI
int strcmp(char *str1, char *str2);
		str1 ve str2 yi karşlaştırır.
		Eşitse 0, str1 büyükse 0'dan büyük bir değer aksi halde 0'dan küçük bir değer göderir.
char *strcpy(char *str1, char *str2);	
		str2 yi str1 e kopyalar
char *strcat(char *str1, char *str2);	
		str2 yi str1 e ekler
char *strrev(str);	
		str yi ters çevirir (NULL karakteri hariç)
int strlen(str);	
		str nin kaç karakterden oluştuğunu hesaplar
char *strchr(char *str, char kr);	
		kr karakterinin str içindeki (baştan itibaren) ilk karşılaştığı yeri verir
char *strstr(char *str1, char *str2);	
		str2 katarının str1 içindeki (baştan itibaren) ilk karşılaştığı yeri verir
char *strlwr(char *str);	
		str nin bütün karakterini küçük harfe çevirir
char *strupr(char *str);	
		str nin bütün karakterini büyük harfe çevirir
*/

int struzun(char *);
char *strcevir(char *);

int main()
{
	/*Basit bir şifre programı*/
	char sifre[8];
	int sonuc, hak = 3;
	while(hak--> 0)
	{
		printf("Sifre : ");
		gets(sifre);
		sonuc = strcmp(sifre, "elma");
		if(sonuc == 0){
			puts("Sifre dogru.");
			break;
		}
		else
		{
			puts("Sifre yanlis.");
		}
	}
	
	
	
	/*Bir katarı diğerine kopyalama*/
	char str1[] = "Deneme";
	char str2[15], str3[15];
	int i;
	
	/*strcpy kullanarak kopyalama*/
	strcpy(str2, str1);
	
	/*strcp kullanmadan kopyalama*/
	for(i=0; str1[i]; i++)
		str3[i] = str1[i];
	str3[i] = '\0';
	
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	
	
	
	/*Bir karakter dizisinin uzunluğunu bulma*/
	char s[50];
	int k = 0;
	printf("Bir seyler yazin: ");
	scanf("%s", s);
	while(s[k] != '\0')
		k++;
	
	puts("Dizinin uzunlugu: ");
	printf("strlen kullanarak = %d\n", strlen(s));
	printf("strlen kullanmadan = %d\n", k);
	
	
	printf("struzun fonksiyonu ile = %d\n", struzun(s));
	printf("Tersi: %s\n", strcevir(s));
	return 0;
}





/*bir karakter dizisinin uzunluğunu hesaplayan fonksiyon*/
int struzun(char *str)
{
	int n = 0;
	while(str[n] != '\0')
		n++;
	return n;
}


/*bir karakter dizisinin tersini veren fonksiyon*/
char *strcevir(char *str)
{
	int i, n;
	char gecici;
	
	n = strlen(str);
	
	for(i=0; i<n/2; i++)
	{
		gecici = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = gecici;
	}
	return str;
}









