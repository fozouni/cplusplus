using namespace std;
#include <iostream>

long int factorial(int n)
{
	long int prod = 1;
	if (n>1);
		for (int i=2; i<=n; ++i)
		{
			prod *= i;// prod = prod * i
		}
	return(prod);
}

int main()
{
	cout<<"Please Enter a number and I will calculate its factorial : ";
	int n;
	cin >> n;
	cout << "The factorial of your number is : "<< factorial (n);
	return 0;
}

