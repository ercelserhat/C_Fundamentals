/*
DOSYA AÇMA MODLARI
r	Salt okunur (read only). 
	Dosyanın açılabilmesi için önceden oluştrulmuş olması gerekir. Bu modda açılmş olan bir dosyaya yazma yapılamaz.
	
w	Yalnızca yazma (write only). 
	Dosya diskte kayıtlı olsun veya olamsın dosya yeniden oluşturulur. Bu modda açılmış olan bir dosyadan okuma yapılamaz.
	
a	Ekleme (append). 
	Kayıtlı bir dosyanın sonuna veri eklemek için açılır. Bu modda açılmış olan bir dosyadan okuma yapılamaz.
	
r+	Okuma ve yazma. 
	Bu modda açılmış olan bir dosyanın daha önce varolması gerekir.
	
w+	Okuma ve yazma. 
	Bu modda açılmış olan bir dosya var olsun veya olmasın dosya yeniden oluşturulur.
	
a+	Okuma ve yazma. 
	Kayıtlı bir dosyanın sonuna veri eklemek için açılır.
	

ÜST DÜZEY DOSYALAMA FONKSİYONLARI
fopen()		Dosya oluşturur, açar
fclose()	Dosyayı kapatır
putc()		Dosyaya bir karakter yazar
getc()		Dosyadan bir karakter okur
feof()		Dosya sonuna gelindiğini sorgular
fprintf()	Dosyaya formatlı veri yazar
fscanf()	Dosyadan formatlı veri okur
fputs()		Dosyaya katar yazar
fgets()		Dosyadan katar okur
fwrite()	Dosyaya dizi yazar
fread()		Dosyadan dizi okur
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *dg; /* Dosya göstericisi */
	const int n = 10; /* Öğrenci sayısı */
	char ad[10];
	int no, Not, i=0;
	
	dg = fopen("ogrenci.txt", "w");
	
	if(dg == NULL){
		puts("ogrenci.txt dosyasi acilamadi! \n");
		exit(1);
	}
	
	puts("10 ogrenciye ait bilgileri girin:");
	
	while(i++<n){
		printf("%d. ogrencinin numarasi : ", i); scanf("%d", &no);
		printf("%d. ogrencinin adi      : ", i); scanf("%s", &ad);
		printf("%d. ogrencinin notu     : ", i); scanf("%d", &Not);
		
		fprintf(dg, "%5d %10s %3d\n", no, ad, Not); /*verileri formatlı yaz*/
	}
	
	/*Dosyayı kapat*/
	fclose(dg);
	
	puts("Bilgiler kaydedildi.\a");
	return 0;		
}