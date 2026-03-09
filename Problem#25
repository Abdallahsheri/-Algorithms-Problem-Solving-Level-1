#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #25 Read Until Age Between 18 and 45
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
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadAge();  

    } while (!ValidateAge(Age, From, To));  

    return Age;  
}
void PrintResult(int Age)
{
    if (ValidateAge(Age,18,45))
    {
        cout << Age << " is a valid age \n";
    }
    else
    {
        cout << Age << " Is an Invalid Age \n";
    }
}
int main()
{   
    PrintResult(ReadUntilAgeBetween(18,45));
    return 0;  
}

