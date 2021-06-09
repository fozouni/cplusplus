using namespace std;
#include <iostream >

int main( )
{
float x[2][3], total= 0.0;
int i, j;
// generate matrix x.
cout << "Please insert 6 numbers " << endl;
for(i=0; i<2; ++i)
	for (j=0; j<3; j++)
cin >> x[ i ][ j ];
// calculate the sum of elements.
for(i=0; i<2; ++i)
	for(j=0; j<3; j++)
total += x[ i ][ j ];
cout << "total = " << total << endl;
cout << "The first row of your matrix is as follows :\n " << '['<< x[0][0] << ',' << x[0][1] << ',' << x[0][2]<< ']'<<endl;
return 0 ;
}
