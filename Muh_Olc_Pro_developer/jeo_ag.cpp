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
#include"jeo_ag.h"
#define pi 3.141592654


void jeo_ag::showinfos8(){
	
		double n0,n1,s,n,m,m1,k,l,P11,P12,P13,P14,P21,P22,P23,P24,VV0,VV1,
	d1,d2,d3,d4,d5,d6,dt,dn,delta1,delta2,delta3,delta4,delta5,delta6,
	delta7,delta8,d7,d8,P15,P16,P17,P18,P25,P26,P27,P28,deltatop,F;
	int secim;
	
	
	
	
		
	printf("\nToplam kac adet bakilan noktaniz var (3-8)???=");
	scanf("%i",&secim);
	
	switch(secim){
	
	case 3:
		
	printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta syiniz (n)=");
	scanf("%lf",&n);
	printf("\n 1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	dt=d1+d2+d3;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	
	if(m>m1) F=m/m1;
	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;
	
	
	case 4:
		
	printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta sayiniz (n)=");
	scanf("%lf",&n);
	printf("\n1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("1. periyot Son nokta degeriniz=");
	scanf("%lf",&P14);
	printf("\n2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	printf("2. periyot Son nokta degeriniz=");
	scanf("%lf",&P24);
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	d4=(P24-P14)*10000;
	dt=d1+d2+d3+d4;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	delta4=d4-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2)+pow(delta4,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	

	if(m>m1) F=m/m1;
	
	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P14,P24,d4,delta4);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;
	case 5:
		printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta sayiniz (n)=");
	scanf("%lf",&n);
	printf("\n1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("1. periyot 4. nokta degeriniz=");
	scanf("%lf",&P14);
	printf("1. periyot Son nokta degeriniz=");
	scanf("%lf",&P15);
	printf("\n2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	printf("2. periyot 4. nokta degeriniz=");
	scanf("%lf",&P24);
	printf("2. periyot Son nokta degeriniz=");
	scanf("%lf",&P25);
		
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	d4=(P24-P14)*10000;
	d5=(P25-P15)*10000;
	dt=d1+d2+d3+d4+d5;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	delta4=d4-dn;
	delta5=d5-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2)+pow(delta4,2)+pow(delta5,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	
	if(m>m1) F=m/m1;	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P14,P24,d4,delta4);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P15,P25,d5,delta5);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;
	
	case 6:
	printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta sayiniz (n)=");
	scanf("%lf",&n);
	printf("\n1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("1. periyot 4. nokta degeriniz=");
	scanf("%lf",&P14);
	printf("1. periyot 5. nokta degeriniz=");
	scanf("%lf",&P15);
	printf("1. periyot Son nokta degeriniz=");
	scanf("%lf",&P16);
	printf("\n2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	printf("2. periyot 4. nokta degeriniz=");
	scanf("%lf",&P24);
	printf("2. periyot 5. nokta degeriniz=");
	scanf("%lf",&P25);
	printf("2. periyot Son nokta degeriniz=");
	scanf("%lf",&P26);
	
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	d4=(P24-P14)*10000;
	d5=(P25-P15)*10000;
	d6=(P26-P16)*10000;
	dt=d1+d2+d3+d4+d5+d6;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	delta4=d4-dn;
	delta5=d5-dn;
	delta6=d6-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2)+pow(delta4,2)+pow(delta5,2)+pow(delta6,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	
	if(m>m1) F=m/m1;
	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P14,P24,d4,delta4);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P15,P25,d5,delta5);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P16,P26,d6,delta6);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;	
	
	
	case 7:
	printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta sayiniz (n)=");
	scanf("%lf",&n);
	printf("\n1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("1. periyot 4. nokta degeriniz=");
	scanf("%lf",&P14);
	printf("1. periyot 5. nokta degeriniz=");
	scanf("%lf",&P15);
	printf("1. periyot Son nokta degeriniz=");
	scanf("%lf",&P16);
	printf("\n2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	printf("2. periyot 4. nokta degeriniz=");
	scanf("%lf",&P24);
	printf("2. periyot 5. nokta degeriniz=");
	scanf("%lf",&P25);
	printf("2. periyot 6. nokta degeriniz=");
	scanf("%lf",&P26);
	printf("2. periyot Son nokta degeriniz=");
	scanf("%lf",&P27);
	
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	d4=(P24-P14)*10000;
	d5=(P25-P15)*10000;
	d6=(P26-P16)*10000;
	d7=(P27-P17)*10000;
	dt=d1+d2+d3+d4+d5+d6+d7;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	delta4=d4-dn;
	delta5=d5-dn;
	delta6=d6-dn;
	delta7=d7-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2)+pow(delta4,2)+pow(delta5,2)+pow(delta6,2)+pow(delta7,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	
	if(m>m1) F=m/m1;
	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P14,P24,d4,delta4);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P15,P25,d5,delta5);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P16,P26,d6,delta6);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P17,P27,d7,delta7);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;
	
	case 8:
		
		printf("\nN0 degerinizi girin=");
	scanf("%lf",&n0);
	printf("\nN1 degerinizi girin=");
	scanf("%lf",&n1);
	printf("\nVV0 degerini girin=");
	scanf("%lf",&VV0);
	printf("\nVV1 degerini girin=");
	scanf("%lf",&VV1);
	printf("\ntoplam bakilan nokta sayiniz (S)=");
	scanf("%lf",&s);
	printf("\nToplam bilinen nokta sayiniz (n)=");
	scanf("%lf",&n);
	printf("\n1. periyot ilk nokta degeriniz=");
	scanf("%lf",&P11);
	printf("1. periyot 2. nokta degeriniz=");
	scanf("%lf",&P12);
	printf("1. periyot 3. nokta degeriniz=");
	scanf("%lf",&P13);
	printf("1. periyot 4. nokta degeriniz=");
	scanf("%lf",&P14);
	printf("1. periyot 5. nokta degeriniz=");
	scanf("%lf",&P15);
	printf("1. periyot Son nokta degeriniz=");
	scanf("%lf",&P16);
	printf("\n2. periyot ilk nokta degeriniz=");
	scanf("%lf",&P21);
	printf("2. periyot 2. nokta degeriniz=");
	scanf("%lf",&P22);
	printf("2. periyot 3. nokta degeriniz=");
	scanf("%lf",&P23);
	printf("2. periyot 4. nokta degeriniz=");
	scanf("%lf",&P24);
	printf("2. periyot 5. nokta degeriniz=");
	scanf("%lf",&P25);
	printf("2. periyot 6. nokta degeriniz=");
	scanf("%lf",&P26);
	printf("2. periyot 7. nokta degeriniz=");
	scanf("%lf",&P27);
	printf("2. periyot Son nokta degeriniz=");
	scanf("%lf",&P28);
	
	d1=(P21-P11)*10000;
	d2=(P22-P12)*10000;
	d3=(P23-P13)*10000;
	d4=(P24-P14)*10000;
	d5=(P25-P15)*10000;
	d6=(P26-P16)*10000;
	d7=(P27-P17)*10000;
	dt=d1+d2+d3+d4+d5+d6+d7+d8;
	dn=dt/n;
	delta1=d1-dn;
	delta2=d2-dn;
	delta3=d3-dn;
	delta4=d4-dn;
	delta5=d5-dn;
	delta6=d6-dn;
	delta7=d7-dn;
	delta8=d8-dn;
	deltatop=pow(delta1,2)+pow(delta2,2)+pow(delta3,2)+pow(delta4,2)+pow(delta5,2)+pow(delta6,2)+pow(delta7,2)+pow(delta8,2);
	m=sqrt((VV0+VV1)/((n0+n1-2)*(s-1)));
	m1=sqrt(deltatop/((s-1)*((1/n0)+(1/n1))));
	k=((n0+n1-2)*(s-1));
	l=s-1;
	m1=pow(m1,2);
	m=pow(m,2);
	if(m1>m) F=m1/m;	
	if(m>m1) F=m/m1;
	
	printf("\n\n1.periyot\t2.periyot\td degeri\tdelta");
	printf("\n  grad\t\tgrad\t\tcc");
	printf("\n\n%.4lf\t\t%.4lf\t\t%.4lf\t\t%.4lf",P11,P21,d1,delta1);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P12,P22,d2,delta2);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P13,P23,d3,delta3);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P14,P24,d4,delta4);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P15,P25,d5,delta5);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P16,P26,d6,delta6);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P17,P27,d7,delta7);
	printf("\n%.4lf\t%.4lf\t%.4lf\t\t%.4lf",P18,P28,d8,delta8);
	printf("\n\nd toplam=%.3lf\t\tdelta^2toplam=%.3lf",dt,deltatop);
	printf("\n\nm degeri=%lf\t\tk degeri=%.1lf",m,k);
	printf("\nm' degeri=%lf\t\tl degeri=%.1lf",m1,l);
	printf("\n\nF degeriniz=%.3lf dir.",F);
	printf("\nF<F_tablo ise deformasyona ugramamistir.");
	printf("\nF>F_tablo ise olcu gruplari arasinda gecen sure icinde yuzde95 ihtimalle deformasyona ugramistir.\n\n");
	PlaySound(TEXT("Music\\S1.wav"),NULL,SND_SYNC);
	break;
	
	
	default:
		printf("\nhatali sayi girdiniz...");
		PlaySound(TEXT("Music\\A1.wav"),NULL,SND_SYNC);
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tArka plan verileri Temizleniyor...");
		printf("\n\t\t\t\t\t     LUTFEN BEKLEYIN...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		PlaySound(TEXT("Music\\K2.wav"),NULL,SND_SYNC);
		
		break;
}
	
	
	
}
