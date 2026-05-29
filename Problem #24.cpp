#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #24 - Validate Age Between 18 and 45
int ReadAge()
{
    int Age;
    cout << "Please enter your age : " << endl;
    cin >> Age;
    return Age;
}
bool ValidateAge(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateAge(Age,18,45))
    {
        cout << Age << " is a valid age \n";
    }
    else
    {
        cout << "Age" << "Is an Invalid Age \n";
    }
}
int main()
{   
    PrintResult(ReadAge());
    return 0;  
}

