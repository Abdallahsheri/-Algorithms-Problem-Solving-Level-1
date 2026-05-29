#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#49 - ATM PIN. 
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
	do
	{	
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nWrong PIN\n";
			system("color 4F");
		}
	} while (PinCode !="1234");
	return false;
}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "Your account Balance is : " << 7500 << endl;
	}
    return 0;  
}
