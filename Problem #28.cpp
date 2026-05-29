#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #28 Sum Of Odd Numbers From 1 to N
enum enOddOrEven {Odd = 1, Even = 2};
int ReadNumber()
{
    int Number;
    cout << "Please enter a Number : " << endl;
    cin >> Number;
    return Number;
}
enOddOrEven CheckNumber(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
    
        return enOddOrEven::Even;
    
}

int SumOfOdd(int N)
{
    int Sum = 0;
    cout << "Sum odd numbers : \n";
    for (int Counter = 0; Counter <= N; Counter++)
    {
        if (CheckNumber(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;
}

int main()
{   
    int N = ReadNumber();
    cout << SumOfOdd(N) << endl;
    return 0;  
}

