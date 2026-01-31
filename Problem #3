#include <iostream>   
#include <string>     
using namespace std;  

/*  
    Problem #3
    Write a program to ask the user to enter a number, 
    then print Odd if it is odd or even if it is even
*/

enum enNumberType{Odd = 1, Even = 2};

int ReadNum()
{
    int Num;
    cout << "Please enter the number : ";
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "\n Number Is Even. \n";
    }
    
    else
    {
        cout << "\n Number Is Odd. \n";
    }
}



int main()
{

    PrintNumberType(CheckNumberType(ReadNum()));

    return 0;  
}

