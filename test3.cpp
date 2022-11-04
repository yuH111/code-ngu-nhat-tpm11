#include<iostream>


using namespace std;

int main () {
	

cout << "\n Giai  phuong trinh bac nhat a1x + b1y + c1z = 0" ;
cout << "\n Giai  phuong trinh bac nhat a2x + b2y + c2z = 0" ;
int a1,a2,b1,b2,c1,c2;
float d,dx,dy,x,y;

 	printf("\nNhap a1: "); scanf("%d", &a1);
    printf("\nNhap b1: "); scanf("%d", &b1);
    printf("\nNhap c1: "); scanf("%d", &c1);
    printf("\nNhap a2: "); scanf("%d", &a2);
    printf("\nNhap b2: "); scanf("%d", &b2);
    printf("\nNhap c2: "); scanf("%d", &c2);

 d = a1*b2-a2*b1;
 dx= b1*c2 - b2*c1;
 dy = c1*a2 - c2*a1;

if ( dx == 0 && dy == 0)  {
	if (dx + dy == 0)
	cout << "\n He phuong trinh vo so nghiem"; 
   else
	cout << "\n He phuong trinh vo nghiem ";
}
    else  {
	
	
	  x = dx / d;
      y = dy / d;
        cout << " \n He phuong trinh co  nghiem" << endl;
        cout << "x = " << x<<endl;
        cout << "y = " << y;	
	}
}

	


