#include<bits/stdc++.h>
using namespace std;
int main()
{
double a,b,c;
cout<<"nhap canh a: "; cin>>a;
cout<<"nhap canh b: "; cin>>b;
cout<<"nhap canh c: "; cin>>c;
if(a<=0|| b<=0||c<=0) cout<<"canh phai lon hon 0";
else
{
if (a+b>c || a+c>b || b+c>a) cout<<"khong phai 3 canh cua tam giac";
else
{
if(a==b&&b==c&& a==c) cout<<"Tam giac deu";
else
{
if(a==b || b==c || c==a) cout<<"Tam giac can";
else
{
if (a*a+b*b==c*c || a*c+c*c == b*b|| b*b +c*c==a*c)
{
cout<<"Tam giac vuong";
}
else cout<<"Tam giac thuong";
}
}
}
}
}