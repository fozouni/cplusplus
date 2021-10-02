using namespace std;
#include <iostream>

char low_to_up(char c1)
{
	char c2;
	c2=(c1>='a'&&c1<='z')?('A'+c1-'a'):c1;
	return c2;
 } 
 
 int main()
 {
 	cout<< "Enter a letter and then hit ENTER again please.\n I'm going to turn that letter for you to a Upper-Case one : ";
	char x;
 	x = cin.get();
 	
 	cout<< "Here you are. This is my magic : " << low_to_up(x);
 	
 	return 0;
 }
 /*
 The expression ('A'+c1-'a') does the conversion. c1-a will give the 0-based position of the character within the alphabet.
By adding this value to A you will get the upper case equivilant of c1.

Update: if c1 is 'b' then the expression c1-'a' would give 1, which is the 0-based position of 'b' in the alphabet' Adding 1 to 'A' will then give 'B'
 */
