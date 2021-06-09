#include <iostream>
#include <conio.h>
using namespace std;

int main ( )
{
const int n=10;
float x[n] , temp;
int i,j ; 
for(i=0; i<n; ++i) 
cin >> x[i];
for(i=n-1; i>0; i--)
for(j=0 ; j<i; j++)
if(x[j] > x[j+1])
{ 
temp = x[j] ;
x[j] = x[j+1]; 
x[j+1] = temp ;
}
for(i=0; i< n ; i++)
 cout << x[i] << endl;
getch();
return 0 ;
}





