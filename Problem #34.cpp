#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #35 - Piggy Bank
struct stPiggyBankContnent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContnent ReadContent()
{
	stPiggyBankContnent PiggyBankContent;

	cout << "Please enter total number of Pennies : " << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "Please enter total number of Nickels : " << endl;
	cin >> PiggyBankContent.Nickels;

	cout << "Please enter total number of Dimes : " << endl;
	cin >> PiggyBankContent.Dimes;

	cout << "Please enter total number of Quarters : " << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "Please enter total number of Dollars : " << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}
int CalculateTotalPennies(stPiggyBankContnent PiggyBankContent)
{
	int TotalPennies = PiggyBankContent.Pennies * 1
		+ PiggyBankContent.Nickels * 5
		+ PiggyBankContent.Dimes * 10
		+ PiggyBankContent.Quarters * 25
		+ PiggyBankContent.Dollars * 100;
		
	return TotalPennies;
}
int main()
{	
	int TotalPennies = CalculateTotalPennies(ReadContent());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = $" << (float)TotalPennies / 100 << endl;
	return 0;  
}
