#include<iostream>

using namespace std;

int main() {
 int a,b;
 cin >> a >> b;
 cout << " Nhap hai so nguyen a,b: "; 
 int max;
 if ( a> b) max = a;  
 else max = b;
 cout << " So lon nhat trong hai so la :" << max;
}