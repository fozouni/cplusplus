using namespace std;
#include <iostream >
#include <math.h>

int main( )
{
float x , s ;
cout << "Enter a Number: ";
cin >> x;
if(x<0)
{
cout << "x is negative"<<endl;		
}
else
{
s = sqrt(x);
cout << "The square root of this number is " << s <<endl;	
}
return 0 ;
}

