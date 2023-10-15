#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "turkish");
     




    char sorular[][1000] = { "1. Osmanlý Devleti'nde ilk anayasa hangi tarih ve hangi padiþah döneminde ilan edilmiþtir?:  ",
                          "2. Osmanlý Devleti'nde Vaka-i Hayriye olarak bilinen olay ne zaman gerçekleþmiþtir?:",
                          "3. Tanzimat Fermaný ne zaman ilan edilmiþtir?:",
                          "4. Osmanlý Devleti'nin son döneminde kurulan ilk siyasi parti hangisidir?:",
                          "5. 30 Aðustos 1922'de hangi zafer kazanýlmýþtýr?:",
                          "6. Türkiye Cumhuriyeti'nin ilan edildiði tarih nedir?:",
                          "7. Türkiye Cumhuriyeti'nin ilk cumhurbaþkaný kimdir?:",
                          "8. Türkiye Cumhuriyeti'nin ilk anayasasý ne zaman kabul edilmiþtir?:",
                          "9. Türkiye'nin ilk kadýn milletvekili kimdir?:",
                          "10. Lozan Antlaþmasý hangi tarih ve hangi þehirde imzalanmýþtýr?:",
                          "11. Türklerin tarih sahnesine çýktýðý dönem hangisidir?:",
                          "12. Orhun Yazýtlarý hangi Türk devleti döneminde yazýlmýþtýr?:",
                          "13. Türklerin Ýslamiyet'i kabul ettiði dönem hangisidir?:",
                          "14. Türklerin Ýslamiyet'i kabul etmesinde etkili olan ilk Müslüman Türk devleti hangisidir?:",
                          "15. Ýslamiyet öncesi Türk mitolojisinde yer alan yaratýcý tanrý figürü hangisidir?:",
                          "16. Türklerin Ýslamiyet öncesinde kullandýðý yazý sistemi hangisidir?:",
                          "17. Türklerin Ýslamiyet öncesi dini inanç sisteminde doða olaylarýný temsil eden þamanlara ne ad verilirdi?:",
                          "18. Türklerin Ýslamiyet öncesinde yaþadýklarý göçebe hayatý düzenleyen yazýlý metin hangisidir?:",
                          "19. Türklerin Ýslamiyet öncesi sanatýnda önemli bir yer tutan hayvan motifleri hangi sanat dalýnda kullanýlmýþtýr?:",
                          "20. Türklerin Ýslamiyet öncesi hükümdarlarýna ne ad verilirdi?:",
                          "21. Türkiye Selçuklu Devleti'nin kurucusu kimdir?:",
                          "22. Anadolu Selçuklu Devleti'nin baþkenti hangi þehirdir?:",
                          "23. Osmanlý Devleti'nin kurucusu kimdir?:",
                          "24. Osmanlý Devleti'nin ilk baþkenti hangi þehirdir?:",
                          "25. Osmanlý Devleti'nin fetih politikasýnýn merkezinde hangi þehir bulunmaktadýr?:",
                          "26. Osmanlý Devleti'nin en geniþ sýnýrlara ulaþtýðý dönem hangisidir?:",
                          "27. Osmanlý Devleti'nin son döneminde gerçekleþen Tanzimat Reformlarý hangi döneme denk gelir?:",
                          "28. Osmanlý Devleti'nin son döneminde gerçekleþen I. Meþrutiyet'in ilan tarihi nedir?:",
                          "29. Osmanlý Devleti'nin son döneminde gerçekleþen Ýstiklal Harbi'nin baþlangýç tarihi nedir?:"};
                          
                          

    char secenekler[][100] = { "a) 21 Temmuz 1909, Sultan II. Mahmud", "b) 23 Aralýk 1876, Sultan II. Abdülhamid", "c) 12 Temmuz 1908, Sultan V. Murad","d) 19 Mart 1914, Sultan Mehmet Reþad",
                               "a) 15 Haziran 1826", "b) 31 Mart 1909","c) 23 Nisan 1920","d) 24 Temmuz 1908",
                               "a) 18 Þubat 1856","b) 5 Ocak 1876","c) 3 Kasým 1839","d) 23 Temmuz 1908",
                               "a) Osmanlý Ýttihad ve Terakki Cemiyeti","b) Osmanlý Ahrar Fýrkasý","c) Osmanlý Hürriyet ve Ýtilaf Fýrkasý","d) Osmanlý Müdafaa-i Hukuk Cemiyeti",
                               "a) Ýnönü Zaferi","b) Sakarya Meydan Muharebesi","c) Büyük Taarruz Zaferi","d) Dumlupýnar Zaferi",
                               "a) 23 Nisan 1920","b) 29 Ekim 1923","c) 19 Mayýs 1919","d) 24 Temmuz 1923",
                               "a) Ýsmet Ýnönü","b) Celal Bayar","c) Mustafa Kemal Atatürk","d) Refik Saydam",
                               "a) 20 Nisan 1924","b) 23 Nisan 1920","c) 29 Ekim 1923","d) 19 Mayýs 1919",
                               "a) Nezihe Muhiddin","b) Sabiha Zekeriya Sertel","c) Hatý Çýrpan","d) Türkan Saylan",
                               "a) 13 Ekim 1923, Ankara","b) 29 Ekim 1923, Ýstanbul","c) 24 Temmuz 1923, Lozan","d) 10 Aðustos 1920, Sivas",
                               "a) Hun Ýmparatorluðu Dönemi","b) Göktürk Devleti Dönemi","c) Uygur Devleti Dönemi","d) Karahanlý Devleti Dönemi",
                               "a) Göktürk Devleti","b) Selçuklu Devleti","c) Timur Ýmparatorluðu","d) Cengiz Han Ýmparatorluðu",
                               "a) Hun Ýmparatorluðu Dönemi","b) Göktürk Devleti Dönemi","c) Uygur Devleti Dönemi","d) Karahanlý Devleti Dönemi",
                               "a) Gazneliler","b) Karahanlýlar","c) Selçuklular","d) Ýlhanlýlar",
							   "a) Tengri","b) Ülgen","c) Umay","d) Erlik",
							   "a) Arap Alfabesi","b) Kiril Alfabesi","c) Yunan Alfabesi","d) Göktürk Alfabesi",
							   "a) Kamlar","b) Derviþler","c) Hakanlar", "d) Ulemalar",
							   "a) Orhun Yazýtlarý","b) Divan-ý Lügat-it Türk","c) Ýskendername","d) Kültigin Yazýtý",
							   "a) Mozaik","b) Minyatür","c) Ebru","d) Oymacýlýk",
							   "a) Sultan","b) Emir","c) Han","d) Bey",
							   "a) Alparslan","b) Melikþah","c) Ýzzeddin Keykavus","d) Süleyman Þah",
							   "a) Ýstanbul","b) Konya","c) Ankara","d) Ýzmir",
							   "a) Orhan Gazi","b) Fatih Sultan Mehmet","c) Osman Bey","d) Murad Hüdavendigar",
							   "a) Edirne","b) Bursa","c) Ýstanbul","d) Ankara",
							   "a) Ýstanbul","b) Bursa","c) Edirne","d) Amasya",
							   "a) I. Murad Dönemi","b) II. Bayezid Dönemi","c) I. Mehmet Dönemi","d) Kanuni Sultan Süleyman Dönemi",
							   "a) I. Abdülhamid","b) II. Mahmud","c) II. Abdülhamid","d) II. Meþrutiyet",
							   "a) 23 Temmuz 1908","b) 24 Temmuz 1908","c) 31 Mart 1909","d) 23 Nisan 1920",
							   "a) 15 Mayýs 1919", "b) 23 Nisan 1920","c) 30 Aðustos 1922","d) 29 Ekim 1923"	};

    char cevaplar[] = {'b', 'a', 'c', 'a', 'd', 'b', 'c', 'a', 'a', 'c', 'a', 'a', 'd', 'b', 'a', 'd', 'a', 'd', 'd', 'c', 'a', 'b', 'c', 'b', 'a', 'd', 'd', 'a', 'a'};
    
     
      char tahmin;
      int dogruSayisi = 0;
      int yanlisSayisi = 0;
      
      
    printf("BÝLGÝ YARIÞMASI\n\n");

    for (int i = 0; i < sizeof(sorular) / sizeof(sorular[0]); i++)
    {
        printf("%s\n", sorular[i]);

        for (int j = i * 4; j < (i * 4) + 4; j++)
        {
            printf("%s\n", secenekler[j]);
        }

       
  int gecerliCevap = 0; // Cevabýn geçerli olup olmadýðýný kontrol etmek için bir bayrak
 
  do {
    printf("Cevabýnýz: ");
    tahmin = getchar();
    tahmin = tolower(tahmin);

    if (tahmin == '\n') {
        printf("\nHatalý giriþ! Cevap boþ býrakýlamaz.\n**Yeniden denemek için Enter'a basýn**");
        while (getchar() != '\n'); // Önceki giriþi tamamen oku
    } else if (tahmin != 'a' && tahmin != 'b' && tahmin != 'c' && tahmin != 'd') {
        printf("Hatalý giriþ! Geçerli bir cevap giriniz (a, b, c veya d).\n");
        while (getchar() != '\n'); // Önceki giriþi tamamen oku
    } else {
        gecerliCevap = 1; // Cevap geçerli olduðunda bayraðý iþaretle
    }
} while (!gecerliCevap);

while (getchar() != '\n'); // Kullanýcýnýn cevabýný tamamen oku






    if (tahmin == cevaplar[i]) {
        printf("Doðru cevap!\n\n");
        dogruSayisi++;
    } else {
        printf("Yanlýþ cevap!\n\n");
        yanlisSayisi++;
    }
}

     	
     
    
     char beklenenTus = 'x';
     char tus;
     
     
    printf("*******************************\n");
    printf("\nSONUÇ: DOÐRU: %d, YANLIÞ: %d\n", dogruSayisi, yanlisSayisi);
    printf("\n*******************************\n");
     
    
        printf("\n***Oyun bitti! Çýkmak için 'X' tuþuna basýn...***\n");
      

    do {
        tus = getch(); // Bir tuþa basýlmasýný bekler
    } 
	while (tus != beklenenTus); // Beklenen tuþa basýlmadýðý sürece döngü devam eder
    
    printf("Programdan çýkmayý seçtiniz!\n");

 
    return 0;
}

