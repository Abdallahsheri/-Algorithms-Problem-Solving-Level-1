#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#50 - ATM PIN 3 Times. 
string ReadPinCode()
{
	string PinCode;
	cout << "Please enter your PIN Code : " << endl;
	cin >> PinCode;
	return PinCode;
}
bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{	
		Counter--;
		PinCode = ReadPinCode();
		
		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nWrong PIN, you have " << Counter << " more tries\n";
		}
	} while (Counter >= 1 && PinCode != "1234");
	return false;
}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "Your account Balance is : " << 7500 << endl;
	}
	else
	{
		system("color 4F");
		cout << "\nYour card is blocked. Call the bank for help.\n";
	}

    return 0;  
}
