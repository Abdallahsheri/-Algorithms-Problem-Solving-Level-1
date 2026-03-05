#include <iostream>   
#include <string>     
using namespace std;  
//Problem 13 Max 3 Numbers
void ReadNumbers(int& num1, int& num2, int& num3)
{
    cout << "Please enter the first number : " << endl;
    cin >> num1;

    cout << "Please enter the second number : " << endl;
    cin >> num2;

    cout << "Please enter the third number : " << endl;
    cin >> num3;
}
int MaxNumbers(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
        {
            return num3;
        }
    }
}
void PrintResult(int Max)
{
    cout << "The Maximum Number is : " << Max << endl;

}
int main()
{   
    int num1,  num2,  num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(MaxNumbers(num1, num2, num3));
    return 0;  
}

