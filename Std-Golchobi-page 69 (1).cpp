#include <iostream>
#include <conio.h>
using namespace std;

int main( )
{
float x[5], s;
int j ;
for(j=0; j<5 ; ++j) cin >> x[ j ];
s = x[0 ] ;
for(j=1; j<5; ++j)
if (x[j] <s) s = x[ j ];
cout << s << endl; 
return 0;
}




