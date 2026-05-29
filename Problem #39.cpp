#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #39 - Total Bill

float ReadPositiveNumbers(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float CalculateRemainder(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}
int main()
{	
	float TotalBill = ReadPositiveNumbers("Please enter total bill : ");
	float CashPaid = ReadPositiveNumbers("Please enter cash paid : ");

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << CashPaid << endl;

	cout << "***************************\n";

	cout << "Remainder : " << CalculateRemainder(TotalBill, CashPaid);

	return 0;  
}
