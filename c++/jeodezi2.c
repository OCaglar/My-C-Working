#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define pi 3.141592654
#define c 6399593.626
#define e1 0.0066943800
#define e2 0.0067394968

double hesapN(double enlem){

     double N;
     enlem=enlem*pi/180;
     N=c/(sqrt(1+e2*pow(cos(enlem),2)));
     return (N);
}
double hesapx(double N,double h,double enlem,double boylam){
     double x;
        enlem=enlem*pi/180;
        boylam=boylam*pi/180;
     x=((N+h)*cos(enlem)*cos(boylam));
     return(x);
}
double hesapy(double N,double h,double enlem,double boylam){
	double y;
	    enlem=enlem*pi/180;
        boylam=boylam*pi/180;
	y=((N+h)*cos(enlem)*sin(boylam));
	return (y);
}
double hesapz(double N,double h,double enlem){
    double z;
   	    enlem=enlem*pi/180;
    z=((N/(1+e2))+h)*sin(enlem);
	return(z); 
}

int main()
{
   FILE *dosya1,*dosya2;
   char dosya_adi[80];
   double no,enlem,boylam,h,N,x,y,z;
   printf("\nOkunacak dosya adini girin:");
   gets(dosya_adi);
   
   dosya1=fopen(dosya_adi,"r");	
   if(dosya1==NULL)
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
return 0;
}
