#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
// Problem #33 - Print Grades (A,B,C,D,E,F)

int ReadNumberInRange(int From, int To)
{
    int Grade;
    do
    {
        cout << "Please enter a Grade Between " << From << " And " << To << " ? " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To);
    return Grade;
}
char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    if (Grade >= 80)
        return 'B';
    if (Grade >= 70)
        return 'C';
    if (Grade >= 60)
        return 'D';
    if (Grade >= 50)
        return 'E';
    else
    {
        return 'F';
    }
}
int main()
{
    cout << endl << "Result = " << GetGradeLetter(ReadNumberInRange(0, 100));

    return 0;  
}
