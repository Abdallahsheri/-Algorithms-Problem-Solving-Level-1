#include <iostream>   
#include <string>     
using namespace std;  
//Problem 8 Pass/Fail
enum enPassOrFail {Pass = 1, Fail = 2};
int ReadMark()
{
    int Mark;
    cout << "Please enter your Mark : " << endl;
    cin >> Mark;
    return Mark;
}
enPassOrFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}
void PrintResults(int Mark)
{
    if (CheckMark(Mark) == enPassOrFail::Pass)
        cout << "You Passed " << endl;
    else
        cout << "You Failed ";
}
int main()
{
    PrintResults(ReadMark());
    

    return 0;  
}

