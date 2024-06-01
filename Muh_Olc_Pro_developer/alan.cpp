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
#include"alan_hesap.h"
#define pi 3.141592654





void alan_hesap::showinfos(){

		int islem,secim,q,a,b,ai,ia;
		double f1,f2,f3,f4,f5,f6,f7,f8;
		double Vtoplam,S,H;
		char secim2;
		double S3,aci,aci1,aci2,aci3,aci4,aci5,aci6,aci7,aci8,S1,S4,S5,S6,S7,S8;
			
		printf("\nKac tane S degeriniz var?=");
		scanf("%i",&ai);
		ai=fabs(ai);
		ai=trunc(ai);
		
		
			ia=ai;
				if(3>ai||ai>8){
					printf("\nAzami 8 tane S degeriyle islem yapilabilir...");
					printf("\nHatali bir sayi girdiniz...");
					PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
					PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
					PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					//return main();
					//break;
					//continue;
					exit (0);
					}
		if (2<ai<9){
		
			double Sa[ia],acia[ia];
		printf("\nCikarilacak alan var mi(E/H)?===>");
		secim2=getch();
		if(secim2=='e'||secim2=='E'){
			printf("\nKac S alani cikarilacak===>");
			scanf("%i",&secim);
			
			switch(secim){
	
			case 1:
			//printf("\nTaban kotunu girin=");
			//scanf("%lf",&Zb);
			q=1;
			a=2;
			while (ai>2&&ai>=q){
					
				if(2<ai){
					printf("\n\nS%i degeri=",q);
					scanf("%lf",&Sa[q]);
					//printf("H%i kot degerini girin=",q);
					//scanf("%lf",&Ha[q]);
					printf("S%i-S%i acisi=",a,q);
					scanf("%lf",&acia[q]);
					acia[q]=acia[q]*(pi/200);
					q=q+1;
					a=a+1;
			}
			}
			
			if (ai==3&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[3]*Sa[1]*sin(acia[3]-acia[1]))/2);
				Vtoplam=f1+f2-f3;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3])-(3*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,Vtoplam);
			}
			if (ai==4&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[4]*Sa[1]*sin(acia[4]-acia[1]))/2);
				Vtoplam=f1+f2+f3-f4;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4])-(4*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,Vtoplam);
			}
			if(ai==5&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[5]*Sa[1]*sin(acia[5]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4-f5;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5])-(5*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,Vtoplam);
			}
			if(ai==6&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[6]*Sa[1]*sin(acia[6]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5-f6;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6])-(6*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		
			}
			if(ai==7&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[7]-acia[6]))/2);
				f7=((Sa[7]*Sa[1]*sin(acia[7]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6-f7;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7])-(7*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			}
			if(ai==8&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[7]-acia[6]))/2);
				f7=((Sa[8]*Sa[7]*sin(acia[8]-acia[7]))/2);
				f8=((Sa[8]*Sa[1]*sin(acia[8]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6+f7-f8;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7]+Ha[8])-(8*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\nF8=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,f8,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			}
			break;
		case 2:
			//printf("\nTaban kotunu girin=");
			//scanf("%lf",&Zb);
			q=1;
			a=2;
			while (ai>2&&ai>=q){
					
				if(2<ai){
					printf("\n\nS%i degeri=",q);
					scanf("%lf",&Sa[q]);
					//printf("H%i kot degerini girin=",q);
					//scanf("%lf",&Ha[q]);
					printf("S%i-S%i acisi=",a,q);
					scanf("%lf",&acia[q]);
					acia[q]=acia[q]*(pi/200);
					q=q+1;
					a=a+1;
			}
			}
			
			if (ai==3&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[2]*Sa[3]*sin(acia[2]-acia[3]))/2);
				f3=((Sa[3]*Sa[1]*sin(acia[3]-acia[1]))/2);
				Vtoplam=f1-f2-f3;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3])-(3*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,Vtoplam);
			}
			if (ai==4&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[3]-acia[4]))/2);
				f4=((Sa[4]*Sa[1]*sin(acia[4]-acia[1]))/2);
				Vtoplam=f1+f2-f3-f4;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4])-(4*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,Vtoplam);
			}
			if(ai==5&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[4]-acia[5]))/2);
				f5=((Sa[5]*Sa[1]*sin(acia[5]-acia[1]))/2);
				Vtoplam=f1+f2+f3-f4-f5;
				//hacim=Vtoplam/5*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5])-(5*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,Vtoplam);
			}
			if(ai==6&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[5]-acia[6]))/2);
				f6=((Sa[6]*Sa[1]*sin(acia[6]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4-f5-f6;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6])-(6*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,Vtoplam);
			}
			if(ai==7&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[6]-acia[7]))/2);
				f7=((Sa[7]*Sa[1]*sin(acia[7]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5-f6-f7;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7])-(7*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,Vtoplam);
			}
			if(ai==8&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[7]-acia[6]))/2);
				f7=((Sa[8]*Sa[7]*sin(acia[7]-acia[8]))/2);
				f8=((Sa[8]*Sa[1]*sin(acia[8]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6-f7-f8;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7]+Ha[8])-(8*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\nF8=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,f8,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			}
		break;
		case 3:
			if(ai>3){
			//printf("\nTaban kotunu girin=");
			//scanf("%lf",&Zb);
			q=1;
			a=2;
			while (ai>3&&ai>=q){
					
				if(2<ai){
					printf("\n\nS%i degeri=",q);
					scanf("%lf",&Sa[q]);
					//printf("H%i kot degerini girin=",q);
					//scanf("%lf",&Ha[q]);
					printf("S%i-S%i acisi=",a,q);
					scanf("%lf",&acia[q]);
					acia[q]=acia[q]*(pi/200);
					q=q+1;
					a=a+1;
			}
			}
			
			if (ai==4&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[3]-acia[4]))/2);
				f4=((Sa[4]*Sa[1]*sin(acia[4]-acia[1]))/2);
				Vtoplam=-f1-f2-f3+f4;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4])-(4*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,Vtoplam);
			}
			if(ai==5&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[4]-acia[5]))/2);
				f5=((Sa[5]*Sa[1]*sin(acia[5]-acia[1]))/2);
				Vtoplam=f1+f2-f3-f4-f5;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5])-(5*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,Vtoplam);
			}
			if(ai==6&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[5]-acia[6]))/2);
				f6=((Sa[6]*Sa[1]*sin(acia[6]-acia[1]))/2);
				Vtoplam=f1+f2+f3-f4-f5-f6;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6])-(6*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,Vtoplam);
			}
			if(ai==7&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[6]-acia[7]))/2);
				f7=((Sa[7]*Sa[1]*sin(acia[7]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4-f5-f6-f7;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7])-(7*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,Vtoplam);
			}
			if(ai==8&&q-1==ai){
				f1=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f2=((Sa[3]*Sa[2]*sin(acia[3]-acia[2]))/2);
				f3=((Sa[4]*Sa[3]*sin(acia[4]-acia[3]))/2);
				f4=((Sa[5]*Sa[4]*sin(acia[5]-acia[4]))/2);
				f5=((Sa[6]*Sa[5]*sin(acia[6]-acia[5]))/2);
				f6=((Sa[7]*Sa[6]*sin(acia[7]-acia[6]))/2);
				f7=((Sa[8]*Sa[7]*sin(acia[7]-acia[8]))/2);
				f8=((Sa[8]*Sa[1]*sin(acia[8]-acia[1]))/2);
				Vtoplam=f1+f2+f3+f4+f5-f6-f7-f8;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[7]+Ha[8])-(8*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\nF8=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,f8,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			}
			}
			else {
				printf("\n\nIki S alani cikarma isleminde S<4 olamaz...\n\n");
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				break;
			}
		break;
	default:
		printf("\nhatali sayi girdiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
	break;	
	}
}
			
		
		if(secim2=='H'||secim2=='h'){
		
			//printf("\nTaban kotunu girin=");
			//scanf("%lf",&Zb);
			q=0;
			a=1;
			b=2;
			ai=ai-1;
			while (ai>2&&ai>=q){
					
				if(2<ai){
					printf("\n\nS%i degeri=",a);
					scanf("%lf",&Sa[q]);
					//printf("H%i kot degerini girin=",a);
					//scanf("%lf",&Ha[q]);
					printf("S%i-S%i acisi=",b,a);
					scanf("%lf",&acia[q]);
					acia[q]=acia[q]*(pi/200);
					q=q+1;
					a=a+1;
					b=b+1;
			}
			}

			if (ai==3&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				Vtoplam=f1+f2+f3;
				//hacim=Vtoplam/3*((Ha[0]+Ha[1]+Ha[2])-(3*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,Vtoplam);
			}
			if (ai==4&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f4=((Sa[3]*Sa[4]*sin(acia[4]-acia[3]))/2);
				Vtoplam=f1+f2+f3+f4;
				//hacim=Vtoplam/3*((Ha[0]+Ha[1]+Ha[2]+Ha[3])-(4*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				
			}
			if(ai==5&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f4=((Sa[3]*Sa[4]*sin(acia[4]-acia[3]))/2);
				f5=((Sa[4]*Sa[5]*sin(acia[5]-acia[4]))/2);
				Vtoplam=f1+f2+f3+f4+f5;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[0])-(5*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,Vtoplam);
			}
			if(ai==6&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f4=((Sa[3]*Sa[4]*sin(acia[4]-acia[3]))/2);
				f5=((Sa[4]*Sa[5]*sin(acia[5]-acia[4]))/2);
				f6=((Sa[5]*Sa[6]*sin(acia[6]-acia[5]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[0])-(6*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,Vtoplam);
			}
			if(ai==7&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f4=((Sa[3]*Sa[4]*sin(acia[4]-acia[3]))/2);
				f5=((Sa[4]*Sa[5]*sin(acia[5]-acia[4]))/2);
				f6=((Sa[5]*Sa[6]*sin(acia[6]-acia[5]))/2);
				f7=((Sa[6]*Sa[7]*sin(acia[7]-acia[6]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6+f7;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[0])-(7*Zb));
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,Vtoplam);
			}
			if(ai==8&&q-1==ai){
				f1=((Sa[0]*Sa[1]*sin(acia[1]-acia[0]))/2);
				f2=((Sa[1]*Sa[2]*sin(acia[2]-acia[1]))/2);
				f3=((Sa[2]*Sa[3]*sin(acia[3]-acia[2]))/2);
				f4=((Sa[3]*Sa[4]*sin(acia[4]-acia[3]))/2);
				f5=((Sa[4]*Sa[5]*sin(acia[5]-acia[4]))/2);
				f6=((Sa[5]*Sa[6]*sin(acia[6]-acia[5]))/2);
				f7=((Sa[6]*Sa[7]*sin(acia[7]-acia[6]))/2);
				f8=((Sa[7]*Sa[8]*sin(acia[8]-acia[7]))/2);
				Vtoplam=f1+f2+f3+f4+f5+f6+f7;
				//hacim=Vtoplam/3*((Ha[1]+Ha[2]+Ha[3]+Ha[4]+Ha[5]+Ha[6]+Ha[0])-(7*Zb));
				printf("\nF1=%.3lf\nF2=%.3lf\nF3=%.3lf\nF4=%.3lf\nF5=%.3lf\nF6=%.3lf\nF7=%.3lf\n\nToplam Alan=%.3lfm2\n",f1,f2,f3,f4,f5,f6,f7,Vtoplam);
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				}
				}
				}
				}
				
