#include<iostream>
using namespace std;
 int main () {
	int a,b;
	cout << "\n Nhap a bang"; cin >>a;
	cout << "\n Nhap b bang"; cin >> b;
	if  ( a != 0 )
		if ( b > 0)
			cout << " \n a!= 0 va b > 0 ";
		else
	 		cout << " \n a != 0 va b <=0";
	else
	{
		if ( b > 0 )
			cout << " \n a != 0 va b > 0 ";
		else 
	 		cout << " \n a != 0 va b <=0";
	}
}