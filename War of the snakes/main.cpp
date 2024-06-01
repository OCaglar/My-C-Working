#include<windows.h>
#include<mmsystem.h>
#include<string>
#include<fstream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<dos.h>
#include<Time.h>
#include<cstdlib>
#include"uygulama.h"

using namespace std;

enum RENK{
    RENK_SIYAH      = 0,
    RENK_KOYUMAVI   = 1,
    RENK_KOYUYESIL  = 2,
    RENK_AQUA       = 3,
    RENK_KAHVERENGI = 4,
    RENK_KOYUMOR    = 5,
    RENK_ACIKKAHVE  = 6,
    RENK_GRI        = 7,
    RENK_KOYUGRI    = 8,
    RENK_MAVI       = 9,
    RENK_YESIL      = 10,
    RENK_ACIKMAVI   = 11,
    RENK_KIRMIZI    = 12,
    RENK_MOR        = 13,
    RENK_SARI       = 14,
    RENK_BEYAZ      = 15,
};


enum YON{
    YON_SOL    = 1,
    YON_SAG    = 2,
    YON_YUKARI = 3,
    YON_ASAGI  = 4,
    YON_P      = 5,
    YON_LEFT   = 6,
    YON_RIGHT  = 7,
    YON_UP     = 8,
    YON_DOWN   = 9,
    YON_MENU   =10,
};

struct YilanHucre{
    int x;
    int y;
    YON yon;
    char karakter;
};

int kuyrukUzunlugu = 0;
const int maxYilanUzunlugu=80;
const int Igenislik=80;
const int Iyukseklik=25;
const int Sgenislik=80;
const int Syukseklik=25;
const int genislik=80;
const int yukseklik=25;
const char ascii=219;
char tuslar[256];
YilanHucre yilanKuyrugu[maxYilanUzunlugu];
YilanHucre yilanKuyrugu2[maxYilanUzunlugu];

void CIKIS (){
	
	int muzikler;
	system ("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t----->Gule Gule<-----\n");
	printf("\n\n\t\tWar of the Snake Oyununu oynadiginiz icin TESEKKURLER...");
	printf("\n\t\t\t\tHazirlayan:::Onur CAGLAR");
	printf("\n\t\t\t\t  Versiyon:::V1.0.1\n");
	if (muzikler!=5)
	PlaySound(TEXT("Music\\W2.wav"),NULL,SND_SYNC);
	system("pause");
}
void DONUS (){
	
	system("cls");
	int muzikler,zz=5;
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\tArkaplan verileri Temizleniyor...");
	printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if (muzikler!=5)
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	system("cls");
	
	
}
void ExeEkraniSinirlari(){

	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect); 
 
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 700, 550, TRUE);

	}
