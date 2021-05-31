using namespace std;
#include <iostream >
#include <stdlib.h>

int main( )
{
unsigned seed, d1, d2;
cout << "Enter a seed: " ;
cin >> seed ;
srand(seed) ;
d1 = 1 + rand( ) % 6 ;
d2 = 1 + rand( ) % 6 ;
cout << d1 << ' ' << d2 ;
return 0 ;
}
