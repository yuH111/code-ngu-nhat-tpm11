#include<iostream>
#include<math.h>

using namespace std;

int main () {
int M,N;

cout << " Hay viet bieu thuc dieu kien de M va N la hai so chan	"
cout << " Nhap M ";
	cin >> M;
cout << " Nhap N ";
	cin >> N;

if ( M % 2  == 0 && N % 2 == 0) 
	cout << " M va N la so chan ";
else
	cout << " M va N khong phai la so chan";
	
}