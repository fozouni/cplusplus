using namespace std;

#include <iostream>

int main(){
	int x, p =1;
	for (int i=1 ; i<=4 ; i++)
		{
		cin >> x;
		if (!x) continue;
		p = p*x; 	
		}
	cout << p ;
	return 0;	
}
