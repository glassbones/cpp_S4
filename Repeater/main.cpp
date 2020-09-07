//////////////////////////////////////////////////////////////////////////////
// 
//	This is one of my first C++ projects please forgive the bad practices.
//  I'm still learning my way around. 
//
//	- Michael
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;


int main(){
	// print header
	cout << "Welcome to Michael's car cleaning service!";
	cout << "\n\nPackage Descriptions:\n\nGold - Wash, Wax, and Detail.\nSilver - Wash and Wax.\nBronze - Standard Car Wash.";
	cout << "\n\nRates per vehicle:\n\nGold - $30\nSilver - $15\nBronze - $10\n\n";
	
	// prompt user for vehicle_count and chosen_package
	int vehicle_count;
	cout << "How many vehicles will you be having serviced today? ";
	cin >> vehicle_count;
	string chosen_package;
	cout << "\nWhich package will you be going with today? ";
	cin >> chosen_package;
	
	// init varibles
	double chosen_price;
	const double gold_price {30};
	const double silver_price {15};
	const double bronze_price {10};
	const double tax_rate {0.07};
	const int hours_per_vehicle {1};
	
	// using transform() function to make sure chosen package is all lowercase
    transform(chosen_package.begin(), chosen_package.end(), chosen_package.begin(), ::tolower);  
	
	// set chosen_price conditionally based on chosen_package 
	if (chosen_package == "gold"){
		chosen_price = gold_price;
	}else if(chosen_package == "silver"){
		chosen_price = silver_price;
	}else{
		chosen_price = bronze_price;
	}
	
	//calculate and print results
	cout << "\n\nReceipt:\nVehicle Count: " << vehicle_count << "\nPackage Type: " << chosen_package;
	cout << "\nCost: $" << vehicle_count * chosen_price << "\nTax: $" << vehicle_count * chosen_price * tax_rate;
	cout << "\nEstimated labor duration: " << hours_per_vehicle * vehicle_count << "\n\nTotal: $";
	cout << vehicle_count * chosen_price + vehicle_count * chosen_price * tax_rate << endl;
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
// 
//	Biggest take away from this one was using the transform() function to
//  itterate over every character in the string in order to make sure each char
//	was lowercase. Much pain lol. I'm sure I will be seeing more scenarios like this
//
///////////////////////////////////////////////////////////////////////////////////////
