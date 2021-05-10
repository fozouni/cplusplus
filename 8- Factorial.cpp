using namespace std;
#include <iostream >

int main( )
{
int n , i;
long fact = 1;
cout << "Please Enter a positive integer number: ";
cin >> n;
for (i=1; i<=n; ++i)
{
	fact *= i; // this means "fact = fact * i"
}
cout << "The Factorial of your number is "<< fact <<endl;
return 0;
}
