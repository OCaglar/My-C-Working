#include<windows.h>
#include<mmsystem.h>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<cstdlib>
#include"unistd.h"
#include"test1.h"
#define pi 3.141592654


void test1::showinfos99(){
	
	
	double dT;
	int no,secim;
	int genislik=80;
	int yukseklik=25;
	int x=0,y=0;
	
	
		
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	
	char sahne[10][3];
	
	
	for (int i=1;i<5;++i){
		
		system ("cls");
		printf("\n\n1. ve 2. periyot olculeri arasi yukseklik farklari???");
		printf("\n\n\t%i.Yukseklik  fark degeri==>",i);
		scanf("%lf",&dT);
		
		if (i==1){
			system ("cls");
			
			sahne [8][2]="x";
			
			Sleep(2000);
		}
		if (i==2){
			system ("cls");
		
			Sleep(2000);
			
		}
		if (i==3){
		
			system ("cls");
		
			Sleep(2000);
		
		}
		if (i==4){
			system ("cls");
			
		}
	}
	
	
	
	Sleep(8000);
	
	
	
	
}
