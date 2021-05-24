#include <iostream>
using namespace std;


int main(){
	
unsigned int n;
cout << "Please insert a positive number and I will guess if it is equal to 3 or not : \n";
cin  >> n;
switch(n){
	case 0:
		cout << "Your number is very small" <<endl;
		break;
	case 1:
		cout << "Your number is not close to three yet" <<endl;
		break;
	case 2:
		cout << "Your Number is less than three" <<endl;
		break;
	case 3:
		cout << "Equal to Three" <<endl;
		break;
	default:
		cout << "Greater than Three" <<endl;
	}	
return 0;	
}

