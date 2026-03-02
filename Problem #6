#include <iostream>   
#include <string>     
using namespace std;  
//Problem 6 Print FullName from user
struct strNameInfo
{
    string FirstName;
    string LastName;
};

strNameInfo ReadFromUser()
{
    strNameInfo Info;

    cout << "Please enter your First Name : " << endl;
    cin >> Info.FirstName;

    cout << "Please enter you Last Name : " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(strNameInfo Info)
{
    string FullName = "";
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "Your Full Name is : " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadFromUser()));
    

    return 0;  
}

