#include <iostream>
using namespace std;

int main() {
int i, j;
cout << "Your Numbers are as Follows : " <<'\n' << '\n';
	for(i=1 ; i<=10 ; i++)
		for(j=1 ; j<= 10 ; j++)
		{
						cout << i*j <<" : ";
			if (j == 10) 
				cout << '\n';
		}
		
	return 0;
}

