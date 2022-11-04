#include<bits/stdc++.h>
using namespace std;

int main() {
 cout << " \n Giai phuong trinh bat nhac ax + b = 0 ";
	int a,b;
 cout << " \n Nhap he so a,b cua phuong trinh"; cin >> a >> b;
 if ( a==0) 
  	if ( b  == 0) cout << "\n Phuong trinh co vo so nghiem" ;
  	else cout << " \n Phuong trinh vo ngiem!";
else cout << " \n Phuong trinh co nghiem x = " << ( -b/a);
}