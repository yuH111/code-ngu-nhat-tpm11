#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Nhap vao canh a: ";
    cin>>a;
    cout<<"Nhap vao canh b: ";
    cin>>b;
    cout<<"Nhap vao canh c: ";
    cin>>c;
     
	if( a < b + c && b < a + c && c < a + b ){
	 double p = ( a + b + c ) / 2 ;
	 double s = sqrt(p*( p - a ) * ( p - b ) * ( p - c) ) ;
			cout << " Dien tich tam giac s = " << s ;
      }
    
	else
        
		cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    return 0;
}