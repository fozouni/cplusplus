using namespace std;
#include <iostream>
#include <stdlib.h>

int main( )
{
unsigned seed ;
cout << "Enter a seed: " ;
cin >> seed ;
srand(seed) ;
for(int i=1; i<=10; ++i)
	cout << rand( ) / 32768.0 << endl ;
return 0 ;
}
