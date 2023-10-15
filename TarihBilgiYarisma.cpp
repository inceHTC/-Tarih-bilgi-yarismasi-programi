#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "turkish");
     




    char sorular[][1000] = { "1. Osmanl� Devleti'nde ilk anayasa hangi tarih ve hangi padi�ah d�neminde ilan edilmi�tir?:  ",
                          "2. Osmanl� Devleti'nde Vaka-i Hayriye olarak bilinen olay ne zaman ger�ekle�mi�tir?:",
                          "3. Tanzimat Ferman� ne zaman ilan edilmi�tir?:",
                          "4. Osmanl� Devleti'nin son d�neminde kurulan ilk siyasi parti hangisidir?:",
                          "5. 30 A�ustos 1922'de hangi zafer kazan�lm��t�r?:",
                          "6. T�rkiye Cumhuriyeti'nin ilan edildi�i tarih nedir?:",
                          "7. T�rkiye Cumhuriyeti'nin ilk cumhurba�kan� kimdir?:",
                          "8. T�rkiye Cumhuriyeti'nin ilk anayasas� ne zaman kabul edilmi�tir?:",
                          "9. T�rkiye'nin ilk kad�n milletvekili kimdir?:",
                          "10. Lozan Antla�mas� hangi tarih ve hangi �ehirde imzalanm��t�r?:",
                          "11. T�rklerin tarih sahnesine ��kt��� d�nem hangisidir?:",
                          "12. Orhun Yaz�tlar� hangi T�rk devleti d�neminde yaz�lm��t�r?:",
                          "13. T�rklerin �slamiyet'i kabul etti�i d�nem hangisidir?:",
                          "14. T�rklerin �slamiyet'i kabul etmesinde etkili olan ilk M�sl�man T�rk devleti hangisidir?:",
                          "15. �slamiyet �ncesi T�rk mitolojisinde yer alan yarat�c� tanr� fig�r� hangisidir?:",
                          "16. T�rklerin �slamiyet �ncesinde kulland��� yaz� sistemi hangisidir?:",
                          "17. T�rklerin �slamiyet �ncesi dini inan� sisteminde do�a olaylar�n� temsil eden �amanlara ne ad verilirdi?:",
                          "18. T�rklerin �slamiyet �ncesinde ya�ad�klar� g��ebe hayat� d�zenleyen yaz�l� metin hangisidir?:",
                          "19. T�rklerin �slamiyet �ncesi sanat�nda �nemli bir yer tutan hayvan motifleri hangi sanat dal�nda kullan�lm��t�r?:",
                          "20. T�rklerin �slamiyet �ncesi h�k�mdarlar�na ne ad verilirdi?:",
                          "21. T�rkiye Sel�uklu Devleti'nin kurucusu kimdir?:",
                          "22. Anadolu Sel�uklu Devleti'nin ba�kenti hangi �ehirdir?:",
                          "23. Osmanl� Devleti'nin kurucusu kimdir?:",
                          "24. Osmanl� Devleti'nin ilk ba�kenti hangi �ehirdir?:",
                          "25. Osmanl� Devleti'nin fetih politikas�n�n merkezinde hangi �ehir bulunmaktad�r?:",
                          "26. Osmanl� Devleti'nin en geni� s�n�rlara ula�t��� d�nem hangisidir?:",
                          "27. Osmanl� Devleti'nin son d�neminde ger�ekle�en Tanzimat Reformlar� hangi d�neme denk gelir?:",
                          "28. Osmanl� Devleti'nin son d�neminde ger�ekle�en I. Me�rutiyet'in ilan tarihi nedir?:",
                          "29. Osmanl� Devleti'nin son d�neminde ger�ekle�en �stiklal Harbi'nin ba�lang�� tarihi nedir?:"};
                          
                          

    char secenekler[][100] = { "a) 21 Temmuz 1909, Sultan II. Mahmud", "b) 23 Aral�k 1876, Sultan II. Abd�lhamid", "c) 12 Temmuz 1908, Sultan V. Murad","d) 19 Mart 1914, Sultan Mehmet Re�ad",
                               "a) 15 Haziran 1826", "b) 31 Mart 1909","c) 23 Nisan 1920","d) 24 Temmuz 1908",
                               "a) 18 �ubat 1856","b) 5 Ocak 1876","c) 3 Kas�m 1839","d) 23 Temmuz 1908",
                               "a) Osmanl� �ttihad ve Terakki Cemiyeti","b) Osmanl� Ahrar F�rkas�","c) Osmanl� H�rriyet ve �tilaf F�rkas�","d) Osmanl� M�dafaa-i Hukuk Cemiyeti",
                               "a) �n�n� Zaferi","b) Sakarya Meydan Muharebesi","c) B�y�k Taarruz Zaferi","d) Dumlup�nar Zaferi",
                               "a) 23 Nisan 1920","b) 29 Ekim 1923","c) 19 May�s 1919","d) 24 Temmuz 1923",
                               "a) �smet �n�n�","b) Celal Bayar","c) Mustafa Kemal Atat�rk","d) Refik Saydam",
                               "a) 20 Nisan 1924","b) 23 Nisan 1920","c) 29 Ekim 1923","d) 19 May�s 1919",
                               "a) Nezihe Muhiddin","b) Sabiha Zekeriya Sertel","c) Hat� ��rpan","d) T�rkan Saylan",
                               "a) 13 Ekim 1923, Ankara","b) 29 Ekim 1923, �stanbul","c) 24 Temmuz 1923, Lozan","d) 10 A�ustos 1920, Sivas",
                               "a) Hun �mparatorlu�u D�nemi","b) G�kt�rk Devleti D�nemi","c) Uygur Devleti D�nemi","d) Karahanl� Devleti D�nemi",
                               "a) G�kt�rk Devleti","b) Sel�uklu Devleti","c) Timur �mparatorlu�u","d) Cengiz Han �mparatorlu�u",
                               "a) Hun �mparatorlu�u D�nemi","b) G�kt�rk Devleti D�nemi","c) Uygur Devleti D�nemi","d) Karahanl� Devleti D�nemi",
                               "a) Gazneliler","b) Karahanl�lar","c) Sel�uklular","d) �lhanl�lar",
							   "a) Tengri","b) �lgen","c) Umay","d) Erlik",
							   "a) Arap Alfabesi","b) Kiril Alfabesi","c) Yunan Alfabesi","d) G�kt�rk Alfabesi",
							   "a) Kamlar","b) Dervi�ler","c) Hakanlar", "d) Ulemalar",
							   "a) Orhun Yaz�tlar�","b) Divan-� L�gat-it T�rk","c) �skendername","d) K�ltigin Yaz�t�",
							   "a) Mozaik","b) Minyat�r","c) Ebru","d) Oymac�l�k",
							   "a) Sultan","b) Emir","c) Han","d) Bey",
							   "a) Alparslan","b) Melik�ah","c) �zzeddin Keykavus","d) S�leyman �ah",
							   "a) �stanbul","b) Konya","c) Ankara","d) �zmir",
							   "a) Orhan Gazi","b) Fatih Sultan Mehmet","c) Osman Bey","d) Murad H�davendigar",
							   "a) Edirne","b) Bursa","c) �stanbul","d) Ankara",
							   "a) �stanbul","b) Bursa","c) Edirne","d) Amasya",
							   "a) I. Murad D�nemi","b) II. Bayezid D�nemi","c) I. Mehmet D�nemi","d) Kanuni Sultan S�leyman D�nemi",
							   "a) I. Abd�lhamid","b) II. Mahmud","c) II. Abd�lhamid","d) II. Me�rutiyet",
							   "a) 23 Temmuz 1908","b) 24 Temmuz 1908","c) 31 Mart 1909","d) 23 Nisan 1920",
							   "a) 15 May�s 1919", "b) 23 Nisan 1920","c) 30 A�ustos 1922","d) 29 Ekim 1923"	};

    char cevaplar[] = {'b', 'a', 'c', 'a', 'd', 'b', 'c', 'a', 'a', 'c', 'a', 'a', 'd', 'b', 'a', 'd', 'a', 'd', 'd', 'c', 'a', 'b', 'c', 'b', 'a', 'd', 'd', 'a', 'a'};
    
     
      char tahmin;
      int dogruSayisi = 0;
      int yanlisSayisi = 0;
      
      
    printf("B�LG� YARI�MASI\n\n");

    for (int i = 0; i < sizeof(sorular) / sizeof(sorular[0]); i++)
    {
        printf("%s\n", sorular[i]);

        for (int j = i * 4; j < (i * 4) + 4; j++)
        {
            printf("%s\n", secenekler[j]);
        }

       
  int gecerliCevap = 0; // Cevab�n ge�erli olup olmad���n� kontrol etmek i�in bir bayrak
 
  do {
    printf("Cevab�n�z: ");
    tahmin = getchar();
    tahmin = tolower(tahmin);

    if (tahmin == '\n') {
        printf("\nHatal� giri�! Cevap bo� b�rak�lamaz.\n**Yeniden denemek i�in Enter'a bas�n**");
        while (getchar() != '\n'); // �nceki giri�i tamamen oku
    } else if (tahmin != 'a' && tahmin != 'b' && tahmin != 'c' && tahmin != 'd') {
        printf("Hatal� giri�! Ge�erli bir cevap giriniz (a, b, c veya d).\n");
        while (getchar() != '\n'); // �nceki giri�i tamamen oku
    } else {
        gecerliCevap = 1; // Cevap ge�erli oldu�unda bayra�� i�aretle
    }
} while (!gecerliCevap);

while (getchar() != '\n'); // Kullan�c�n�n cevab�n� tamamen oku






    if (tahmin == cevaplar[i]) {
        printf("Do�ru cevap!\n\n");
        dogruSayisi++;
    } else {
        printf("Yanl�� cevap!\n\n");
        yanlisSayisi++;
    }
}

     	
     
    
     char beklenenTus = 'x';
     char tus;
     
     
    printf("*******************************\n");
    printf("\nSONU�: DO�RU: %d, YANLI�: %d\n", dogruSayisi, yanlisSayisi);
    printf("\n*******************************\n");
     
    
        printf("\n***Oyun bitti! ��kmak i�in 'X' tu�una bas�n...***\n");
      

    do {
        tus = getch(); // Bir tu�a bas�lmas�n� bekler
    } 
	while (tus != beklenenTus); // Beklenen tu�a bas�lmad��� s�rece d�ng� devam eder
    
    printf("Programdan ��kmay� se�tiniz!\n");

 
    return 0;
}

