#include <iostream>   
#include <string>     
using namespace std;  


struct stInfo
{
    int age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age : " << endl;
    cin >> Info.age;

    cout << "Do you have a driving license ?  ( 1 For Yes, 0 For No ) " << endl;
    cin >> Info.HasDrivingLicense;

    cout << "Do you have Recommendation ?  ( 1 For Yes, 0 For No ) " << endl;
    cin >> Info.HasRecommendation;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.age > 21 && Info.HasDrivingLicense);
    }
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}



int main()
{
    
    PrintResult(ReadInfo());

    return 0;  
}


