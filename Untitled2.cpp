#include<iostream>
#include<math.h>
using namespace std;
 int main () {
 	
	double a,b,c,d;
	cout << "\n Nhap a bang "; cin >> a;
	cout << "\n Nhap b bang "; cin >> b;
	cout << "\n Nhap c bang "; cin >>c;
	
	
	if ( a == 0) {
	  cout << " \n Giai phuong trinh bac hai  bx + c = 0 ";
		  if ( b ==  0)
		   if ( c == 0 ) 
	 		cout << "\n Phuong trinh co vo so nghiem" ;
	 	
		 else 
		 	cout << " \n Phuong trinh vo nghiem" ;	
		
		 else 
		 	cout << " \n Phuong trinh co nghiem";
	}
	else double d = b*b-4*a*c;
	 if ( d < 0 ) 
	 	cout << "\n Phuong trinh vo nghiem ";
	  else  if ( d == 0 )
	  	cout << "\n phuong trinh co nghiem kep";
	
	else
	{
	  if ( d > 0)
	  	  double  x1 = ( -b + sqrt( d) / ( 2*a) )  ;
		  double  x2 = ( -b + sqrt( d) / ( 2*a) ) ;
		  cout << " \n Phuong trinh co 2 nghiem phan biet"; 
	  	 	
	}
}
		