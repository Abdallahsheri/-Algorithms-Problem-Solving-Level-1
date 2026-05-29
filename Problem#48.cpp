#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#48 - Monthly Loan Installments. 
float ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float MonthlyInstallment(float LoanAmount, float Months)
{
	return LoanAmount / Months;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float Months = ReadPositiveNumber("How Many Months?");

	cout << "\n Monthly Installment = " << MonthlyInstallment(LoanAmount, Months);
    return 0;  
}
