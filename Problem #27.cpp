#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #27 Print Numbers from N to 1

int ReadNumber()
{
    int Number;
    cout << "Please enter a Numebr : " << endl;
    cin >> Number;
    return Number;
}
void PrintRange(int N)
{
    for (int counter = N; counter >= 0; counter--)
    {
        cout << counter << endl;
    }
}
int main()
{   
    int N = ReadNumber();
    PrintRange(N);
    return 0;  
}

