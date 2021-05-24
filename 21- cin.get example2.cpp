#include <iostream >
using namespace std;

int main(){
	
char x;
cout << "Please insert any words that comes to your mind right now. Then, I will tell you one color related to it : \n" << endl;
x = cin.get();
switch(x) {
	case 'r' :
	case 'R':
		cout << "red" << '\n';
		break ;
	case 'b' :
	case 'B' :
		cout << "blue" << endl;
		break;
	case 'y' :
	case 'Y' :
		cout << "yellow" << endl;
		break;
	case 'w' :
	case 'W' :
		cout << "white" << endl;
		break;
	default:
		cout << "it is not in my database yet. Please insert this item ASAP" << endl;
}
return 0;
}
