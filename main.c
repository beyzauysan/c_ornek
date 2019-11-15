#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pisayisi 3.14159265

//BEYZA UYSAN - 19010011059

int main()
{
    int mod,basitislem,gelismisislem,i,secim;
    int sayi1,sayi2;
    int sonuc=0;
    float sonucdeger=0;
    double sonucc=0;
    double faktosonuc=1;
    double x,hesap1=0,sinusdegeri=0,cosinusdegeri=0;
    int snccc;

menu:
    printf("......MENU.......\n MOD SECINIZ:\n");
    printf("1-BASIT MOD\n2-GELISMIS MOD\n\n");
    scanf("%d", &mod);

    switch (mod)
    {
    case(1):   //BAS�T ��LEMLER
    {
        printf("\nBASIT MOD ILE YAPMAK ISTEDIGINIZ ISLEMI SECINIZ:\n");
        printf("\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n\n");
        scanf("%d",&basitislem);

        switch(basitislem)
        {
        case(1): //TOPLAMA ��LEM�
        {

basit1:
            printf("\nBir sayi giriniz:");
            scanf("%d", &sayi1);
            printf("Bir sayi giriniz:");
            scanf("%d", &sayi2);

            sonuc =sayi1+sayi2;
            printf("\nSayilarin Toplami: %d\n", sonuc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto basit1;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(2):  //�IKARMA ��LEM�
        {
basit2:
            printf("\nBir sayi giriniz:");
            scanf("%d",&sayi1);
            printf("Bir sayi giriniz:");
            scanf("%d",&sayi2);

            sonuc =sayi1-sayi2;
            printf("\nSayilarin Farki: %d\n", sonuc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto basit2;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(3): //�ARPMA ��LEM�
        {
basit3:
            printf("\nBir sayi giriniz:");
            scanf("%d",&sayi1);
            printf("Bir sayi giriniz:");
            scanf("%d",&sayi2);

            sonuc =sayi1*sayi2;
            printf("\nSayilarin Carpimi: %d\n", sonuc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto basit3;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;

        }
        case(4):  //B�LME ��LEM�
        {
basit4:
            printf("\nBir sayi giriniz:");
            scanf("%d",&sayi1);
            printf("Bir sayi giriniz:");
            scanf("%d",&sayi2);

            sonucc =(double) sayi1/sayi2;
            printf("\nSayilarin Bolumu: %.2f\n", sonucc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto basit4;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        default:
            printf("\nHATALI SECIM YAPTINIZ!..\n");
        }

        break;

    }
    case(2): //GEL��M�� ��LEMLER MODU
    {
        printf("\nGELISMIS MOD ILE YAPMAK ISTEDIGINIZ ISLEMI SECINIZ:\n");
        printf("\n1-Mod Alma\n2-Karekok Alma\n3-Us Alma\n4-Logaritma\n5-Faktoriyel\n6-Yuzde Hesaplama\n7-Sinus Degeri Hesaplama\n8-Cosinus Degeri Hesaplama\n\n");
        scanf("%d",&gelismisislem);

        switch(gelismisislem)
        {
        case(1): //MOD ALMA
        {
gelismis1:
            printf("\nBir sayi giriniz:");
            scanf("%d", &sayi1);
            printf("Alinacak mod degeri giriniz:");
            scanf("%d", &sayi2);

            sonucc = sayi1 % sayi2;
            printf("\n%d sayisinin mod(%d) degeri= %.2f\n",sayi1, sayi2, sonucc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis1;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(2): //KAREK�K BULMA
        {
            gelismis2:
            printf("\nKarekok almak istediginiz sayiyi giriniz:");
            scanf("%d", &sayi1);

            printf("Sayinin karekoku: %.2f\n ", sqrt(sayi1));

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis2;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(3): // �S ALMA
        {

gelismis3:
            printf("\nBir sayi giriniz:");
            scanf("%d", &sayi1);
            printf("Us giriniz:");
            scanf("%d", &sayi2);
            snccc=1;
            for(i=0; i<sayi2; i++)


                snccc =snccc*sayi1;

            printf("\nSonucunuz: %d\n", snccc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis3;
            else if(secim == 2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(4): //LOGAR�TMA HESABI
        {

gelismis4:
            printf("\n10 Tabaninda Logaritmasini bulmak istediginiz bir sayi giriniz:");
            scanf("%d", &sayi1);


            sonucdeger =log10(sayi1);
            printf("\n10 tabaninda log %d = %.2f\n", sayi1, sonucdeger);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis4;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(5): //FAKTOR�YEL HESABI
        {
gelismis5:
            printf("\nFaktoriyelini bulmak istediginiz sayiyi giriniz:");
            scanf("%d",&sayi1);
            faktosonuc=1;
            for(i=1; i<=sayi1; i++)

                faktosonuc = faktosonuc*i;
            printf("\n%d!= %.2lf\n", sayi1, faktosonuc);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis5;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(6): //y�ZDE HESAPLAMA
        {
gelismis6:
            printf("\nYuzde hesaplamak istediginiz sayiyi giriniz:");
            scanf("%d",&sayi1);
            printf("Yuzde oranini giriniz:");
            scanf("%d",&sayi2);

            sonucdeger =sayi1*sayi2;
            sonucdeger =sonucdeger/100;
            printf("\nSayinizin yuzde %d 'lik kismi= %.2f\n",sayi2,sonucdeger);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);

            if(secim == 1)
                goto gelismis6;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(7): //S�NUS DE�ER� HESAPLAMA
        {
gelismis7:
            printf("\nSinus degerini hesaplamak istediginiz sayiyi giriniz:");
            scanf("%lf", &x);

            hesap1 = pisayisi/180;
            sinusdegeri = sin(x*hesap1);
            printf("Sin %.0lf = %.2lf\n", x, sinusdegeri);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);
            if(secim == 1)
                goto gelismis7;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;
        }
        case(8): //COS�NUS DE�ER� HESAPLAMA
        {
gelismis8:
            printf("\nCosinus degerini hesaplamak istediginiz sayiyi giriniz:");
            scanf("%lf", &x);

            hesap1 = pisayisi/180;
            cosinusdegeri = cos(x*hesap1);
            printf("Cos %.0lf = %.2lf\n", x, cosinusdegeri);

            printf("\nAyni islemi tekrar yapmak istiyorsaniz 1'e basiniz:\n");
            printf("Menuye donmek istiyorsaniz 2'ye basiniz:\n\n");
            scanf("%d", &secim);


            if(secim == 1)
                goto gelismis8;
            else if(secim ==2)
                goto menu;
            else
                goto hatali;

            break;

        }
        }
    }


hatali:  //KULLANICI TARAFINDAN HATALI SAYI G�R�L�NCE EKRANA YAZDIRILACAK G�R�NT�
    default:
        printf("\nHATALI SECIM YAPTINIZ!...\n\n");

    }


    return 0;
}
