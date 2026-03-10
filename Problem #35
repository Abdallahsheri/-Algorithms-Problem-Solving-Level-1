#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #35 - Total Sales Commission 
float ReadTotalSales()
{
    float TotalSales;
    cout << "please enter total sales : " << endl;
    cin >> TotalSales;
    return TotalSales;
}
float GetCommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    if (TotalSales >= 500000)
        return 0.02;
    if (TotalSales >= 100000)
        return 0.03;
    if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}
float CalculateTotalCommission(float TotalSales)
{
   return GetCommissionPercentage(TotalSales) * TotalSales;
}
int main()
{
    float TotalSales = ReadTotalSales();
    cout << endl << "Commission Percentage = " << GetCommissionPercentage(TotalSales) * 100 << "%" << endl;
    cout << endl << "Total Commission = " << CalculateTotalCommission(TotalSales) << endl;
    return 0;  
}
