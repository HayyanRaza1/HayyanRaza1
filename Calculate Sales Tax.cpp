#include<iostream>

using namespace std;

int main(){
 // Declare Variables
	int item1 ,item2 ,item3 ,item4 ,item5 ,subTotal;
	float taxPercent, salesTaxPercent = 0.07;
	
	//printing instructions and taking prices of items as inputs 
	cout << "Enter the price of Item1"	<<endl;
	cin >> item1;
	cout << "Enter the price of Item2"	<<endl;
	cin >> item2;
	cout << "Enter the price of Item3"	<<endl;
	cin >> item3;
	cout << "Enter the price of Item4"	<<endl;
	cin >> item4;
	cout << "Enter the price of Item5"	<<endl;
	cin >> item5;
	//calculating subTotal
	subTotal = item1 + item2 + item3 + item4 + item5;
	// output subTotal
	cout << "Total Prices Of Purchased Items is : "<< subTotal << endl;
	// calculate the tax
	taxPercent = subTotal * salesTaxPercent ;
	// print taxes
	cout << " Total Sales Tax is : " << taxPercent;
	return 0;
}

