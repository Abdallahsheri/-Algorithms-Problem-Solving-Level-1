#include <iostream>   
#include <string>     
using namespace std;  
//Problem 11 Average of 3 Marks Pass/Fail
enum enPassFail { Pass = 1, Fail = 2 };
void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter the First Mark : " << endl;
    cin >> Mark1;

    cout << "Please enter the Second Mark : " << endl;
    cin >> Mark2;

    cout << "Please enter the Third Mark : " << endl;
    cin >> Mark3;
}
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks( Mark1,  Mark2,  Mark3) / 3;
}
enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintAverage(float Average)
{
    cout << "The Average of the 3 Marks is : " << Average << endl;
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Failed" << endl;
}

int main()
{   
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintAverage(CalculateAverage(Mark1, Mark2, Mark3));
    return 0;  
}