void gotoxy (int x,int y){
	
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void cerceve (){
	
	for (int i=0;i<=genislik;++i){
		printf("%c",ascii);
	}
	
	for (int i=0;i<=yukseklik;++i){
		gotoxy(genislik,i);
		printf("%c",ascii);
	}
	for (int i=0;i<=genislik-1;++i){
		gotoxy(genislik-i,yukseklik);
		printf("%c",ascii);	
	}
	for (int i=0;i<=yukseklik;++i){
		gotoxy(0,yukseklik-i);
		printf("%c",ascii);	
	}
}
void klavyeOku(char tuslar[]){
    for (int x=0; x < 256; x++)
    {
        tuslar[x] = (char)(GetAsyncKeyState(x)>>8);
    }
}
void klavyeKontrol(){


	
	klavyeOku(tuslar);

    if (tuslar[65] != 0)
    {
        yilanKuyrugu[0].yon=YON_SOL;
    }
    if (tuslar[68] != 0)
    {
        yilanKuyrugu[0].yon=YON_SAG;
    }
    if (tuslar[87] != 0)
    {
        yilanKuyrugu[0].yon=YON_YUKARI;
    }
    if (tuslar[83] != 0)
    {
        yilanKuyrugu[0].yon=YON_ASAGI;
    }
    if (tuslar[80] != 0)
    {
        yilanKuyrugu[0].yon=YON_P;
    }
    if (tuslar[80] != 0)
    {
        yilanKuyrugu2[0].yon=YON_P;
    }
    if (tuslar[37] != 0)
    {
        yilanKuyrugu2[0].yon=YON_LEFT;
    }
    if (tuslar[39] != 0)
    {
        yilanKuyrugu2[0].yon=YON_RIGHT;
    }
    if (tuslar[38] != 0)
    {
        yilanKuyrugu2[0].yon=YON_UP;
    }
    if (tuslar[40] != 0)
    {
        yilanKuyrugu2[0].yon=YON_DOWN;
    }
    
}
	



char sahne[80][25];
void kursoruGizle(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible=false;
    SetConsoleCursorInfo(out,&cursorInfo);
}
void kursoruAc(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible=true;
    SetConsoleCursorInfo(out,&cursorInfo);
}
void SahneyiCiz(){
	
	for (int y=0;y<=Syukseklik;++y){
		
		for (int x=0;x<=Sgenislik;++x){
		cout << sahne [x][y];	
		
	}	
		cout << endl;
	}
}
void SahneCevresi(){
	
	for (int x=0;x<=Sgenislik;++x){
		sahne [x][0]=ascii;	
		sahne [x][Syukseklik]=ascii;
	}	
	for (int y=0;y<=Syukseklik;++y){
		sahne [0][y]=ascii;
		sahne [Sgenislik][y]=ascii;
	}	
}
void SahneyiTemizle(){
    for (int y=0; y<Syukseklik ; y++){
        for (int x=0; x<Sgenislik ; x++){
            sahne[x][y]=' ';
        }

    }
}




char intro[80][25];
void INTRO (){
	
	
	//ekran kenarý çizildi...
	for (int x=0;x<=Igenislik;++x){
		intro [x][0]=ascii;	
		intro [x][Iyukseklik]=ascii;
	}	
	for (int y=0;y<=Iyukseklik;++y){
		intro [0][y]=ascii;
		intro [Igenislik][y]=ascii;
	}
	
	
	//ekrana logo çýkarýlýyor...
	//CAGLAR
	intro [27][4]=ascii;
	intro [28][4]=ascii;
	intro [29][4]=ascii;
	intro [32][4]=ascii;
	intro [35][4]=ascii;
	intro [36][4]=ascii;
	intro [37][4]=ascii;
	intro [38][4]=ascii;
	intro [40][4]=ascii;
	intro [45][4]=ascii;
	intro [48][4]=ascii;
	intro [49][4]=ascii;
	intro [50][4]=ascii;
	intro [51][4]=ascii;
	intro [27][5]=ascii;
	intro [31][5]=ascii;
	intro [33][5]=ascii;
	intro [35][5]=ascii;
	intro [40][5]=ascii;
	intro [44][5]=ascii;
	intro [46][5]=ascii;
	intro [48][5]=ascii;
	intro [49][5]=ascii;
	intro [51][5]=ascii;
	intro [27][6]=ascii;
	intro [31][6]=ascii;
	intro [33][6]=ascii;
	intro [35][6]=ascii;
	intro [40][6]=ascii;
	intro [44][6]=ascii;
	intro [46][6]=ascii;
	intro [48][6]=ascii;
	intro [49][6]=ascii;
	intro [50][6]=ascii;
	intro [51][6]=ascii;
	intro [27][7]=ascii;
	intro [31][7]=ascii;
	intro [32][7]=ascii;
	intro [33][7]=ascii;
	intro [35][7]=ascii;
	intro [37][7]=ascii;
	intro [38][7]=ascii;
	intro [40][7]=ascii;
	intro [44][7]=ascii;
	intro [45][7]=ascii;
	intro [46][7]=ascii;
	intro [48][7]=ascii;
	intro [49][7]=ascii;
	intro [27][8]=ascii;
	intro [31][8]=ascii;
	intro [33][8]=ascii;
	intro [35][8]=ascii;
	intro [38][8]=ascii;
	intro [40][8]=ascii;
	intro [44][8]=ascii;
	intro [46][8]=ascii;
	intro [48][8]=ascii;
	intro [50][8]=ascii;
	intro [27][9]=ascii;
	intro [28][9]=ascii;
	intro [29][9]=ascii;
	intro [31][9]=ascii;
	intro [33][9]=ascii;
	intro [35][9]=ascii;
	intro [36][9]=ascii;
	intro [37][9]=ascii;
	intro [38][9]=ascii;
	intro [40][9]=ascii;
	intro [41][9]=ascii;
	intro [42][9]=ascii;
	intro [44][9]=ascii;
	intro [46][9]=ascii;
	intro [48][9]=ascii;
	intro [51][9]=ascii;
	
	//ekran olusturuldu...
		for (int y=0;y<=Iyukseklik;++y){
		
		for (int x=0;x<=Igenislik;++x){
		cout << intro [x][y];	
		
	}	
		cout << endl;
	}
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	
	gotoxy(0,0);
	
	//ekran kenarý çizildi...
	for (int x=0;x<=Igenislik;++x){
		intro [x][0]=ascii;	
		intro [x][Iyukseklik]=ascii;
	}	
	for (int y=0;y<=Iyukseklik;++y){
		intro [0][y]=ascii;
		intro [Igenislik][y]=ascii;
	}
	
	//ekrana logo çýkarýlýyor...
	//CAGLAR
	intro [27][4]=ascii;
	intro [28][4]=ascii;
	intro [29][4]=ascii;
	intro [32][4]=ascii;
	intro [35][4]=ascii;
	intro [36][4]=ascii;
	intro [37][4]=ascii;
	intro [38][4]=ascii;
	intro [40][4]=ascii;
	intro [45][4]=ascii;
	intro [48][4]=ascii;
	intro [49][4]=ascii;
	intro [50][4]=ascii;
	intro [51][4]=ascii;
	intro [27][5]=ascii;
	intro [31][5]=ascii;
	intro [33][5]=ascii;
	intro [35][5]=ascii;
	intro [40][5]=ascii;
	intro [44][5]=ascii;
	intro [46][5]=ascii;
	intro [48][5]=ascii;
	intro [49][5]=ascii;
	intro [51][5]=ascii;
	intro [27][6]=ascii;
	intro [31][6]=ascii;
	intro [33][6]=ascii;
	intro [35][6]=ascii;
	intro [40][6]=ascii;
	intro [44][6]=ascii;
	intro [46][6]=ascii;
	intro [48][6]=ascii;
	intro [49][6]=ascii;
	intro [50][6]=ascii;
	intro [51][6]=ascii;
	intro [27][7]=ascii;
	intro [31][7]=ascii;
	intro [32][7]=ascii;
	intro [33][7]=ascii;
	intro [35][7]=ascii;
	intro [37][7]=ascii;
	intro [38][7]=ascii;
	intro [40][7]=ascii;
	intro [44][7]=ascii;
	intro [45][7]=ascii;
	intro [46][7]=ascii;
	intro [48][7]=ascii;
	intro [49][7]=ascii;
	intro [27][8]=ascii;
	intro [31][8]=ascii;
	intro [33][8]=ascii;
	intro [35][8]=ascii;
	intro [38][8]=ascii;
	intro [40][8]=ascii;
	intro [44][8]=ascii;
	intro [46][8]=ascii;
	intro [48][8]=ascii;
	intro [50][8]=ascii;
	intro [27][9]=ascii;
	intro [28][9]=ascii;
	intro [29][9]=ascii;
	intro [31][9]=ascii;
	intro [33][9]=ascii;
	intro [35][9]=ascii;
	intro [36][9]=ascii;
	intro [37][9]=ascii;
	intro [38][9]=ascii;
	intro [40][9]=ascii;
	intro [41][9]=ascii;
	intro [42][9]=ascii;
	intro [44][9]=ascii;
	intro [46][9]=ascii;
	intro [48][9]=ascii;
	intro [51][9]=ascii;
	//GAMES:
	intro [28][13]=ascii;
	intro [29][13]=ascii;
	intro [30][13]=ascii;
	intro [31][13]=ascii;
	intro [34][13]=ascii;
	intro [37][13]=ascii;
	intro [41][13]=ascii;
	intro [43][13]=ascii;
	intro [44][13]=ascii;
	intro [45][13]=ascii;
	intro [46][13]=ascii;
	intro [48][13]=ascii;
	intro [49][13]=ascii;
	intro [50][13]=ascii;
	intro [28][14]=ascii;
	intro [33][14]=ascii;
	intro [35][14]=ascii;
	intro [37][14]=ascii;
	intro [38][14]=ascii;
	intro [40][14]=ascii;
	intro [41][14]=ascii;
	intro [43][14]=ascii;
	intro [48][14]=ascii;
	intro [28][15]=ascii;
	intro [33][15]=ascii;
	intro [35][15]=ascii;
	intro [37][15]=ascii;
	intro [39][15]=ascii;
	intro [41][15]=ascii;
	intro [43][15]=ascii;
	intro [48][15]=ascii;
	intro [28][16]=ascii;
	intro [30][16]=ascii;
	intro [31][16]=ascii;
	intro [33][16]=ascii;
	intro [34][16]=ascii;
	intro [35][16]=ascii;
	intro [37][16]=ascii;
	intro [41][16]=ascii;
	intro [43][16]=ascii;
	intro [44][16]=ascii;
	intro [45][16]=ascii;
	intro [48][16]=ascii;
	intro [49][16]=ascii;
	intro [50][16]=ascii;
	intro [28][17]=ascii;
	intro [31][17]=ascii;
	intro [33][17]=ascii;
	intro [35][17]=ascii;
	intro [37][17]=ascii;
	intro [41][17]=ascii;
	intro [43][17]=ascii;
	intro [50][17]=ascii;
	intro [28][18]=ascii;
	intro [29][18]=ascii;
	intro [30][18]=ascii;
	intro [31][18]=ascii;
	intro [33][18]=ascii;
	intro [35][18]=ascii;
	intro [37][18]=ascii;
	intro [41][18]=ascii;
	intro [43][18]=ascii;
	intro [44][18]=ascii;
	intro [45][18]=ascii;
	intro [46][18]=ascii;
	intro [48][18]=ascii;
	intro [49][18]=ascii;
	intro [50][18]=ascii;
	
	//ekran olusturuldu...
		for (int y=0;y<=Iyukseklik;++y){
		
		for (int x=0;x<=Igenislik;++x){
		cout << intro [x][y];	
		
	}	
		cout << endl;
	}
	
	
	
	printf("\n\t\t\t\tEN IYISI YADA ASLA...");
	printf("\n\t\t\t  Baslamak icin lutfen bekleyin...");
	Sleep(200);
	PlaySound(TEXT("Music\\S2.wav"),NULL,SND_SYNC);
	Sleep(2000);
	system ("cls");
	
}
void YAKINDA (){
			
			int muzikler;
			if (muzikler!=5)
			PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC|SND_ASYNC);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t...Yakinda...");
			printf("\n\n\tBu kisim icin calismalar halen devam etmektedir anlayisiniz icin TESEKKURLER...");
			printf("\n\n\n\n\n");
			printf("Devam etmek icin herhangi bir tusa basin...");
			system("pause");
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			if (muzikler!=5)
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			system("cls");	
}
void HIKAYE(){
	
	int muzikler;
	if (muzikler!=5)
	PlaySound(TEXT("Music\\A2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	printf("\n\n\n\t\t\t\t-->HIKAYE<--");
	printf("\n\n\n\t\tWar of the Snakes oyunu aslinda, bir Kaya Pitonu ile Su");
	printf("\n\tYilani arasindaki amansiz mucadaleyi anlatiyor.Oyunda bir arena");
	printf("\n\ticinde bu iki yilan birbirlerini yok edip efsane yilan olmak");
	printf("\n\ticin olumune bir savasa girisiyor.");
	printf("\n\n\t\tIcinden kacisin mumkun olmadigi bu arenada korkaklik");
	printf("\n\tyapan ve kacmaya yeltenen taraf savasi ve canini kaybediyor.");
	printf("\n\tAyrica iki yilanda zamanin getirdigi ekstra zorluklarla ve");
	printf("\n\trakibiyle savasarak zaman icinde uzayan kuyrugunu kaptirmadan");
	printf("\n\trakibinin kuyrugunu yemeyi ve Efsanevi yilan olmayi amacliyor.");
	printf("\n\n\tEfsanevi yilan olup irkini onurlandirmak icin");
	printf("\n\tbu mucadeleye sen de ortak ol!!!");
	printf("\n\n\n\n\n\n");
	printf("  Devam etmek icin herhangi bir tusa basin...");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\tArka plan verileri Temizleniyor...");
	printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Sleep(1000);
	if (muzikler!=5)
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	system("cls");
}
void KONTROLLER (){
	
	int muzikler;
	if (muzikler!=5)
	PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC|SND_ASYNC);
	printf("\n\n\n\t\t\t\t-->KONTROLLER<--");
	printf("\n\n\t\t\tKAYA PITONU\t\tSU YILANI");
	printf("\n\n\tYukari=>\tW\t\t\tPage Up");
	printf("\n\tAsagi=> \tS\t\t\tPage Down");
	printf("\n\tSaga=>  \tD\t\t\tPage Left");
	printf("\n\tSola=>  \tA\t\t\tPage Right");
	printf("\n\n\n\tTuslari ile yilanlari kontrol edebilirsiniz...");
	printf("\n\n\n\tOyunu durdurmak icin\t: P");
	printf("\n\tAna menuye donmek icin\t: M");
	printf("\n\tOyundan cikmak icin\t: ESC");
	printf("\n\n\t\t\tIYI EGLENCELER...");
	printf("\n\n\n\n");
	printf("  Devam etmek icin herhangi bir tusa basin...");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\tArka plan verileri Temizleniyor...");
	printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Sleep(1000);
	if (muzikler!=5)
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	system("cls");
}
void MUZIKLER (){
	
	int muzikler;
	if (muzikler!=5)
	PlaySound(TEXT("Music\\A2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	printf("\n\n\t\t\t-->MUZIKLER<--");
	printf("\n\n\tAna ekran muzigi:");
	printf("\n\twww.youtube.com/watch?v=BO61sWAyIEI");
	printf("\n\n\tIntrodaki sesler:");
	printf("\n\twww.youtube.com/watch?v=qGlDE2keCi4");
	printf("\n\n\tAra menulerdeki muzikler:");
	printf("\n\twww.youtube.com/watch?v=oTfzlYf5JH8");
	printf("\n\n\tSavas esnasindaki muzik:");
	printf("\n\twww.youtube.com/watch?v=JUIA6jAi24s");
	printf("\n\n\tSavas baslama sesi:");
	printf("\n\twww.youtube.com/watch?v=0jXAmFYQpXQ");
	printf("\n\n\tHatali tuslama sesi:");
	printf("\n\twww.youtube.com/watch?v=0lhhrUuw2N8");
	printf("\n\n\tOyun kapanma sesi:");
	printf("\n\twww.youtube.com/watch?v=A8wK-vhuWog");
	printf("\n");
	printf("  Devam etmek icin herhangi bir tusa basin...");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\tArka plan verileri Temizleniyor...");
	printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Sleep(1000);
	if (muzikler!=5)
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	system("cls");		
}
void DEFAULT (){
	
	int muzikler;
	SahneyiTemizle();
			gotoxy(0,0);
    	  	SahneyiCiz();
			cerceve ();
	printf("\n\n\n\n\n\n\n\n\n\n\n\tHATALI VEYA YANLIS BIR TUSLAMA YAPTINIZ...");
	printf("\n\t\tLUTFEN TEKRAR DENEYIN...");
		if (muzikler!=5)
	PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\tArkaplan verileri Temizleniyor...");
	printf("\n\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Sleep(1000);
	if (muzikler!=5)
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	system("cls");	
}
void Secenekler(){
	
	printf("\n\t\t\t\t--->WAR OF THE SNAKES<---\n\n\n");
	printf("\n\t1))Hikaye");
	printf("\n\t2))Antreman");
	printf("\n\t3))Yeni Oyun");
	printf("\n\t4))Kontroller");
	printf("\n\t5))Ayarlar");
	printf("\n\t6))Muzikler");
	printf("\n\n\t7))Cikis");
	printf("\n\n\tNOT:::Yukarida bulunan kisimlardan birini secmeli ve seciminizi,\n\tAsagida bulunan Seciminiz kismina sectiginiz kismin\n\tyaninda belirtilen sayiyi girin...");
	
}
void BASLIYOR(){
	
	int muzikler;
	system("cls");
	
	if (muzikler!=5)
	PlaySound(TEXT("Music\\G2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	Sleep(1000);
	SahneyiTemizle();
  	SahneCevresi();
  	
  	//ekrana yazý çýkarýlýyor...
	//BASLIYOR
	sahne [27][12]=ascii;
	sahne [28][12]=ascii;
	sahne [29][12]=ascii;
	sahne [32][12]=ascii;
	sahne [35][12]=ascii;
	sahne [36][12]=ascii;
	sahne [37][12]=ascii;
	sahne [39][12]=ascii;
	sahne [43][12]=ascii;
	sahne [45][12]=ascii;
	sahne [47][12]=ascii;
	sahne [49][12]=ascii;
	sahne [50][12]=ascii;
	sahne [51][12]=ascii;
	sahne [53][12]=ascii;
	sahne [54][12]=ascii;
	sahne [55][12]=ascii;
	sahne [27][13]=ascii;
	sahne [29][13]=ascii;
	sahne [31][13]=ascii;
	sahne [33][13]=ascii;
	sahne [35][13]=ascii;
	sahne [39][13]=ascii;
	sahne [43][13]=ascii;
	sahne [45][13]=ascii;
	sahne [47][13]=ascii;
	sahne [49][13]=ascii;
	sahne [51][13]=ascii;
	sahne [53][13]=ascii;
	sahne [55][13]=ascii;
	sahne [27][14]=ascii;
	sahne [29][14]=ascii;
	sahne [31][14]=ascii;
	sahne [33][14]=ascii;
	sahne [35][14]=ascii;
	sahne [39][14]=ascii;
	sahne [43][14]=ascii;
	sahne [46][14]=ascii;
	sahne [49][14]=ascii;
	sahne [51][14]=ascii;
	sahne [53][14]=ascii;
	sahne [54][14]=ascii;
	sahne [55][14]=ascii;
	sahne [27][15]=ascii;
	sahne [28][15]=ascii;
	sahne [29][15]=ascii;
	sahne [31][15]=ascii;
	sahne [32][15]=ascii;
	sahne [33][15]=ascii;
	sahne [35][15]=ascii;
	sahne [36][15]=ascii;
	sahne [37][15]=ascii;
	sahne [39][15]=ascii;
	sahne [43][15]=ascii;
	sahne [45][15]=ascii;
	sahne [49][15]=ascii;
	sahne [51][15]=ascii;
	sahne [53][15]=ascii;
	sahne [54][15]=ascii;
	sahne [27][16]=ascii;
	sahne [29][16]=ascii;
	sahne [31][16]=ascii;
	sahne [33][16]=ascii;
	sahne [37][16]=ascii;
	sahne [39][16]=ascii;
	sahne [43][16]=ascii;
	sahne [46][16]=ascii;
	sahne [49][16]=ascii;
	sahne [51][16]=ascii;
	sahne [53][16]=ascii;
	sahne [55][16]=ascii;
	sahne [27][17]=ascii;
	sahne [28][17]=ascii;
	sahne [29][17]=ascii;
	sahne [31][17]=ascii;
	sahne [33][17]=ascii;
	sahne [35][17]=ascii;
	sahne [36][17]=ascii;
	sahne [37][17]=ascii;
	sahne [39][17]=ascii;
	sahne [40][17]=ascii;
	sahne [41][17]=ascii;
	sahne [43][17]=ascii;
	sahne [45][17]=ascii;
	sahne [49][17]=ascii;
	sahne [50][17]=ascii;
	sahne [51][17]=ascii;
	sahne [53][17]=ascii;
	sahne [55][17]=ascii;
	
	
	
	sahne [34][20]=ascii;
	sahne [35][20]=ascii;
	sahne [34][21]=ascii;
	sahne [35][21]=ascii;
	
	gotoxy(0,0);
    SahneyiCiz();
	Sleep(4000);
	
	
	SahneyiTemizle();
  	SahneCevresi();
  	
  	//ekrana yazý çýkarýlýyor...
	//BASLIYOR
	sahne [27][12]=ascii;
	sahne [28][12]=ascii;
	sahne [29][12]=ascii;
	sahne [32][12]=ascii;
	sahne [35][12]=ascii;
	sahne [36][12]=ascii;
	sahne [37][12]=ascii;
	sahne [39][12]=ascii;
	sahne [43][12]=ascii;
	sahne [45][12]=ascii;
	sahne [47][12]=ascii;
	sahne [49][12]=ascii;
	sahne [50][12]=ascii;
	sahne [51][12]=ascii;
	sahne [53][12]=ascii;
	sahne [54][12]=ascii;
	sahne [55][12]=ascii;
	sahne [27][13]=ascii;
	sahne [29][13]=ascii;
	sahne [31][13]=ascii;
	sahne [33][13]=ascii;
	sahne [35][13]=ascii;
	sahne [39][13]=ascii;
	sahne [43][13]=ascii;
	sahne [45][13]=ascii;
	sahne [47][13]=ascii;
	sahne [49][13]=ascii;
	sahne [51][13]=ascii;
	sahne [53][13]=ascii;
	sahne [55][13]=ascii;
	sahne [27][14]=ascii;
	sahne [29][14]=ascii;
	sahne [31][14]=ascii;
	sahne [33][14]=ascii;
	sahne [35][14]=ascii;
	sahne [39][14]=ascii;
	sahne [43][14]=ascii;
	sahne [46][14]=ascii;
	sahne [49][14]=ascii;
	sahne [51][14]=ascii;
	sahne [53][14]=ascii;
	sahne [54][14]=ascii;
	sahne [55][14]=ascii;
	sahne [27][15]=ascii;
	sahne [28][15]=ascii;
	sahne [29][15]=ascii;
	sahne [31][15]=ascii;
	sahne [32][15]=ascii;
	sahne [33][15]=ascii;
	sahne [35][15]=ascii;
	sahne [36][15]=ascii;
	sahne [37][15]=ascii;
	sahne [39][15]=ascii;
	sahne [43][15]=ascii;
	sahne [45][15]=ascii;
	sahne [49][15]=ascii;
	sahne [51][15]=ascii;
	sahne [53][15]=ascii;
	sahne [54][15]=ascii;
	sahne [27][16]=ascii;
	sahne [29][16]=ascii;
	sahne [31][16]=ascii;
	sahne [33][16]=ascii;
	sahne [37][16]=ascii;
	sahne [39][16]=ascii;
	sahne [43][16]=ascii;
	sahne [46][16]=ascii;
	sahne [49][16]=ascii;
	sahne [51][16]=ascii;
	sahne [53][16]=ascii;
	sahne [55][16]=ascii;
	sahne [27][17]=ascii;
	sahne [28][17]=ascii;
	sahne [29][17]=ascii;
	sahne [31][17]=ascii;
	sahne [33][17]=ascii;
	sahne [35][17]=ascii;
	sahne [36][17]=ascii;
	sahne [37][17]=ascii;
	sahne [39][17]=ascii;
	sahne [40][17]=ascii;
	sahne [41][17]=ascii;
	sahne [43][17]=ascii;
	sahne [45][17]=ascii;
	sahne [49][17]=ascii;
	sahne [50][17]=ascii;
	sahne [51][17]=ascii;
	sahne [53][17]=ascii;
	sahne [55][17]=ascii;
	
	
	
	sahne [34][20]=ascii;
	sahne [35][20]=ascii;
	sahne [34][21]=ascii;
	sahne [35][21]=ascii;
	
	
	sahne [39][20]=ascii;
	sahne [40][20]=ascii;
	sahne [39][21]=ascii;
	sahne [40][21]=ascii;
	
	
	gotoxy(0,0);
    SahneyiCiz();
	Sleep(4000);
	
	
	SahneyiTemizle();
  	SahneCevresi();
  	
  	//ekrana yazý çýkarýlýyor...
	//BASLIYOR
	sahne [27][12]=ascii;
	sahne [28][12]=ascii;
	sahne [29][12]=ascii;
	sahne [32][12]=ascii;
	sahne [35][12]=ascii;
	sahne [36][12]=ascii;
	sahne [37][12]=ascii;
	sahne [39][12]=ascii;
	sahne [43][12]=ascii;
	sahne [45][12]=ascii;
	sahne [47][12]=ascii;
	sahne [49][12]=ascii;
	sahne [50][12]=ascii;
	sahne [51][12]=ascii;
	sahne [53][12]=ascii;
	sahne [54][12]=ascii;
	sahne [55][12]=ascii;
	sahne [27][13]=ascii;
	sahne [29][13]=ascii;
	sahne [31][13]=ascii;
	sahne [33][13]=ascii;
	sahne [35][13]=ascii;
	sahne [39][13]=ascii;
	sahne [43][13]=ascii;
	sahne [45][13]=ascii;
	sahne [47][13]=ascii;
	sahne [49][13]=ascii;
	sahne [51][13]=ascii;
	sahne [53][13]=ascii;
	sahne [55][13]=ascii;
	sahne [27][14]=ascii;
	sahne [29][14]=ascii;
	sahne [31][14]=ascii;
	sahne [33][14]=ascii;
	sahne [35][14]=ascii;
	sahne [39][14]=ascii;
	sahne [43][14]=ascii;
	sahne [46][14]=ascii;
	sahne [49][14]=ascii;
	sahne [51][14]=ascii;
	sahne [53][14]=ascii;
	sahne [54][14]=ascii;
	sahne [55][14]=ascii;
	sahne [27][15]=ascii;
	sahne [28][15]=ascii;
	sahne [29][15]=ascii;
	sahne [31][15]=ascii;
	sahne [32][15]=ascii;
	sahne [33][15]=ascii;
	sahne [35][15]=ascii;
	sahne [36][15]=ascii;
	sahne [37][15]=ascii;
	sahne [39][15]=ascii;
	sahne [43][15]=ascii;
	sahne [45][15]=ascii;
	sahne [49][15]=ascii;
	sahne [51][15]=ascii;
	sahne [53][15]=ascii;
	sahne [54][15]=ascii;
	sahne [27][16]=ascii;
	sahne [29][16]=ascii;
	sahne [31][16]=ascii;
	sahne [33][16]=ascii;
	sahne [37][16]=ascii;
	sahne [39][16]=ascii;
	sahne [43][16]=ascii;
	sahne [46][16]=ascii;
	sahne [49][16]=ascii;
	sahne [51][16]=ascii;
	sahne [53][16]=ascii;
	sahne [55][16]=ascii;
	sahne [27][17]=ascii;
	sahne [28][17]=ascii;
	sahne [29][17]=ascii;
	sahne [31][17]=ascii;
	sahne [33][17]=ascii;
	sahne [35][17]=ascii;
	sahne [36][17]=ascii;
	sahne [37][17]=ascii;
	sahne [39][17]=ascii;
	sahne [40][17]=ascii;
	sahne [41][17]=ascii;
	sahne [43][17]=ascii;
	sahne [45][17]=ascii;
	sahne [49][17]=ascii;
	sahne [50][17]=ascii;
	sahne [51][17]=ascii;
	sahne [53][17]=ascii;
	sahne [55][17]=ascii;
	
	
	
	sahne [34][20]=ascii;
	sahne [35][20]=ascii;
	sahne [34][21]=ascii;
	sahne [35][21]=ascii;
	
	
	sahne [39][20]=ascii;
	sahne [40][20]=ascii;
	sahne [39][21]=ascii;
	sahne [40][21]=ascii;
	
	
	sahne [44][20]=ascii;
	sahne [45][20]=ascii;
	sahne [44][21]=ascii;
	sahne [45][21]=ascii;
	
	gotoxy(0,0);
    SahneyiCiz();
	Sleep(4000);
	if (muzikler!=5)
	PlaySound(TEXT("Music\\G1.wav"),NULL,SND_SYNC);
}
void AYARLAR(){
	
	int muzikler;
	if (muzikler!=5)
	PlaySound(TEXT("Music\\A2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	printf("\n\n\n\t\t\t\t-->AYARLAR<--");
	printf("\n\n\n\t1))Karakter secimi");
	printf("\n\n\t2))Muzigi ac/kapa");
	printf("\n\n\t3))Ekran Renk Secimi");
	printf("\n\n\t4))Oyun hizi ayarlama");
	printf("\n\n\t5))Ana menuye donus");
	printf("\n\n\n\tSeciminiz:==>");
}
void SURE (){
	
	
	int surebitti=1;
	printf("\n***Her 15 saniyede bir kuyruk eklenir...\n");
	for (int timer=15;surebitti<timer;timer--){
		
		printf("_%i_",timer);
		
	}
		
	
}



void yilanOlustur(int karakter1){
    kuyrukUzunlugu=1;
	
    yilanKuyrugu[0].x = 20;
    yilanKuyrugu[0].y = 12;
    yilanKuyrugu[0].yon = YON_SOL;
    yilanKuyrugu[0].karakter = karakter1;

}
void yilaniSahneyeYerlestir(){
    for (int i=0; i< kuyrukUzunlugu; i++)
    {
        int x = yilanKuyrugu[i].x;
        int y = yilanKuyrugu[i].y;
        sahne[x][y] = yilanKuyrugu[i].karakter;
    }
}
void yilaniHareketEttir(){
    for (int i=0; i< kuyrukUzunlugu; i++)
    {
        switch(yilanKuyrugu[i].yon)
        {
        case YON_SAG:
            yilanKuyrugu[i].x++;
            break;
        case YON_SOL:
            yilanKuyrugu[i].x--;
            break;
        case YON_ASAGI:
            yilanKuyrugu[i].y++;
            break;
        case YON_YUKARI:
            yilanKuyrugu[i].y--;
            break;
       
        }
    }
    for (int i = kuyrukUzunlugu -1; i>0 ; i--)
    {
        yilanKuyrugu[i].yon = yilanKuyrugu[i-1].yon;
    }
}


void yilanOlustur2(int karakter2){
	
	kuyrukUzunlugu=1;
    
    yilanKuyrugu2[0].x = 60;
    yilanKuyrugu2[0].y = 12;
    yilanKuyrugu2[0].yon = YON_RIGHT;
    yilanKuyrugu2[0].karakter = karakter2;
}
void yilaniSahneyeYerlestir2(){
	
	for (int i=0; i< kuyrukUzunlugu; i++)
    {
        int x = yilanKuyrugu2[i].x;
        int y = yilanKuyrugu2[i].y;
        sahne[x][y] = yilanKuyrugu2[i].karakter;
    }
}
void yilaniHareketEttir2(){
	
	for (int i=0; i< kuyrukUzunlugu; i++)
    {
        switch(yilanKuyrugu2[i].yon)
        {
        
        case YON_RIGHT:
            yilanKuyrugu2[i].x++;
            break;
        case YON_LEFT:
            yilanKuyrugu2[i].x--;
            break;
        case YON_DOWN:
            yilanKuyrugu2[i].y++;
            break;
        case YON_UP:
            yilanKuyrugu2[i].y--;
            break;
       
        }
    }
    for (int i = kuyrukUzunlugu -1; i>0 ; i--)
    {
        yilanKuyrugu2[i].yon = yilanKuyrugu2[i-1].yon;
    }
}




int main(int argc, char** argv) {
	
	int bs = 30,karakter2=178,karakter1=254,muzikler,ilk,sec,zz=0;
	char secim;
	ExeEkraniSinirlari();
	kursoruGizle();
	INTRO();
	cerceve();
	printf("\n\n\t\t\t\t    -->HOSGELDINIZ<--");
	ILK:
	if (zz==5) {
		cerceve();
		printf("\n\n\t\t\t\t ->TEKRAR HOSGELDINIZ<-");
	}
	if (muzikler!=5)
	PlaySound(TEXT("Music\\M1.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	Secenekler();
	kursoruAc();
	printf("\n\n\n\tSeciminiz==>");
	scanf("%i",&sec);
	switch (sec){
		case 1:
			system("cls");
			cerceve();
			HIKAYE();
			zz=5;
			goto ILK;
			break;
		case 2:
			kursoruGizle();
			BASLIYOR();
			yilanOlustur(karakter1);
			PlaySound(TEXT("Music\\M2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
			SURE ();	
    		while (true){
      		 	SahneyiTemizle();
      		  	SahneCevresi();
      			klavyeKontrol();
      			yilaniHareketEttir();
      			for (int y=0;y<=Syukseklik;++y){
      			
      			for(int x=0;x<=Sgenislik;x=x+80){
      				if(yilanKuyrugu[0].y==y&&yilanKuyrugu[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tKAYBETTIN...");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
				  
				  for (int x=0;x<=Sgenislik;++x){
      			
      			for(int y=0;y<=Syukseklik;y=y+80){
      				if(yilanKuyrugu[0].y==y&&yilanKuyrugu[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tKAYBETTIN...");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
				  if (tuslar[77] != 0)
    {
    	DONUS();
    	goto ILK;
    	
    }
    if (tuslar[27] != 0)
    {
    	CIKIS();
    	goto SON;
    	
    }
      			
      			
        		yilaniSahneyeYerlestir();
      			
				gotoxy(0,0);
    	  		SahneyiCiz();
      			Sleep(bs);
      			
			}
			
   			
			CIKIS();
			
			break;	
		case 3:
			kursoruGizle();
			BASLIYOR();
			yilanOlustur(karakter1);
			yilanOlustur2(karakter2);
			PlaySound(TEXT("Music\\M2.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
				
    		while (true){
      		 	SahneyiTemizle();
      		  	SahneCevresi();
      			klavyeKontrol();
      			
      			yilaniHareketEttir();
      			yilaniHareketEttir2();
      			
      			for (int y=0;y<=Syukseklik;++y){
      			
      			for(int x=0;x<=Sgenislik;x=x+80){
      				if(yilanKuyrugu2[0].y==y&&yilanKuyrugu2[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tSU YILANI KAYBETTIN");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
				  
				  for (int x=0;x<=Sgenislik;++x){
      			
      			for(int y=0;y<=Syukseklik;y=y+80){
      				if(yilanKuyrugu2[0].y==y&&yilanKuyrugu2[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tSU YILANI KAYBETTIN");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
      			
      			
      			
      			for (int y=0;y<=Syukseklik;++y){
      			
      			for(int x=0;x<=Sgenislik;x=x+80){
      				if(yilanKuyrugu[0].y==y&&yilanKuyrugu[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tKAYA PITONU KAYBETTIN");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
				  
				  for (int x=0;x<=Sgenislik;++x){
      			
      			for(int y=0;y<=Syukseklik;y=y+80){
      				if(yilanKuyrugu[0].y==y&&yilanKuyrugu[0].x==x){
      					
      					system ("Color 04");
      					
      					system("cls");
      					cerceve();
      					printf("\n\n\n\n\n\n\n\n\n");
      					printf("\n\t\t\t\tKAYA PITONU KAYBETTIN");
      					printf("\n\n\t\t\t\tOYUN BITTI...");
      					PlaySound(TEXT("Music\\O1.wav"),NULL, SND_FILENAME);
      					Sleep(1500);
      					zz=5;
      					system ("Color 07");
      					DONUS ();
      					goto ILK;
      					
					  }
   					  
				  }
				  }
				  
				  if (tuslar[77] != 0)
  				  {
  				  	DONUS();
  				  	goto ILK;
    	
 				   }
 				   if (tuslar[27] != 0)
				    {
 					   	CIKIS();
    					goto SON;
    			}
        		yilaniSahneyeYerlestir();
        		yilaniSahneyeYerlestir2();
      			
				gotoxy(0,0);
    	  		SahneyiCiz();
      			Sleep(bs);
      			}
			
   			
			CIKIS();
			
			break;
		case 4:
			system("cls");
			cerceve();
			KONTROLLER();
			zz=5;
			goto ILK;
			break;
		case 5:
			system("cls");
			int ayar;
			cerceve();
			AYARLAR();
			scanf("%i",&ayar);
			switch (ayar){
			case 1:
				SahneyiTemizle();
				gotoxy(0,0);
    	  		SahneyiCiz();
				cerceve ();
				int chsec,oysec;
				printf("\n\n\n\t\t\t\t-->KARAKER SECIMI<--");
				printf("\n\n\n\t1))x karakteri");
				printf("\n\t2))o karakteri");
				printf("\n\t3))%c karakteri",254);
				printf("\n\t4))%c karakteri",178);
				printf("\n\t5))+ karakteri");
				printf("\n\t6)). karakteri");
				printf("\n\t7))a karakteri");
				printf("\n\t8))* karakteri");
			
				printf("\n\n\n\t1 Numarali Oyuncu (wasd) ");
				printf("\n\t2 Numarali Oyuncu (yon tuslari) ");
				printf("\n\n\tHangi numarali Oyuncu icin?(1/2)==> ");
				scanf("%i",&oysec);
				if(oysec!=1&&oysec!=2) {
				
				DEFAULT();
				zz=5;
				goto ILK;
				}
				printf("\n\n\n\tSectiginiz karakter numarasi?:==>");
				scanf("%i",&chsec);
				switch (chsec){
					case 1:
						if (oysec==1){
							karakter1=88;//x	
						}
						if (oysec==2){
							karakter2=79; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 2:
			
						if (oysec==1){
							karakter1=79;
						}
						if (oysec==2){
							karakter2=79; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 3:
						if (oysec==1){
							karakter1=254;
						}
						if (oysec==2){
							karakter2=254; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 4:
						if (oysec==1){
							karakter1=178;
						}
						if (oysec==2){
							karakter2=178; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 5:
						if (oysec==1){
							karakter1=43;//+
						}
						if (oysec==2){
							karakter2=43; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 6:
						if (oysec==1){
							karakter1=46;//.
						}
						if (oysec==2){
							karakter2=46; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 7:
						if (oysec==1){
							karakter1=65;//.
						}
						if (oysec==2){
							karakter2=65; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					case 8:
						if (oysec==1){
							karakter1=42;//*
						}
						if (oysec==2){
							karakter2=42; 
						}
						else {
							printf("\n\tKarakter degisimi yapilamadi...");
						}
					break;
					default :
						DEFAULT();
					break;
		}
		break;
		case 2:
			SahneyiTemizle();
			gotoxy(0,0);
    	  	SahneyiCiz();
			cerceve ();
			char ackapa,ackapa1;
			if (muzikler!=5){
				
				printf("\n\n\n\t\t\t-->MUZIKLERI AYARLA<--");
				printf("\n\n\n\tMuzikleri kapatmak istegine emin misin(E/H)==>");
				scanf("%c",ackapa);
				if (ackapa=='E'||ackapa=='e'){
					muzikler=5;
					printf("\n\n\n\tMuzikler basariyla kapatildi...");
					zz=5;
					SahneyiTemizle();
					gotoxy(0,0);
    	  			SahneyiCiz();
					goto ILK;
				}
				else {
					printf("\n\n\n\tMuzikler kapatilmadi...");
					muzikler=0;
					zz=5;
					SahneyiTemizle();
					gotoxy(0,0);
    	  			SahneyiCiz();
					
					goto ILK;
				}
					}
			else {
				
				printf("\n\n\n\t\t\t-->MUZIKLERI AYARLA<--");
				printf("\n\n\n\tMuzikleri acmak istegine emin misin(E/H)==>");
				scanf("%c",ackapa1);
				if (ackapa1=='E'||ackapa1=='e'){
					printf("\n\n\n\tMuzikler basariyla acildi...");
					muzikler=0;
					zz=5;
					SahneyiTemizle();
					gotoxy(0,0);
    	  			SahneyiCiz();
					goto ILK;
				}
				else {
					printf("\n\n\n\tMuzikler acilamadi...");
					muzikler=5;
					zz=5;
					SahneyiTemizle();
					gotoxy(0,0);
    	  			SahneyiCiz();
					goto ILK;
				}
				
					}
		break;
		case 3:
			SahneyiTemizle();
			gotoxy(0,0);
    	  	SahneyiCiz();
			cerceve ();
			int arkaplan,yazirengi;
			printf("\n\n\n\t\t\t\t-->RENK SECIM EKRANI<--");
			printf("\n\n\n\tSecebileceginiz renkler:");
			printf("\n\n\tSIYAH      = 0\t\tKOYUGRI    = 8");
			printf("\n\tKOYUMAVI   = 1\t\tMAVI       = 9");
			printf("\n\tKOYUYESIL  = 2\t\tYESIL      = 10");
			printf("\n\tAQUA       = 3\t\tACIKMAVI   = 11");
			printf("\n\tKAHVERENGI = 4\t\tKIRMIZI    = 12");
			printf("\n\tKOYUMOR    = 5\t\tMOR        = 13");
			printf("\n\tACIKKAHVE  = 6\t\tSARI       = 14");
			printf("\n\tGRI        = 7\t\tBEYAZ      = 15");
			printf("\n\n\tArkaplan rengi icin sectiginiz deger?==>");
			scanf("%i",&arkaplan);
			printf("\n\n\tYazi rengi icin sectiginiz deger?==>");
			scanf("%i",&yazirengi);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), arkaplan * 16 + yazirengi);
			
		break;
		case 4:
			
			SahneyiTemizle();
			gotoxy(0,0);
    	  	SahneyiCiz();
			cerceve ();
			int hiz;
			printf("\n\n\n\t\tOYUN HIZI AYARLAMA");
			printf("\n\n\t1))Oyun hizini artir (pro)");
			printf("\n\t2))Oyun hizi normal seviyede(varsayilan)");
			printf("\n\t3))Oyun hizini azalt (ogrenci) ");
			printf("\n\t4))Oyunu icin  en yavas seviye (acemi)");
			printf("\n\n\n\tSeciminiz:==>");
			scanf("%i",&hiz);
			switch (hiz){
				case 1:
					printf("\n\tOyun hizi basariyla degistirildi...");
					Sleep(1500);
					bs=3;
					break;
				case 2:
					printf("\n\tOyun hizi basariyla degistirildi...");
					Sleep(1500);
					bs=30;
					break;
				case 3:
					printf("\n\tOyun hizi basariyla degistirildi...");
					Sleep(1500);
					bs=90;
					break;
				case 4:
					printf("\n\tOyun hizi basariyla degistirildi...");
					Sleep(1500);
					bs=150;
					break;
				default:
					int zz=5;
					DEFAULT ();
					goto ILK;
					break;
			}
			
			
		break;
		case 5:
			
			DONUS ();
      		goto ILK;
		break;
		default :
			DEFAULT();
		break;
		}	
		SahneyiTemizle();
		gotoxy(0,0);
    	SahneyiCiz();
			zz=5;
			goto ILK;
		break;
			
		case 6:
			system("cls");
			cerceve();
			MUZIKLER();
			zz=5;
			goto ILK;
			break;
		case 7:
			CIKIS();
			zz=5;
			goto SON;
			break;
		case 99:
			
			uygulama uygulama;
			uygulama.	showinfos99();
			
			break;
		default :
			system("cls");
			cerceve();
			DEFAULT();
			zz=5;
			goto ILK;
			break;
	}
	SON:
	return 0;
}
