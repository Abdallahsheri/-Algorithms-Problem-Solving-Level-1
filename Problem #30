#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #30 - Factorial of N!
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
      return Number;
}

int Factorial(int N)
{
    int F = 1;
    for (int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;
    }
    return F;
}
int main()
{   
    cout << Factorial(ReadPositiveNumber("Please enter a positive Number : ")) << endl;
    return 0;  
}

