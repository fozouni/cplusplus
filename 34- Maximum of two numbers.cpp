using namespace std;
#include <iostream>

int maximum(int x, int y)
{
int z ;
z=(x >= y)? x : y; // if (x >=y) is true, it returns x. Otherwise it returns y
return z;
}

int main()
{
	cout<<"Please insert two numbers and each time hit ENTER : ";
	int a, b;
	cin >> a>> b;
	cout << "The maximum of these two numbers is : "<< maximum (a,b);
	return 0;
}
