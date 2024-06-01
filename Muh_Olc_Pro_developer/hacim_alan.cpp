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
#include"hacim_alan.h"
#define pi 3.141592654


void hacim_alan::showinfos2(){
	
	
	int q,b,a;
	double H1,H2,H3,Zb,Vtoplam,F[8],hacim[8];
	double hacim1,hacim2,hacim3,hacim4,hacim5,hacim6,hacim7,hacim8;
		printf("\nTaban kotunu girin=");
		scanf("%lf",&Zb);
		hacim1=0;hacim2=0;hacim3=0;hacim4=0;hacim5=0;hacim6=0;hacim7=0;hacim8=0;
		b=1;
		printf("\nToplam kac F alan degeriniz var?===>");
		scanf("%i",&a);
		while(a>=b){
		
		printf("\n\n\n\n\nF%i alan degeriniz kac?=",b);
		scanf("%lf",&F[b]);
		printf("\nH1 kot degerini girin=");
		scanf("%lf",&H1);
		printf("H2 kot degerini girin=");
		scanf("%lf",&H2);
		printf("H3 kot degerini girin=");
		scanf("%lf",&H3);
					
		hacim[b]=F[b]/3*((H1+H2+H3)-(3*Zb));
		printf("\n\nV%i hacim degeriniz===>%.3lf",b,hacim[b]);
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		if(b==1) hacim1=hacim[1];
		if(b==2) hacim2=hacim[2];
		if(b==3) hacim3=hacim[3];
		if(b==4) hacim4=hacim[4];
		if(b==5) hacim5=hacim[5];
		if(b==6) hacim6=hacim[6];
		if(b==7) hacim7=hacim[7];
		if(b==8) hacim8=hacim[8];
		if(a==b){
			Vtoplam=hacim1+hacim2+hacim3+hacim4+hacim5+hacim6+hacim7+hacim8;
			printf("\n\n\n\n\nToplam Hacim degeriniz===>%.3lf",Vtoplam);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			//exit(0);
			break;
		}
		b=b+1;
	}
		
	/*	
	printf("\nBaska Hacim degeri daha hesaplayip toplam hacime ulasmak icin(E/e)===>");
	scanf("%s",&again[0]);
	}while (again[0]==z[0]||again[0]==z[1]);*/
	
}

void hacim_alan1::showinfos3(){
	char again[2],z[3]="Ee";
	double Ha[3],Zb,S1,S2,aci1,aci2,F;
	
	do{
	
	printf("\n\nS1 degerini girin=");
	scanf("%lf",&S1);
	printf("\nS2 degerini girin=");
	scanf("%lf",&S2);
	printf("\n\naci1 degerini girin=");
	scanf("%lf",&aci1);
	printf("\naci2 degerini girin=");
	scanf("%lf",&aci2);
	F=((S1*S2*sin(aci1-aci2))/2);
	printf("\n\nF alani===>%.3lf",F);
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		
	printf("\n\n\n\n\nBaska bir alan hesabi daha yapmak icin(E/e)===>");
	scanf("%s",&again[0]);
	}while (again[0]==z[0]||again[0]==z[1]);
}




