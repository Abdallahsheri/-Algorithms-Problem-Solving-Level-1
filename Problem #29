#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #29 Sum Of Even Numbers From 1 to N
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
    if (Number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}
int SumOfEven(int N)
{
    int Sum = 0;
    cout << "The sum of the even Numbers is : " << endl;
    for (int Counter = 0; Counter <= N; Counter++)
    {
        if (CheckNumber(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    }
    return Sum;
}
int main()
{   
    int N = ReadNumber();
    cout << SumOfEven(N);
    return 0;  
}

