#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #25 Read Until Age Between 18 and 45

int ReadNumber()
{
    int Number;
    cout << "Please enter a Number : " << endl;
    cin >> Number;
    return Number;
}
void PrintRange(int N)
{
    for (int counter = 1; counter <= N ; counter++)
    {
        cout << counter  << endl;
    }
}
int main()
{   
    int N = ReadNumber();
    PrintRange(N);
    return 0;  
}

