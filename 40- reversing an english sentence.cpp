# include <iostream >
using namespace std;
void reverse(void) ; // forward declaration

int main( )
{
	reverse( );
	return 0 ;
}

void reverse(void)
// read a line of characters and reverse it
{
	char c;
	if((c = cin.get( )) != '\n')
		reverse( );
	cout << c;
	return ;
}

