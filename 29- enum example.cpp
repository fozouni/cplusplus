#include <iostream>
using namespace std;

enum colors{red=3, black=5};// if you do not define any number, it will start from 0 


enum suit{heart, diamond=8, spade=3, club};

int main() {
   cout <<"The value of enum color : "<<red<<","<<black << '\n';
   cout <<"The default value of enum suit : "<<heart<<","<<diamond<<","<<spade<<","<<club;
   return 0;
}
