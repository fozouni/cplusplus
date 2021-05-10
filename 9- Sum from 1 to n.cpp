using namespace std;
#include <iostream >

int main( )
{
int n , i;
long s = 0;
cout << "Plase Enter a number. I'm waiting for your order ";
cin >> n;
for (i=1; i<=n; ++i)
{
	s += i; // this means "s = s + i"
}
cout << "the sum from 1 to your number is " << s <<endl;
return 0;
}
