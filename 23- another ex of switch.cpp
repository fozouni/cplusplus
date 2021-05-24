#include <iostream>
using namespace std;


int main(){
	
unsigned int n;
//cout << "Please insert a positive number and I will guess if it is equal to 3 or not : \n";
cin  >> n;
switch(n){
	case 0:
		cout << "Zero" <<endl;
		break;
	case 1:
		cout << "One" <<endl;
		break;
	case 2:
		cout << "Two" <<endl;
		break;
	/*case 3:
		cout << "Equal to Three" <<endl;
		break;
	*/	
	default:
		cout << "Default" <<endl;
	}	
return 0;	
}

