#include<windows.h>
#include<mmsystem.h>
#include<string>
#include<fstream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<cstdlib>
#include"alan_hesap.h"
#include"hacim_alan.h"
#include"jeo_ag.h"
#include"test1.h"
#include"unistd.h"
#define pi 3.141592654

	double x_HESAP(double A,double L)
	{
     double X;
     X=(L-(pow(L,5)/(40*pow(A,4))))+((pow(L,9)/(3456*pow(A,8))));
     return (X);
    }

	double y_HESAP(double A,double L)
	{
     double Y;
	Y=((pow(L,3)/(6*pow(A,2))))-((pow(L,7)/(336*pow(A,6))))+((pow(L,11)/(42240*pow(A,10))));
	return (Y);
    }
	double VicutKitleEnd (double boy,double kilo){
	
	double Vhesap,endeks;
	int zzz;
	Vhesap=kilo/(pow(boy,2));
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\nDegerler:");
	printf("\n\n18.5 alti dusuk kilolu, ");
	printf("\n18.5 ile 24.9 arasi normal kilolu,");
	printf("\n25 ile 29.9 arasi fazla kilolu,");
	printf("\n30 ile 40 arasi obez,");
	printf("\n40 ve ustu morfit obez oldugunuzu gosterir.");
	printf("\n\n\n\nVicut kitle Endeks degeriniz %.3lf dur.",Vhesap);
	if(Vhesap<18.5) printf("\n\nKritik sinirin altindasin, kisaca cok zay�fsin....\nACIL kilo almalisin!!!");
	if(Vhesap>=18.25&&Vhesap<25) printf("\n\nHARIKASIN!!!Kilon ve boyun tam da olmasi gerektigi gibi,Boyle devam....");
	if(Vhesap>=25&&Vhesap<30) printf("\n\nSinirin biraz ustunde fazla kilolusun ama olsun biraz caba ile sen bu kilolari halledersin...");
	if(Vhesap>=30&&Vhesap<40) printf("\n\nOOOOOOOO bu kilo ne sen obezsin!Hemen zayiflamaya baslamalisin...");
	if(Vhesap>=40) printf("\n\nKatagorin Morfit Obez,Allah yardimcin olsun....Sen kotu yola dusmussun!!! :()");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	printf("\n\n\n\n\n\n");
			printf("Bu metin 10 saniye icinde kapanacak....\n");
			zzz=10;
			while (zzz>0){
				
				printf("%d\t",zzz);
				Sleep(1000);
				zzz=zzz-1;
			}
	
	return (endeks);
	}



