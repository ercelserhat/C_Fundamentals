#include <stdio.h>
#include <stdlib.h>

struct kayit{
	char ad[10];
	long no;
	int sinif;
};

struct TARIH{
	int gun, ay, yil;
};

void goster(struct TARIH x){
	printf("Tarih: %02d/%02d/%4d\n", x.gun, x.ay, x.yil);
}

struct Meyve{
	float agirlik;
	float fiyat;	
};

int main()
{
	struct kayit ogr; /* ogr değişkeni kayit tipinde */
	
	printf("Ogrenci No : "); scanf("%ld", &ogr.no);
	printf("Ogrenci Adi: "); scanf("%s", ogr.ad);
	printf("Ogrenci Sinif: "); scanf("%d", &ogr.sinif);
	
	printf("\n***Girilen Bilgiler***");
	printf("\nNo: %ld", ogr.no);
	printf("\nAdi: %s", ogr.ad);
	printf("\nSinifi: %d\n", ogr.sinif);
	
	
	
	struct TARIH t; /* t değişkeni TARIH tipinde */
	t.gun = 1;
	t.ay = 2;
	t.yil = 2024;
	
	goster(t);
	
	
	
	struct Meyve *muz, elma;
	float muzTutar, elmaTutar;
	
	/* muz Meyve tipinde bir gösterici */
	muz = (struct Meyve*) malloc(sizeof(struct Meyve));
	muz->agirlik = 2.50;
	muz->fiyat = 3.50;
	muzTutar = muz->fiyat * muz->agirlik;
	
	/* elma Meyve tipinde bir değişken */
	elma.agirlik = 2.00;
	elma.fiyat = 1.75;
	elmaTutar = elma.fiyat * elma.agirlik;
	
	printf("Meyve     Agirlik     Birim Fiyati     Tutar\n");
	printf("-----     -------     ------------     -----\n");
	printf("Muz       %7.2f     %12.2f     %5.2f\n", muz->agirlik, muz->fiyat, muzTutar);
	printf("Elma      %7.2f     %12.2f     %5.2f\n", elma.agirlik, elma.fiyat, elmaTutar);
	return 0;
}
