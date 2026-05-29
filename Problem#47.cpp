#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#47 - Loan Installment Months 
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return LoanAmount / MonthlyInstallment;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount : ");
	float MonthlyInstallment = ReadPositiveNumber("please enter Monthly Installemnt : ");

	cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
    return 0;  
}
