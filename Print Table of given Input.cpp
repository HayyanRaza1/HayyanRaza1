
//Print Table of Given Input

#include <iostream>
using namespace std;

int main() {
	
	//intialiazation
	int userinput, output;
	
	//Printing the instruction
	cout << "Enter Number To Print Table";
	cin >> userinput; 
	
	//applying loop to print Table of user input 
	
  for (int i = 1; i <=10; i++) {
  	
  	//formula to get the answer of table ex : 2X2=1
  	output = userinput * i;
  	//Printing in an desired pattern
		cout<< userinput << "x" <<i << "="<< output<<endl;
  }
  return 0;
}

