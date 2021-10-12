# include <iostream >
using namespace std;

int modify(int);

int main()
{
	int a = 30;
	cout << a << endl; // 30 will appear
	modify(a); // 60 will apear
	cout << a << endl; // 30 will apear
	return 0;
}

int modify(int a)
{
	a *= 2;
	cout << a << endl;
	return a;
}
