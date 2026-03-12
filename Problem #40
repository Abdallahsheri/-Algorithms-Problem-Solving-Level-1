#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #40 - Service fee, Tax fee
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float CalculateBills(float TotalBiils)
{
	TotalBiils = TotalBiils * 1.1;
	TotalBiils = TotalBiils * 1.16;
	return TotalBiils;
}
int main()
{	
	float TotalBill = ReadPositiveNumber("Pleas enter the total Bill : ");
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service And Tax : " << endl;
	cout << CalculateBills(TotalBill) << endl;
	return 0;  
}
