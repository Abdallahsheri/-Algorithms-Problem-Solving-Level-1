#include <iostream>   
#include <string>     
using namespace std;  

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please enter your age" << endl;
    cin >> Info.Age;

    cout << "Do you have a driver’s license  (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasDrivingLicense;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense == 1);
}


void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
    
}
int main()
{
    PrintResult(ReadInfo());
    

    return 0;  
}

