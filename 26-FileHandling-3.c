/*
   'kelvin.sck' dosyasında bulunan 100 adet kelvin cinsinden sıcaklık
   bilgilerini derece karşılıklarını 'derece.sck' dosyasına yazar.
   Bu iki sıcaklık arasındaki çevrim kuralı: K = 273 + C şeklindedir. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   /* dosya göstericileri  */
   FILE *oku, *yaz;

   /* Dosya adları */
   char *kaynak_dosya = "kelvin.sck";
   char *hedef_dosya = "derece.sck";

   float K, D;
   int   i=0, n=100;


   /* Dosyalara erişim mümkün mü ? */
   if((oku=fopen(kaynak_dosya, "r")) == NULL)
   {
     printf("%s dosyası acilamadi.\n", kaynak_dosya);
     exit(1);
   }
   if((yaz=fopen(hedef_dosya, "w")) == NULL)
   {
     printf("%s acilamadi.\n", hedef_dosya);
     exit(2);
   }

   for(i=0; i<n; i++)
   {
      fscanf(oku,"%f",&K);         /* 'kelvin.sck'dan verileri oku     */
      D = K - 273.0;               /* dönüşüm denklemi */
      fprintf(yaz,"%8.2f\n",D);    /* verileri 'derece.sck'ya yaz     */
   }

   /* Dosyaları kapat */
   fclose(oku);
   fclose(yaz);

   printf("%s > %s\n", kaynak_dosya, hedef_dosya);
   puts("cevirme islemi tamamlandi.");

 return 0;
}