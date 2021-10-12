using namespace std;
#include <iostream>

int maximum(int x, int y, int z)
{
int w, k;
w = (x >= y>=z)? x : (k=(y>=z) ? y : z); 
return w;
}

int main()
{
	cout<<"Please insert two numbers and each time hit ENTER : ";
	int a, b, c;
	cin >> a >> b >> c;
	cout << "The maximum of these three numbers is : "<< maximum (a, b, c);
	return 0;
}

