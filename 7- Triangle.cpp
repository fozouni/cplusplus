using namespace std;
#include <iostream >

int main( )
{
float a, b, c;
cout << "Enter three real numbers. Each time hit the Enter key" << endl ;
cin >> a >> b >> c;
if(( a < b + c) && (b < a+c) && (c < a+b))
cout << "It is a triangle" ;
else
cout << "Not a triangle" ;
return 0 ;
}
