#include <iostream>
using namespace std;

int main()
{
int i, j, k , n;
for (i=1 ; i<= 3 ; ++i)
	for (j=1 ; j<=3 ; ++j)
		for (k=1 ; k<=5 ; ++k)
		{
		n = i*100 +j*10 + k;
		cout << n << '\n'; 	
		}
return 0;
}

