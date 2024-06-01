#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define pi 3.141592654
#define c 6399593.626
#define e1 0.0066943800
#define e2 0.0067394968

double baslangic (double x,double y,double z);
double baslangic1 (double ,double,double);

	double hesapN(double enlem)
	{
     double N;
     enlem=enlem*pi/180;
     N=c/(sqrt(1+e2*pow(cos(enlem),2)));
     return (N);
    }
    double hesapx(double N,double h,double enlem,double boylam)
	{
     double x;
        enlem=enlem*pi/180;
        boylam=boylam*pi/180;
     x=((N+h)*cos(enlem)*cos(boylam));
     return(x);
    }
    double hesapy(double N,double h,double enlem,double boylam)
	{
	double y;
	    enlem=enlem*pi/180;
        boylam=boylam*pi/180;
	y=((N+h)*cos(enlem)*sin(boylam));
	return (y);
    }
    double hesapz(double N,double h,double enlem)
	{
    double z;
   	    enlem=enlem*pi/180;
    z=((N/(1+e2))+h)*sin(enlem);
	return(z); 
    }
	
		
		
int main()
{
	FILE *dosya1,*dosya2;
    char dosya_adi[80],secim;
	int islem;
    double no,x,y,z,enlem,boylam,h,N,enlem2,N2;
	printf("\n\tHOSGELDINIZ\n");
	printf("\nne hesaplayacaginizi secin...");
	printf("\nenlem,boylam,yukseklik hesaplama icin: 1\nx,y,z hesaplama icin: 2");
	printf("\nseciminiz=");
	scanf("%i",&islem);
	
      	
	switch(islem){
		case 1 :
			
		    //printf("\nOkunacak dosya adini girin:");
            //gets(dosya_adi);
		    dosya1=fopen("jeodezi1.txt","r");
            if (dosya1==NULL)
            {
   	        printf("\ndosya acilamadi...");
   	        return 0;
            }
	        dosya2=fopen("deneme1.txt","w");
	        fprintf(dosya2,"\nno\t\tenlem\t\t\tboylam\t\t\th");
	        while(!feof(dosya1))
	        {
		        fscanf(dosya1,"%lf%lf%lf%lf",&no,&x,&y,&z);
		        enlem2=baslangic (x,y,z);
		        N2=baslangic1 (x,y,z);
		        boylam=atan(y/x);
    	        h=((x/(cos(enlem2)*cos(boylam)))-N2);
    	        boylam=boylam*180/pi;
    	        enlem2=enlem2*180/pi;
		        fprintf(dosya2,"\n%2.lf\t\t%lf\t\t%lf\t\t%lf\t\t%lf",no,enlem2,boylam,h);	
	        }
	
         	printf("\nN=%lf\nenlem=%lf\nboylam=%lf\nh=%lf",N2,enlem2,boylam,h);
	
	        fclose(dosya1);
            fclose(dosya2);
			break;
			
			
	case 2 :
		
        printf("\nOkunacak dosya adini girin:");
        scanf("%s",&dosya_adi);
        printf("adi=%s%s%s%s%s%s%s%s",dosya_adi[0,1,2,3,4,5,6,7]);
		dosya1=fopen("dosya_adi[0,1,2,3,4,5,6,7].txt","r");
        if (dosya1==NULL)
        {
   	    printf("\ndosya acilamadi...");
   	    return 0;
        }
		dosya2=fopen("deneme2.txt","w");
        fprintf(dosya2,"\nno\t\tN\t\tx\t\ty\t\tz");
        while(!feof(dosya1))
        {
   	            fscanf(dosya1,"%lf%lf%lf%lf",&no,&enlem,&boylam,&h);

	         	N=hesapN(enlem);
   	            x=hesapx(N,h,enlem,boylam);
         	    y=hesapy(N,h,enlem,boylam);
   	            z=hesapz(N,h,enlem);
   	    
	            fprintf(dosya2,"\n\n%lf\t%lf\t%lf\t%lf\t%lf",no,N,x,y,z);
     	
            }
            printf("\nN=%lf\nx=%lf\ny=%lf\nz=%lf",N,x,y,z);	
            fclose(dosya1);
            fclose(dosya2);
	break;
	
	
	default:
		printf("\nhatali sayi girdiniz...");
	break;	
	}
	
printf("\n\nprogrami yeniden baslat:E/H");
secim=getch();
if(secim=='E'||secim=='e'){
	return main();
}	
printf("\n\n----->Bitti\n");
return(0);	
}

double baslangic (double x,double y,double z)
{
    double enlem0,N0,enlem1,N1,enlem2,N2;
	enlem0=atan(z/(sqrt(pow(x,2)+pow(y,2))));
	N0=c/(sqrt(1+e2*pow(cos(enlem0),2)));
	enlem1=atan((z+e1*N0*sin(enlem0))/(sqrt(pow(x,2)+pow(y,2))));
    do
	{
    	enlem1==enlem2;
    	N1=(c/(sqrt(1+e2*pow(cos(enlem1),2))));
    	enlem2=atan((z+e1*N1*sin(enlem1))/(sqrt(pow(x,2)+pow(y,2))));
    	N2=(c/(sqrt(1+e2*pow(cos(enlem2),2))));	
	}
    while ((fabs(N2-N1))<(1e-3));
    {
		return(enlem2);
    }
	}
	double baslangic1 (double x,double y,double z )
    {
	double enlem0,N0,enlem1,N1,enlem2,N2;
	enlem0=atan(z/(sqrt(pow(x,2)+pow(y,2))));
	N0=c/(sqrt(1+e2*pow(cos(enlem0),2)));
	enlem1=atan((z+e1*N0*sin(enlem0))/(sqrt(pow(x,2)+pow(y,2))));
    do
	{
    	enlem1==enlem2;
    	N1=(c/(sqrt(1+e2*pow(cos(enlem1),2))));
    	enlem2=atan((z+e1*N1*sin(enlem1))/(sqrt(pow(x,2)+pow(y,2))));
    	N2=(c/(sqrt(1+e2*pow(cos(enlem2),2))));	
	}
    while ((fabs(N2-N1))<(1e-3));
    {
	return(N2);
    }
}
