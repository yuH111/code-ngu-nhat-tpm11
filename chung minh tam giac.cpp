#include<iostream>
#include<math.h>

using namespace std;

int main ()  {
int a,b,c;

cout << " Nhap canh a = " ;
	cin >> a;
cout << " Nhap canh b = " ;
	cin >> b;
cout << " Nhap canh c = " ;
	cin >> c;
		
if ( a == b  && b == c )
		cout << " Tam giac  nay la tam giac deu"; 
	else   
		if ( a == b && b == c || a == c)
		cout << "Tam giac nay la tam giac deu "; 
	else  if (a*a+b*b==c*c || a*c+c*c == b*b|| b*b +c*c==a*c) 
		cout<<"Tam giac nay la tam giac vuong can"; 
		else cout << " Tam giac nay la tam giac can";
	else
		if 	(a*a+b*b==c*c || a*c+c*c == b*b|| b*b +c*c==a*c) 
		cout << " Day la tam giac vuong"
		else cout << " Day la tam giac thuong"
}   
}
	

			