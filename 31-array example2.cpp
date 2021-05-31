#include <iostream>
using namespace std;

int main( )
{
const int arrsize = 4 ;
float x[arrsize], tot = 0.0 ;
for(int j=0; j<arrsize; j++){
	cin >> x[j];
}	
for(int j=0; j<arrsize; j++){
	tot += x[j];
}	
cout << "The sum of numbers in your array is : "<<tot << endl;

cout << "Your array is as follows : "<< '['<< x[0] << ',' << x[1] <<',' << x[2]<< ',' <<x[3]<< ']'<<endl;
return 0;
}