int main() {
	double A,r,L,delta,deltaa,X,Y,Xm,Ym,ti,t,ufakt,alfa
	,beta,sigmaa,sigma,S,Dr,Tk,Tu,Z,T,BS
	,A1,A2,L1,L2,T1,T2,T1i,T2i,Tk1,Tk2,Tu1,Tu2,X1,X2,Y1,Y2
	,t1,t2,ufakt1,ufakt2,Xm1,Xm2,Ym1,Ym2,Dr1,Dr2,d,t1i,t2i
	,S1X,S1Y,S2X,S2Y,S3X,S3Y,KB1,KB2,KS1,KS2
	,degerq,e_sayisi,e_mesafesi,q1,q2,Vtoplam
	,kot,alan,kot1,alan1,kot2,alan2,kot3,alan3,kot4,alan4,kot5,alan5,kot6,alan6,kot7,alan7,kot8,alan8
	,H1,H2,H3,H4,F,m,n
	,oH,dH,H,oH1,oH2,oH3,oH4,dH1,dH2,dH3,dH4
	,gama,gamaa,Yks1,Yks2,Xks1,Xks2,Ykb1,Ykb2,Xkb1,Xkb2,S2,S3,s2,s3
	,aci,aci1,aci2,aci3,aci4,aci5,aci6,aci7,aci8,S1,S4,S5,S6,S7,S8,Zb,hacim,H5,H6,H7,H8;
	double toplam0,toplam1,zzz;
	int ilkislem,islem,q,tercih,a,ai,ia,b,zz;
	float degerler;
	char secime,secim,secim1,secim2,again[80],z[80]="Ee";
	
	//FILE *d1,*d2;
	//char user[80],user2[80]="asus",host[80],host2[80]="ONUR_CAGLAR";
	char username[11],username2[11]="Onur";
	int password,sifre=123;
	//system("wmic bios get SerialNumber>b");
	
	
	
	/*
	if(1==2){
			serial serial;
			serial.showinfo();
			}
	
	system("echo %username%>Locker\\Serial.txt");
	system("hostname>Locker\\Serial2.txt");
	d1=fopen("Locker\\Serial.txt","r");
	d2=fopen("Locker\\Serial2.txt","r");
	
	if(d1==NULL||d2==NULL)
    {
   	    printf("\nHATA101:Dosyarlardan biri acilamadi...");
   	    PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
   	return 0;
	}
	fscanf(d1,"%s",&user);
	fscanf(d2,"%s",&host);
	//printf("%c%c%c",username2[0],username2[1],username2[2],username2[3]);
	//printf("%c%c%c",user[0],user[1],user[2]);
	//printf("%s",user2);
	//printf("\n\n\n\n%c%c%c",user2[0],user2[1],user2[2]);

		if (user[0]==user2[0]&&user[1]==user2[1]&&user[2]==user2[2]&&user[3]==user2[3]&&host[3]==host2[3]&&host[0]==host2[0]&&host[5]==host2[5]){
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLisans kontrolu yapiliyor LUTFEN BEKLEYINIZ!...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLisans kontrolu saglandi:ISLEM BASARILI!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		
		
	
	*/
	
	printf("\n\n\n\n\t\t\t\t\t\t-----> MUH_OLC_PRO <-----");
	printf("\n\n\t\t\t     'Muhendislik Hesaplamalari yapmak hic bu kadar kolay olmamisti...'");
	
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t        GIRIS YAP");
	
	printf("\n\n\n\t\t\t\t\t\tKullanici adinizi girin=");
	scanf("%s",&username);
	printf("\t\t\t\t\t\tSifrenizi girin=");
	scanf("%i",&password);
	
	
	if(username[0]==username2[0]&&username[1]==username2[1]&&username[2]==username2[2]&&username[3]==username2[3]&&username[4]==username2[4]&&username[5]==username2[5]&&username[6]==username2[6]&&username[7]==username2[7]&&username[8]==username2[8]&&username[9]==username2[9]&&username[10]==username2[10])    {
		if(password==sifre){
			printf("\n\n\t\t\t\t\t\tGiris Basarili...");
			PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	
	
	
	
	
	
	
	
	printf("\n\n\t\t\t\t\t\t-->HOSGELDINIZ<--");
	PlaySound(TEXT("Music\\W1.wav"),NULL,SND_SYNC);
	basa: 
	if (zz==5) printf("\n\t\t\t\t\t\t-->TEKRAR HOSGELDINIZ<--");
	printf("\n\nBu program, Necmettin Erbakan Universitesi Harita Muh. Muhendislik Olcmeleri dersi icin hazirlanmistir...");
	printf("\n\n\n\n\nKisaca program kullanimi su sekildedir:");
	printf("\nAsagida oldugu gibi program size kisimlar onerir size uygun olan kisimi bulup,");
	printf("\nardindan o kismin yaninda yazan numarayi seciminiz bolumune yazip enter tusuna basmaniz");
	printf("\nyeterli olacaktir. Sectiginiz kisimlarin icinde sorunun sizden istedigi degerleri de");
	printf("\nbenzer sekilde yanlarina yazip enter tusuna basarak cevabiniza ulasabilirsiniz...");
	printf("\n\n\n\n\nAciklama Metni icin \t\t\t\t\t\t: 1");		
	printf("\nVizedeki konularin sorularina bakmak icin \t\t\t: 2");
	printf("\nFinaldeki konularin sorularina bakmak icin\t\t\t: 3");
	printf("\nDersten sikildim biraz eglence dersen \t\t\t\t: 4");
	printf("\nVicut kitle endeksi hesaplama icin \t\t\t\t: 5");
	printf("\nProgrami kapatmak icin \t\t\t\t\t\t: 6");
	printf("\n\nLife, the Universe, and Everything! \t\t\t\t:???");
	printf("\n\n\n\nSeciminiz=");
	scanf("%i",&ilkislem);
      	
	switch(ilkislem){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		case 1:
			printf("\n\n\t\t\t\t\t  --->ACIKLAMA METNI<---\t\t\t\t\t\t05.12.2020\n");
			printf("\n\n\tMerhabalar,amatorce basladigim bu calismada sinav haftasina kisa bir sure kala projeyi tamamlamanin mutlulugu\nile bu notu sizlere yaziyorum.Ilk cikis anindan bu ana kadar hicbir zaman kotu bir niyet veya amac barindirmayan");
			printf("\nbu programi sizlerinde kotu amaclar icin kullanmayacaginizdan eminim.Yinede bu kapsamda uygulamanin kotu amacli\nkullanimindan hicbir sekilde sahsim sorumlu degildir.Ayrica haksiz yere bu proje uzerinde hak taleb eden yada kismen\nacik olarak paylasilan kodlari kopyalayip kendi adina dagatarak haksiz kazanc elde eden,programdaki herhangi bir hata\nyuzunden hesap sormaya kalkan, haksiz rekabet olusturdugu nedeniyle yetkili mercilere sahsim adina sikayet talebi");
			printf("\nolusturan veya bunun gibi kotu amaclar barindiran kullanicilara karsi tum haklarimin sakli oldugunu ve kullanmaktan");
			printf("\ncekinmeyecegimi ayrica belirtmek isterim.Kisaca Muh_Olc_Pro, Muhendislik Olcmeleri dersinin zorlugu ve hesap");
			printf("\nfazlaligi goze alinarak kullanicilara hizli ve dogru sonuc vermeyi amaclayan bir yazilim programdir.Yirmiyi");
			printf("\ngeckin islemi tek programda sunan bu uygulama buyuk ozveri ile iki bin satiri geckin kod calismasi ile hazirlanmistir.");
			printf("\n");
			printf("\n\tSon olarak dunyada ve ulkemizde hizla gelisen, benim de cok onem verdigim, kendimce yaptigim basit bir calisma\nda olsa yazilim alaninda gelistirmeye calistigim ve bugun ilk kullanicilarina ulasacak olan proje icin bu vesilesiyle\nsen degerli kullaniciya Muh_Olc_Pro yazilim programini kullanmayi tercih ettigin icin tesekkur eder,\nsaygi ve sevgilerimi sunarim.");
			printf("\n\tBir de unutmadan programda iyi vakit gecirmeniz dilegiyle iyi eglenceler dilerim......");
			printf("\n\n\t\t\t\t\t\t\t\t\t\tOnur CAGLAR");
			printf("\n\n\n\n");
			printf("Bu metin 15 saniye icinde kapanacak....\n");
			zzz=15;
			while (zzz>0){
				
				printf("%d\t",zzz);
				Sleep(1000);
				zzz=zzz-1;
			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
			
			break;
		case 2 :
	
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    -->VIZE<--");
	printf("\n\t\t\t\t\t\t-->HOSGELDINIZ<--");
	ILK: 
	if (zz==5) printf("\n\t\t\t\t\t\t-->TEKRAR HOSGELDINIZ<--");
	printf("\n\nSoruda sadece;\nA ve r degeri verilmisse   \t\t\t: 1        \tr ve L degeri verilmisse \t\t    \t: 2\nr, delta, A degeri verilmisse\t\t\t: 3\t        r, delta, A1 ve A2 degeri verilmisse    \t: 4\nr ve delta degeri verilmisse\t \t\t: 5        \tdelta,r ve A1 degeri verilmisse \t\t: 6\nr,delta,A ve S1,S2,S3 degerleri verilmisse \t: 7\t\tDik ve Kutupsal Koord. Hesabi \t\t\t: 8");	
	printf("\n\nHacim Hesaplari:\nenkesit ve enkesitler arasi mesafe verilmisse   : 9        \tAlan ve kot olculeri verilmisse \t\t: 10");	
	printf("\nUcgen prizma hacmi icin \t\t\t: 11 \t\tDikdortgen prizma hacmi icin \t\t\t: 12\nBagli Karelerle hacim hesabi icin \t\t: 13 \t\tKutupsal Koordinatla Alan Hesabi icin \t\t: 14");
	printf("\nTek Bolge Alan Hesabi icin \t\t\t: 15 \t\tKutupsal Koordinat yonteminde hacim hesabi icin : 16");
	printf("\nOrtalama Arazi kotu ile hesap icin \t\t: 17");
	printf("\n\nTemel Odev Hesaplari:\n1. Temel Odev icin \t\t\t\t: 18 \t\t2. Temel Odev icin  \t\t\t\t: 19");
	printf("\n3. Temel Odev icin \t\t\t\t: 20 \t\t4. Temel Odev icin  \t\t\t\t: 21");
	printf("\n\nNOT:Girdiginiz sayilarin kusuratini nokta (.) ile girin.Virgul (,) kullanmayin....");
	printf("\nNOT:Girdiginiz degerleri metre ve grad cinsinden giriniz...");
	printf("\n\nSeciminiz=");
	scanf("%i",&islem);
      	
	switch(islem){
		
		case 1 :
			printf("\nA degeriniz=");
			scanf("%lf",&A);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			L=pow(A,2)/r;
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			ti=L/(2*r);
			t=ti*(200/pi);
			Ym=Y+r*cos(ti);
			Xm=X-r*sin(ti);
			Dr=Ym-r;
			Tk=Y/sin(ti);
			Tu=X-Y*(1/tan(ti));
			S=sqrt(pow(X,2)+pow(Y,2));
			sigmaa=atan(Y/X);
			sigma=sigmaa*(200/pi);
			printf("\nL=%.3lfm\tX=%.3lfm\tY=%.3lfm\tt=%lfgrad\nYm=%.3lfm\tXm=%.3lfm\tDr=%lfm\nTk=%.3lfm\tTu=%.3lfm\tS=%.3lfm\tsigma=%lfgrad\n",L,X,Y,t,Ym,Xm,Dr,Tk,Tu,S,sigma);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			break;
			
		case 2 :
			printf("\nL degeriniz=");
			scanf("%lf",&L);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			A=sqrt(L*r);
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			ti=L/(2*r);
			t=ti*(200/pi);
			Ym=Y+r*cos(ti);
			Xm=X-r*sin(ti);
			Dr=Ym-r;
			Tk=Y/sin(ti);
			Tu=X-Y*(1/tan(ti));
			S=sqrt(pow(X,2)+pow(Y,2));
			sigmaa=atan(Y/X);
			sigma=sigmaa*(200/pi);
			printf("\nA=%.3lfm\tX=%.3lfm\tY=%.3lfm\tt=%lfgrad\nYm=%.3lfm\tXm=%.3lfm\tDr=%lfm\nTk=%.3lfm\tTu=%.3lfm\tS=%.3lfm\tsigma=%lfgrad\n",A,X,Y,t,Ym,Xm,Dr,Tk,Tu,S,sigma);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			break;
		case 3 :
			printf("\ndelta degeriniz=");
			scanf("%lf",&delta);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			printf("\nA degeriniz=");
			scanf("%lf",&A);
			deltaa=delta*pi/200;
			L=pow(A,2)/r;
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			ti=L/(2*r);
			t=ti*(200/pi);
			Ym=Y+r*cos(ti);
			Xm=X-r*sin(ti);
			Dr=Ym-r;
			ufakt=(r+Dr)*tan(deltaa/2);
			T1=T2=ufakt+Xm;
			alfa=delta-2*t;
			beta=(r*pi*alfa)/200;
			printf("\nL=%.3lfm\tX=%.3lfm\tY=%.3lfm\tt=%lfgrad\nYm=%.3lfm\tXm=%.3lfm\tDr=%.3lfm\tufakt=%.3lfm\nT1=%.3lfm\tT2=%.3lfm\talfa=%lfgrad\tbeta=%.3lfm\n",L,X,Y,t,Ym,Xm,Dr,ufakt,T1,T2,alfa,beta);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			break;
		case 4 :
			printf("\ndelta degeriniz=");
			scanf("%lf",&delta);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			printf("\nA1 degeriniz=");
			scanf("%lf",&A1);
			printf("\nA2 degeriniz=");
			scanf("%lf",&A2);
			deltaa=delta*(pi/200);
			L1=pow(A1,2)/r;
			t1i=L1/(2*r);
			t1=t1i*(200/pi);
			X1=(L1-(pow(L1,5)/(40*pow(A1,4))))+((pow(L1,9)/(3456*pow(A1,8))));
			Y1=((pow(L1,3)/(6*pow(A1,2))))-((pow(L1,7)/(336*pow(A1,6))))+((pow(L1,11)/(42240*pow(A1,10))));
			Xm1=X1-r*sin(t1i);
			Ym1=Y1+r*cos(t1i);
			Dr1=Ym1-r;
			ufakt1=(r+Dr1)*tan(deltaa/2);
			L2=pow(A2,2)/r;
			t2i=L2/(2*r);
			t2=t2i*(200/pi);
			X2=(L2-(pow(L2,5)/(40*pow(A2,4))))+((pow(L2,9)/(3456*pow(A2,8))));
			Y2=((pow(L2,3)/(6*pow(A2,2))))-((pow(L2,7)/(336*pow(A2,6))))+((pow(L2,11)/(42240*pow(A2,10))));
			Xm2=X2-r*sin(t2i);
			Ym2=Y2+r*cos(t2i);
			Dr2=Ym2-r;
			ufakt2=(r+Dr2)*tan(deltaa/2);
			d=(Dr2-Dr1)/sin(deltaa);
			alfa=delta-(t1+t2);
			T1=ufakt1+Xm1+d;
			T2=ufakt2+Xm2-d;
			beta=(r*pi*alfa)/200;
			printf("\nL1=%.3lfm\tt1=%lfgrad\tX1=%.3lfm\tY1=%.3lfm\nXm1=%.3lfm\tYm1=%.3lfm\tDr1=%.3lfm\tufakt1=%.3lfm\nL2=%.3lfm\tt2=%lfgrad\tX2=%.3lfm\tY2=%.3lfm\nXm2=%.3lfm\tYm2=%.3lfm\tDr2=%.3lfm\tufakt2=%.3lfm\nd=%.3lfm\talfa=%lfgrad\nT1=%.3lfm\tT2=%.3lfm\tbeta=%.3lfm\t",L1,t1,X1,Y1,Xm1,Ym1,Dr1,ufakt1,L2,t2,X2,Y2,Xm2,Ym2,Dr2,ufakt2,d,alfa,T1,T2,beta);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			break;
		case 5 :
			printf("\ndelta degeriniz=");
			scanf("%lf",&delta);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			t=delta/2;
			L=2*t*r*(pi/200);
			A=sqrt(r*L);
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			ti=t*(pi/200);
			Z=Y*tan(ti);
			T=X+Z;
			BS=Y/cos(ti);
			printf("\nt=%lfgrad\tL=%.3lfm\tA=%.3lfm\nX=%.3lfm\tY=%.3lfm\nZ=%.3lfm\tT=%lfm\tBS=%.3lfm\n",t,L,A,X,Y,Z,T,BS);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			break;
		case 6:
			
			printf("\ndelta degeriniz=");
			scanf("%lf",&delta);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			printf("\nA1 degeriniz=");
			scanf("%lf",&A1);
			L1=pow(A1,2)/r;
			t1i=L1/(2*r);
			t1=t1i*(200/pi);
			t2=delta-t1;
			t2i=(delta-t1)*(pi/200);
			L2=2*t2i*r;
			A2=sqrt(r*L2);
			X1=(L1-(pow(L1,5)/(40*pow(A1,4))))+((pow(L1,9)/(3456*pow(A1,8))));
			X2=(L2-(pow(L2,5)/(40*pow(A2,4))))+((pow(L2,9)/(3456*pow(A2,8))));
			Y1=((pow(L1,3)/(6*pow(A1,2))))-((pow(L1,7)/(336*pow(A1,6))))+((pow(L1,11)/(42240*pow(A1,10))));
			Y2=((pow(L2,3)/(6*pow(A2,2))))-((pow(L2,7)/(336*pow(A2,6))))+((pow(L2,11)/(42240*pow(A2,10))));
			Tu1=X1-Y1*(1/tan(t1i));
			Tu2=X2-Y2*(1/tan(t2i));
			Tk1=Y1/sin(t1i);
			Tk2=Y2/sin(t2i);
			deltaa=delta*(pi/200);
			T1=Tu1+(sin(t2i)*(Tk1+Tk2))/sin(deltaa);
			T2=Tu2+(sin(t1i)*(Tk1+Tk2))/sin(deltaa);
			printf("\nL1=%.3lfm\tt1=%lfgrad\tt2=%lfgrad\tL2=%.3lfm\tA2=%.3lfm\n",L1,t1,t2,L2,A2);
			printf("X1=%.3lfm\tX2=%.3lfm\tY1=%.3lfm\tY2=%.3lfm\nTu1=%.3lfm\tTu2=%.3lfm\tTk1=%.3lfm\tTk2=%.3lfm\nT1=%.3lfm\tT2=%.3lfm\n",X1,X2,Y1,Y2,Tu1,Tu2,Tk1,Tk2,T1,T2);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			
			break;
		case 7:
			//printf("\n\t--->YAKINDA<---\nBu kisim icin calismalar devam etmektedir...");
			
			printf("\ndelta degeriniz=");
			scanf("%lf",&delta);
			printf("\nr degeriniz=");
			scanf("%lf",&r);
			printf("\nA degeriniz=");
			scanf("%lf",&A);
			printf("\nS2 some noktasi kilometre degerini normal (mesala 1500)sekilde yazin...(1+500 degil!!!)");
			printf("\nS2 some noktasinin kilometre degeri=");
			scanf("%lf",&S2);
			printf("\nS1 kenarina ait x degeriniz=");
			scanf("%lf",&S1X);
			printf("\nS1 kenarina ait y degeriniz=");
			scanf("%lf",&S1Y);
			printf("\nS2 kenarina ait x degeriniz=");
			scanf("%lf",&S2X);
			printf("\nS2 kenarina ait y degeriniz=");
			scanf("%lf",&S2Y);
			printf("\nS3 kenarina ait x degeriniz=");
			scanf("%lf",&S3X);
			printf("\nS3 kenarina ait y degeriniz=");
			scanf("%lf",&S3Y);
			deltaa=delta*(pi/200);
			L=pow(A,2)/r;
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			ti=L/(2*r);
			t=ti*(200/pi);
			Ym=Y+r*cos(ti);
			Xm=X-r*sin(ti);
			Dr=Ym-r;
			ufakt=(r+Dr)*tan(deltaa/2);
			T1=ufakt+Xm;
			T2=ufakt+Xm;
			alfa=delta-(2*t);
			beta=(r*pi*alfa)/200;
			KB1=S2-T1;
			KS1=KB1+L;
			KS2=KS1+beta;
			KB2=KS2+L;
			
			H1=S1X-S2X;
			H2=S1Y-S2Y;
			H3=S3X-S2X;
			H4=S3Y-S2Y;
			
			
			
			s2=atan((H2)/(H1));
			
			if (H1<0) {
			s2=s2+pi;
			}
			if (H1>0&&H2<0) {
			s2=s2+2*pi;
			}
			
			
			
			
			s3=atan((H4)/(H3));
			
			if (H3<0){ 
			s3=s3+pi;
			} 
			if (H3>0&&H4<0) {
			s3=s3+pi;
			}
			//radyan grada cevrilecek....
			
			Ykb1=S2Y+T1*sin(s2);
			Xkb1=S2X+T1*cos(s2);
			Ykb2=S2Y+T1*sin(s3);
			Xkb2=S2X+T1*cos(s3);
			
			S=sqrt(pow(X,2)+pow(Y,2));
			gamaa=atan(Y/X); 
			gama=gamaa*(200/pi); //radyan grada cevrilecek....
			
			S2=s2*(200/pi);
			S3=s3*(200/pi);
			
			
			if(0<=S2<200) toplam0=S2+200;
			if(200<=S2<600) toplam0=S2-200;
			if(600<=S2) toplam0=S2-600;
			
			if(0<=S3<200) toplam1=S3+200;
			if(200<=S3<600) toplam1=S3-200;
			if(600<=S3) toplam1=S3-600;
			
			toplam0=toplam0*(pi/200);
			toplam1=toplam1*(pi/200);
			
			Yks1=Ykb1+S*sin(toplam0+gamaa);
			Yks2=Ykb2+S*sin(toplam1-gamaa);
			Xks1=Xkb1+S*cos(toplam0+gamaa);
			Xks2=Xkb2+S*cos(toplam1-gamaa);
			
			
			printf("\nL=%.3lfm\tX=%.3lfm\tY=%.3lfm\nt=%.6lfgrad\tXm=%.3lfm\tYm=%.3lfm\nDr=%.3lfm",L,X,Y,t,Xm,Ym,Dr);
			printf("\tufakt=%.3lfm\tT1=T2=%.3lfm\nalfa=%.6lfgrad\tbeta=%.3lfm\t",ufakt,T1,alfa,beta);
			printf("\n\nKB1=%.3lfm\tKB2=%.3lfm\tKS1=%.3lfm\tKS2=%.3lfm",KB1,KB2,KS1,KS2);
			printf("\n(S1-S2)=%.6lfgrad\t(S2-S3)=%.6lfgrad",S2,S3);
			printf("\n\nY(kb1)=%.3lfm\tX(kb1)=%.3lfm\tY(kb2)=%.3lfm\tX(kb2)=%.3lfm",Ykb1,Xkb1,Ykb2,Xkb2);
			printf("\nS=%.3lfm\t\tgama=%.6lfgrad",S,gama);
			printf("\n\nY(ks1)=%.3lfm\tX(ks1)=%.3lfm\tY(ks2)=%.3lfm\tX(ks2)=%.3lfm",Yks1,Xks1,Yks2,Xks2);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			break;
		case 8:
			printf("\nA degeriniz=");
			scanf("%lf",&A);
			printf("\nL degeriniz=");
			scanf("%lf",&L);
			printf("\nApliksayon araliginiz=");
			scanf("%lf",&m);
			A=A;
			L=L;
			X=x_HESAP(A,L);
			Y=y_HESAP(A,L);
			d=X/m;
			d=ceil(d);
			//printf("\nd=%lf",d);
			printf("\nX=%lf",X);
			printf("\nY=%lf",Y);
			q=0;
			n=m;
			while(d>q){
				if (q==0){
				L=m;
				X=x_HESAP(A,L);
				Y=y_HESAP(A,L);
				alfa=atan(Y/X);
				alfa=alfa*(200/pi);
				S=sqrt(pow(Y,2)+pow(X,2));
				printf("\n\nDik koordinatlar \t\t\t\tKutupsal Koordinatlar");
				printf("\n\nL=%.1lf\tX=%.3lfm \tY=%.3lfm\t\talfa=%.7lfgrad\tS=%.3lfm",m,X,Y,alfa,S);
			    PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC); 
			    }
			    if (q!=0){
			    m=m+n;
			    L=m;
				X=x_HESAP(A,L);
				Y=y_HESAP(A,L);
				alfa=atan(Y/X);
				alfa=alfa*(200/pi);
				S=sqrt(pow(Y,2)+pow(X,2));
				printf("\nL=%.1lf\tX=%.3lfm \tY=%.3lfm\t\talfa=%.7lfgrad\tS=%.3lfm",m,X,Y,alfa,S);	
				PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				}
				
				q=q+1;
				
			}
			
			
			break;
		case 9:
			printf("\nToplam enkesit sayisini girin=");
			scanf("%lf",&e_sayisi);
			e_sayisi=fabs(e_sayisi);
		    e_sayisi=trunc(e_sayisi);
		    printf("\nEnkesit mesafesini girin=");
			scanf("%lf",&e_mesafesi);
			degerler=0;
		    q=1;
		    while (q<=e_sayisi){
			
		
		    	printf("\nEnkesit%i degeri=",q);
		    	scanf("%lf",&degerq);
		    	printf("Girdiginiz deger%i=%lf\n",q,degerq);
				degerler=degerler+degerq;
		    	if (q==1){
		    		q1=degerq;
				}
				if (q==e_sayisi){
		    		q2=degerq;
		    		Vtoplam=(degerler*2)-q1-q2;
		    		Vtoplam=Vtoplam*(e_mesafesi/2);
		    		printf("\nHacimlerin toplami=%lfm3",Vtoplam);
		    		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
				}
		    	q=q+1;	
			}
			break;
		case 10:
			printf("\nToplam kot sayisini girin=");
			scanf("%lf",&e_sayisi);
			e_sayisi=fabs(e_sayisi);
		    e_sayisi=trunc(e_sayisi);
		    printf("\nDIPNOT:--->F1 degerini yoksa sifir (0) girin");
		    degerler=0;
		    q=1;
		    while (q<=e_sayisi){
		    	printf("\nF%i degeri=",q);
		    	scanf("%lf",&alan);
		    	printf("\nKot%i degeri=",q);
		    	scanf("%lf",&kot);
				if(q==1){
					kot1=kot; 
				    alan1=alan;}
				if(q==2){
					kot2=kot; 
				    alan2=alan;}
				if(q==3){
					kot3=kot; 
				    alan3=alan;}
				if(q==4){
					kot4=kot; 
				    alan4=alan;}
				if(q==5){
					kot5=kot; 
				    alan5=alan;}
				if(q==6){
					kot6=kot; 
				    alan6=alan;}
				if(q==7){
					kot7=kot; 
				    alan7=alan;}
				if(q==8){
					kot8=kot; 
				    alan8=alan;}
				if (q>=9){
				
					printf("\nUZGUNUM...Yalnizca 8 ve alt�ndaki degerleri hesaplayabilirim!");
					break;}
			if (q==e_sayisi){
			
			Vtoplam=(((kot1-kot2)*(alan1+alan2))+((kot2-kot3)*(alan2+alan3))+((kot3-kot4)*(alan3+alan4))+((kot4-kot5)*(alan4+alan5)))/2;
			printf("\nHacimlerin toplami=%.3lfm3",Vtoplam);
		    PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			}
			q=q+1;
		}
		break;
	case 11:
		printf("\nF' degeri=");
		scanf("%lf",&F);
		printf("\nH1 degeri=");
		scanf("%lf",&H1);
		printf("\nH2 degeri=");
		scanf("%lf",&H2);
		printf("\nH3 degeri=");
		scanf("%lf",&H3);
		Vtoplam=((H1+H2+H3)/3)*F;
		printf("\nUcgen Prizma Hacmi=%.3lfm3",Vtoplam);
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		
		break;
	case 12:
		printf("\nF' degeri=");
		scanf("%lf",&F);
		printf("\nH1 degeri=");
		scanf("%lf",&H1);
		printf("\nH2 degeri=");
		scanf("%lf",&H2);
		printf("\nH3 degeri=");
		scanf("%lf",&H3);
		printf("\nH4 degeri=");
		scanf("%lf",&H4);
		Vtoplam=((H1+H2+H3+H4)/4)*F;
		printf("\nDikdortgen Prizma Hacmi=%.3lfm3",Vtoplam);
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		break;
	case 13:
		printf("\na degeri=");
		scanf("%lf",&A);
		printf("\nBuyuk kare dis kose (Kosegen) yukseklerini girin");
		printf("\nDis kose H1=");
		scanf("%lf",&dH1);
		printf("\nDis kose H2=");
		scanf("%lf",&dH2);
		printf("\nDis kose H3=");
		scanf("%lf",&dH3);
		printf("\nDis kose H4=");
		scanf("%lf",&dH4);
		dH=dH1+dH2+dH3+dH4;
		printf("\nBuyuk kare orta kenarin orta nokta yukseklerini girin");
		printf("\nOrta Kenar H1=");
		scanf("%lf",&oH1);
		printf("\nOrta Kenar H2=");
		scanf("%lf",&oH2);
		printf("\nOrta Kenar H3=");
		scanf("%lf",&oH3);
		printf("\nOrta Kenar H5=");
		scanf("%lf",&oH4);
		oH=oH1+oH2+oH3+oH4;
		printf("\nOrta Kesisim Bolgesi H degeri=");
		scanf("%lf",&H);
		Vtoplam=(pow(A,2)/4)*(dH+(2*oH)+(4*H));
		printf("\nBagli Karelerle hacim Toplam=%.3lfm3",Vtoplam);
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		break;
		case 14:
			
			alan_hesap alan_hesap;
			alan_hesap.	showinfos();
			
			
		break;	
		
	case 15:
		hacim_alan1 hacim_alan1;
		hacim_alan1.showinfos3();
	
	break;
		case 16:
	
			hacim_alan hacim_alan;
			hacim_alan.	showinfos2();

	break;
		case 17:
		
		double u1,c1,d1,ctop,utop,dtop,V,OAK,pay,payda,kot,F;
		int cift,cift0,uc,uc0,dort,dort0,zzzz;
		char cevOAK[5];
		
		
		printf("\n\n\nIki kenar ile kesisen kac noktaniz var? (1,2...) ==>");
		scanf("%i",&cift);
		cift0=0;
		ctop=0;
		while (cift!=cift0){
		cift0=cift0+1;
		printf("\n%i. noktanin degeri=",cift0);
		scanf("%lf",&c1);
		ctop=ctop+c1;
		
		}
		
		printf("\n\n\nUc kenar ile kesisen kac noktaniz var? (0,1,2...) ==>");
		scanf("%i",&uc);
		uc0=0;
		utop=0;
		while (uc!=uc0){
		uc0=uc0+1;
		printf("\n%i. noktanin degeri=",uc0);
		scanf("%lf",&u1);
		utop=utop+u1;
		}
		
		printf("\n\n\nDort kenar ile kesisen kac noktaniz var? (0,1,2...) ==>");
		scanf("%i",&dort);
		dort0=0;
		dtop=0;
		while (dort!=dort0){
		dort0=dort0+1;
		printf("\n%i. noktanin degeri=",dort0);
		scanf("%lf",&d1);
		dtop=dtop+d1;
		
		}
		
		pay=ctop+(2*utop)+(4*dtop);
		payda=cift+(uc*2)+(dort*4);
		OAK=pay/payda;
		printf("\n\nOrtalama Arazi Kot degeriniz=%lf",OAK);
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		printf("\nHesaplanan OAK degerininden toprak hacmini bulmak ister misiniz? (E/H)==>");
		scanf("%c",cevOAK);
		scanf("%c",cevOAK);
		zzzz=5;
		while (cevOAK[0]==z[0]||cevOAK[0]==z[1]&&zzzz==5){
			printf("\n\nTaban kot degeriniz=");
			scanf("%lf",&kot);
			printf("\nSekil icin hesaplanan F degeriniz=");
			scanf("%lf",&F);
			V=F*(OAK-kot);
			printf("\n\n\nSeklinizin hacmi %.3lf m3 dur.",V);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			zzzz=zzzz+1;
		}
	break;
	
		case 18:
			do{
			double sonuc_x,sonuc_y;
			printf("X1 degerini girin==>");
			scanf("%lf",&X);
			printf("Y1 degerini girin==>");
			scanf("%lf",&Y);
			printf("S ara mesafesini degerini girin==>");
			scanf("%lf",&S);
			printf("Aci degerini girin==>");
			scanf("%lf",&aci);
			aci=aci*(pi/200);
			sonuc_x=X+S*cos(aci);
			sonuc_y=Y+S*sin(aci);
			printf("\nX2 degeri=%.3lfm\t\tY2 degeri=%.3lfm\n",sonuc_x,sonuc_y);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			printf("\n\n\n\n\nTekrar Temel Odev 1 hesabi yapmak ister misiniz(E/H)?===>");
			scanf("%s",again);
			}while (again[0]==z[0]||again[0]==z[1]);
			
			break;
			
	case 19:
		do{
		printf("X1 degerini girin==>");
		scanf("%lf",&X);
		printf("Y1 degerini girin==>");
		scanf("%lf",&Y);
		printf("\nX2 degerini girin==>");
		scanf("%lf",&X2);
		printf("Y2 degerini girin==>");
		scanf("%lf",&Y2);	
		H2=Y2-Y;
		H1=X2-X;	
		s2=atan(H2/H1);
		s2=s2*(200/pi);
		if (H1<0) {
			s2=s2+200;
		}
		if (H1>0&&H2<0) {
			s2=s2+400;
		}	
		S=sqrt(pow(H2,2)+pow(H1,2));
		printf("\nAci degeriniz=%.6lfgrad\t\tS mesafeniz=%.3lfm",s2,S);	
		PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\nTekrar Temel Odev 2 hesabi yapmak ister misiniz(E/H)?===>");
		scanf("%s",&again);	
		}while (again[0]==z[0]||again[0]==z[1]);
		
		break;
		case 20:
			double top,kaci,semt1;
			do{
			printf("\nBulunmak istenen semt acisinden onceki semt=");
			scanf("%lf",&semt1);
			printf("Bulunmak istenen noktaya ait kirilma acisi=");
			scanf("%lf",&kaci);
			top=kaci+semt1;
			if(0<=top<200) toplam0=top+200;
			if(200<=top<600) toplam0=top-200;
			if(600<=top) toplam0=top-600;
			printf("\n\nBulunmak istenen semt acisi=%.6lfgrad",toplam0);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			printf("\n\n\n\n\nTekrar Temel Odev 3 hesabi yapmak ister misiniz(E/H)?===>");
			scanf("%s",again);
			}while (again[0]==z[0]||again[0]==z[1]);
			
		break;
		case 21:
			double top0,semt0,semt2;
			do{
			printf("\nBulunmak istenen kirilma acisi noktasindan bir onceki nokta arasi semt acisi=");
			scanf("%lf",&semt0);
			printf("\nBulunmak istenen kirilma acisi noktasindan bir sonraki nokta arasi semt acisi=");
			scanf("%lf",&semt2);
			if (semt0>semt2) top0=400-semt0+semt2;
			if (semt0<semt2) top0=400-semt0-semt2;
			printf("\nKirilma acisi=%.6lfgrad",top0);
			PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
			printf("\n\n\n\n\nTekrar Temel Odev 4 hesabi yapmak ister misiniz(E/H)?===>");
			scanf("%s",again);
			}while (again[0]==z[0]||again[0]==z[1]);
			break;

		
			
	default:
		printf("\nhatali sayi girdiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		zz=5;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto ILK;
	break;	
}
	
	printf("\n\n\n\n\nVIZE kismina geri donmek ister misiniz???:E/H");
		secim=getch();
		if(secim=='E'||secim=='e'){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		zz=5;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto ILK;}
	
	
	
		printf("\n\nprogrami yeniden baslat:E/H");
secim=getch();
if(secim=='E'||secim=='e'){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
	printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	zz=5;
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	goto basa;
}	



		break;	
	
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
		//case 2 vize sonu....
	case 3:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   -->FINAL<--");
		printf("\n\t\t\t\t\t\t-->HOSGELDINIZ<--");
		ILK2: 
		if (zz==6) printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t-->TEKRAR HOSGELDINIZ<--");
		printf("\n\n\nBu kisimda degerlerin hesabinda mutlaka F tablosu ve T tablosu gerekmektedir.");
		printf("\nBu baglamda gerekli tablo gorselleri kurulum dosyasi icide tablo klasoru icerisindedir.");
		printf("\n\n\n\nYapabileceginiz Hesaplamalar su sekildedir:");
		printf("\n\nJeodezik Ag Yontemi ile deformasyon icin \t\t\t\t\t\t: 1");
		printf("\nStandart Sapmalari esit Olculerin Ort. Deger. karsilastirmasi   \t\t\t: 2");
		printf("\nStandart Sapmalari farkli Olculerin Ort. Deger. karsilastirmasi \t\t\t: 3");
		printf("\nPope Testi icin \t\t\t\t\t\t\t\t\t: 4");
		printf("\nT testi icin \t\t\t\t\t\t\t\t\t\t: 5");
		printf("\n\nNOT:Girdiginiz sayilarin kusuratini nokta (.) ile girin.Virgul (,) kullanmayin....");
		printf("\nNOT:Girdiginiz degerleri metre ve grad cinsinden giriniz...");
		printf("\n\nSeciminiz=");
		scanf("%i",&islem);
      	
		switch(islem){
		
		case 1 :
			
			jeo_ag jeo_ag;
			jeo_ag.	showinfos8();
			
			break;
			
		case 2:
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t...Yakinda...");
			printf("\n\nBu kisim icin calismalar halen devam etmektedir anlayisiniz icin TESEKKURLER...");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			
			Sleep(3000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
			
			break;
		
		
		case 3:
				
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t...Yakinda...");
			printf("\n\nBu kisim icin calismalar halen devam etmektedir anlayisiniz icin TESEKKURLER...");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			
			Sleep(3000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
			
			
			
			break;
		case 4:
			double u,f,deger,sonuc1,sonuc2,ft,c,Q,Vi,Tip,en;
			int ev;
			char cev;
			printf("\n\nn degerini girin=");
			scanf("%lf",&n);
			printf("\nu degerini girin=");
			scanf("%lf",&u);
			printf("\nd degerini girin=");
			scanf("%lf",&d);
			printf("\nalfa degerini girin=");
			scanf("%lf",&alfa);
			f=n-u+d;
			en=1/n;
			alfa=1-alfa;
			deger=pow(alfa,en);
			sonuc1=n-f-1;
			sonuc2=n-f;
			printf("\n\n\nF tablodan bakilacak deger==>F==>1,%.0lf==>bak�lcak yuzde==>%.3lf",sonuc1,deger);
			printf("\nTablodan baktiginiz F degerini girin=");
			scanf("%lf",&ft);
			
			c=pow((((n-f)*ft)/(n-f-1+ft)),0.5);
			printf("\n\nSigma degerinizi girin (mm)=");
			scanf("%lf",&sigma);
			ev=1;
			while(ev==1||cev=='e'||cev=='E'){
				ev=2;
				printf("\n\nVi degerinizi girin=");	
				scanf("%lf",&Vi);
				Vi=fabs(Vi);
				printf("\nQvivi degerinizi girin=");
				scanf("%lf",&Q);
				Tip=Vi/(sigma*sqrt(Q));
				printf("\n\n\nT(i,p) degeriniz=%lf\t\t\tc degeriniz=%lf",Tip,c);
				if(c>Tip) printf("\n\t\t\t   Olcu UYUSUMLUDUR...");
				if(c<Tip) printf("\n\t\t\t   Olcu UYUSUMSUZDUR...");
				printf("\n\n\nBir olcu daha kontrol etmek ister misiniz(E/H)???");
				cev=getch();
			}
			
		break;
	case 5:
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t...Yakinda...");
			printf("\n\nBu kisim icin calismalar halen devam etmektedir anlayisiniz icin TESEKKURLER...");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			
			Sleep(3000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
			
		
		/*
			double u,f,deger,sonuc1,sonuc2,ft,c,Q,Vi,Tip,en;
			int ev;
			char cev;
			printf("\n\nn degerini girin=");
			scanf("%lf",&n);
			printf("\nu degerini girin=");
			scanf("%lf",&u);
			printf("\nd degerini girin=");
			scanf("%lf",&d);
			printf("\nalfa degerini girin=");
			scanf("%lf",&alfa);
			f=n-u+d;
			en=1/n;
			alfa=1-alfa;
			deger=pow(alfa,en);
			printf("\t\t\t\t\t\t\t\tdeger=%lf",deger);
			sonuc1=n-f-1;
			sonuc2=n-f;
			printf("\n\n\nF tablodan bakilacak deger=F%0.lf,%.0lf",sonuc1,sonuc2);
			printf("\nTablodan baktiginiz F degerini girin=");
			scanf("%lf",&ft);
			
			c=pow((((n-f)*ft)/(n-f-1+ft)),0.5);
			printf("\n\nSigma degerinizi girin (mm)=");
			scanf("%lf",&sigma);
			ev=1;
			while(ev==1||cev=='e'||cev=='E'){
				ev=2;
				printf("\n\nVi degerinizi girin=");	
				scanf("%lf",&Vi);
				Vi=fabs(Vi);
				printf("\nQvivi degerinizi girin=");
				scanf("%lf",&Q);
				Tip=Vi/(sigma*sqrt(Q));
				printf("\n\n\nT(i,p) degeriniz=%lf\t\t\tc degeriniz=%lf",Tip,c);
				if(c>Tip) printf("\n\t\t\t   Olcu UYUSUMLUDUR...");
				if(c<Tip) printf("\n\t\t\t   Olcu UYUSUMSUZDUR...");
				printf("\n\n\nBir olcu daha kontrol etmek ister misiniz(E/H)???");
				cev=getch();
			}
				
		*/		
				
		break;
			
		default:
		printf("\nhatali sayi girdiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		zz=6;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto ILK2;
		break;	
	}
			
			
			
			
			
		printf("\n\n\n\n\n\n\n\nFINAL kismina geri donmek ister misiniz???:E/H");
		secim=getch();
		if(secim=='E'||secim=='e'){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		zz=6;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto ILK2;}
		
		
		
		printf("\n\nprogrami yeniden baslat:E/H");
		secim=getch();
		if(secim=='E'||secim=='e'){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		zz=6;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto basa;}	
		
		break;
		
		
		
		
		
		
		case 4:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\t\t\t\t\t\t -->EGLENCEYE<--");
			printf("\n\t\t\t\t\t\t-->HOSGELDINIZ<--");
			printf("\n\n\n\nEglenceli iceriklerden birini secebilir biraz da olsa herseyi unutup kafa dagatabilrisiniz...");
			printf("\n\nBil bakalim kac oyunu icin\t\t\t\t\t: 1");
			printf("\nKaliteli muzik dinleyip kafa dagitmak icin\t\t\t: 2");
			printf("\n\n\nNOT:Zaman icerisinde bu kisimdaki icerik sayisi artirilacaktir.");
			printf("\n\n\n\nSectiginiz kisim=");
			scanf("%i",&secime);
	
			switch(secime){
			
			
			case 1:
			
		printf("\n\nBIL BAKALIM KAC OYUNU\n\n");
	printf("\nZorluk Secin...");
	printf("\n1)))Kolay Seviye 0-10 arasinda Bir dogal sayiyi bil");
	printf("\n2)))Orta Seviye 0-20 arasinda Bir dogal sayiyi bil");
	printf("\n3)))Zor Seviye (COK BALLIYSAN) 0-50 arasinda Bir dogal sayiyi bil");
	printf("\n4)))Kurallara bakmak icin");
	printf("\nSectiginiz kisim=");
	scanf("%i",&secim);
	
	switch(secim){
	
	case 1:
		do { 
		
		a=rand()%10;
		//printf("\na=%.1d",a);
		printf("\nBir sayi tahmin edin=");
		scanf("%i",&ai);
		ai=fabs(ai);
		ai=trunc(ai);
		printf("\nGirdiginiz sayi=%i",ai);
		q=0;
		while (q!=3){
		
		if(ai!=a){
			printf("\n\nYanlis Tahmin tekrar deneyin...");
			PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
			printf("\nYeni bir sayi tahmin edin=");
			scanf("%i",&ai);
			ai=fabs(ai);
			ai=trunc(ai);
			printf("\nGirdiginiz sayi=%i",ai);
			q=q+1;
			if(q==3){printf("\n\n--->KAYBETTINIZ<---");
			}
		}
		if(ai==a){
			printf("\nDogru bildiniz Tebrikler...");
			PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
			q=3;
			}	
	    }
		
			
		break;
	case 2:
		a=rand()%20;
		//printf("\na=%.1d",a);
		printf("\nBir sayi tahmin edin=");
		scanf("%i",&ai);
		ai=fabs(ai);
		ai=trunc(ai);
		printf("\nGirdiginiz sayi=%i",ai);
		q=0;
		while (q!=3){
		
		if(ai!=a){
			printf("\n\nYanlis Tahmin tekrar deneyin...");
			PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
			printf("\nYeni bir sayi tahmin edin=");
			scanf("%i",&ai);
			ai=fabs(ai);
			ai=trunc(ai);
			printf("\nGirdiginiz sayi=%i",ai);
			q=q+1;
			if(q==3){printf("\n\n--->KAYBETTINIZ<---");}
		}
		if(ai==a){
			printf("\nDogru bildiniz Tebrikler...");
			PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
			q=3;
			}	
	    }
		
		break;
	case 3:
		a=rand()%50;
		//printf("\na=%.1d",a);
		printf("\nBir sayi tahmin edin=");
		scanf("%i",&ai);
		ai=fabs(ai);
		ai=trunc(ai);
		printf("\nGirdiginiz sayi=%i",ai);
		q=0;
		while (q!=3){
		
		if(ai!=a){
			
			
			printf("\n\nYanlis Tahmin tekrar deneyin...");
			PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
			printf("\nYeni bir sayi tahmin edin=");
			scanf("%i",&ai);
			ai=fabs(ai);
			ai=trunc(ai);
			printf("\nGirdiginiz sayi=%i",ai);
			q=q+1;
			if(q==3){printf("\n\n--->KAYBETTINIZ<---");}
		}
			if(ai==a){
			printf("\nDogru bildiniz Tebrikler...");
			PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
			q=3;
			}
	    }
		
		break;
	case 4:
		printf("\nBasit Sayi Tahmin Oyunu:\n->Oyunda temel amac sectigin sayi araliginda benim tuttugum dogal sayiyi bilmek");
		printf("\n->Sadece '1+3'=4 hakkiniz vardir.\n->Girdiginiz negatif sayilar otomatik pozitif hale donusturulecektir\nkusurlu sayi girerseniz yine otomatik tam sayiya donucektir(NOT>CEZA olarak kalan tum haklariniz kaybolur!)");
		printf("\n->Tahmin edilecek sayilara 0 rakimi ve son sayi da dahildir.");
		printf("\n\nIste oyun bu kadar kolay... IYI EGLENCELER....");
		printf("\n\n\n\n\n0-10 arasi sayi tahmin oyunu ile baslamak ister misiniz(E/H)???");
		scanf("%s",again);
		}while (again[0]==z[0]||again[0]==z[1]);
		break;
	default:
		printf("hatali bir tuslama yaptiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		zz=5;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto basa;
		break;
		
	}
			
			break;
		case 2:
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t--->Tokat Ellik Oyun Havasi<---\n\n");
			printf("\nSu anda calan parca sadece 20sn'dir.Oyun havasinin demosudur.'");
			printf("\nParcanin tam halini dinlemek icin\nklasor icinde 'Tokat.mp3' isimli dosyayi acabilirsiniz...");
			printf("\n\nTokat bolgesine has olan bu oyun havasi eski  ");
			printf("\nOyun,yoremizde kadinlar ve erkekler tarafindan\noynanan bir oyun olup, ciftcilikle ugrasan yore insaninin\ntarlasini bicerken, duygularini dile getirmektedir.");
			printf("\n\nTokatlilar 2009 yilinda Tokat Cumhuriyet meydaninda\ndaha once bin 40 kisi ile tescillenen Ellik rekorunu egale edip\ndunya rekorunu kirmak icin 27 Ekim Pazar gunu Esenyurt Hakan Sukur stadinda bulustu.\nTokatli milletvekilleri, is adamlari, sivil toplum kuruluslari, sanatcilari\nve Istanbul'da yasayan Tokat halkinin katilimiyla\nyapilan etkinlikte 1270 kisi ile rekor yeniden egale edilmistir.");
			printf("\n\n\n\n\n\n\n");
			PlaySound(TEXT("Music\\M1.wav"),NULL,SND_SYNC);
			printf("\n\nTokat Ellik Oyun Havasini Begendin mi?(E/H)=");
			secim1=getch();
			if(secim1=='E'||secim1=='e'){
				printf("\n\n\n\n\n\n\n\n\n\n\n\nOooo cidden iyi bir muzik kulagin var.iyi muzigi hemen bildin.\n\t\t TEBRIKLER...");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
				PlaySound(TEXT("Music\\A2.wav"),NULL,SND_SYNC);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
				printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				zz=5;
				PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
				goto basa;
				
			}
			if(secim1=='H'||secim1=='h'){
				printf("\nSen muzikten kaliteli ne anlarsin...\nALSANA SEN BUNU HAK ETT�N!...");
				PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
				PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
				PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
				system("C:\\WINDOWS\\System32\\shutdown -r");
			}
			else {
			
				printf("\nhatali tuslama yaptiniz.Lutfen tekrar deneyin...");
				PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
			}
			break;
		
		
			
			default:
		printf("hatali bir tuslama yaptiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		zz=5;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto basa;
		break;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
	printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Sleep(1000);
	zz=5;
	PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
	goto basa;
	
	break;
	
	
	
	
		case 5:
			//vicut kitle endeksi.....
			double boy,kilo;
			int endeks;
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\t\t\t\t\t--->Vicut Kitle Endeksi Hesaplama<---");
			printf("\n\n\nNot:Hesaplamalarda virgul(,) kullanmayin.");
			printf("\nNot:Hesaplamalari dogru yapabilmek icin kilonuzu kg boyunuzu da m cinsinden giriniz...");
			printf("\n\n\n\nLutfen boyunuzu girin(Orn:1.70)==>");
			scanf("%lf",&boy);
			printf("\nLutfen kilonuzu girin(Orn:70.5)==>");
			scanf("%lf",&kilo);
			endeks=VicutKitleEnd(boy,kilo);
			printf("\n\nprogrami yeniden baslat:E/H");
			secim=getch();
			if(secim=='E'||secim=='e'){
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			zz=6;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;}	
		
			break;
			
		case 6:
			goto son;
			
			break;
		
		case 42:
		
			printf("\n\n\n\n\n\n\n\n\n\n\n\nOtostopcunun Galaksi Rehberi kitabini bilen kulturlu bir insansin tebrikler! ");
			printf("\nHayatta Herseyin 42 sayisina ciktigi dusuncesinde misin Sende??? ");		
			printf("\nNeyse saka bi yana bu kismi Emegi Gecenler bolumunu espirili bir sekilde gostermek amaciyla olusturulmustur");
			printf("\n\nEMEGI GECENLER\n\nOnur\t\tOnur\n->Hazirlayan:\tOnur CAGLAR\n->Sunan:\tOnur CAGLAR\n->Duzenleme:\tOnur CAGLAR\n->Kurgu:\tOnur CAGLAR\n->Takim:\tKonyaspor\n->BASKA\t\tBILMEM\n->HADI \t\tBYEEE...");
			printf("\n\nOzel Tesekkur:\nProji ilk gordugu andan beri cokca destekleyen ve projenin bu son haline gelmesinde\ntest asamasindaki katkilariyla destek veren degerli arkadasim Bengu OZSUBASI ya tesekkur ederim...");
			printf("\n\nILETISIM\nSoru, sorun ve onerileriniz icin:\nonurcaglar60@hotmail.com");
			PlaySound(TEXT("Music\\K1.wav"),NULL,SND_SYNC);
			q=0;
			if(q==0){
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	
			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
			printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(1000);
			zz=5;
			PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
			goto basa;
		break;
		
		case 99:
			
			test1 test1;
			test1.	showinfos99();
			
			
			break;
		default:
		printf("\nhatali sayi girdiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		zz=5;
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		goto basa;
		break;
		
	}
}
	else{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nhatali sifre girdiniz");
		printf("\nSifrenizi bilmiyor yada Unutuysaniz yetkiliyle iletisime gecin...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		return main();}
	
	
	}else {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nhatali kullanici adi girdiniz...");
		printf("\nKullanici bilmiyor yada Unutuysaniz yetkiliyle iletisime gecin...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		return main();
	}	 	
	
	
	/*else {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBilgisayarinizin giris icin Lisansi yok!!!");
		printf("Lutfen yetkili ile iletisime gecin...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		return 0;
	
	}*/

//fclose (d1);
//fclose (d2);	
		


	
son:
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t----->Gule Gule<-----\n");
printf("\n\n\t\t\tMuh_Olc_Pro yazilimini kullandiginiz icin TESEKKURLER...");
printf("\n\t\t\t\t\t  Versiyon:::V2.0.1\n");
PlaySound(TEXT("Music\\W2.wav"),NULL,SND_SYNC);
system("pause");
	return 0;}

