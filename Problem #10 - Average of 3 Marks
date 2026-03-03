#include <iostream>   
#include <string>     
using namespace std;  
//Problem 10 Average of 3 Marks
void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter your first mark :" << endl;
    cin >> Mark1;

    cout << "Please enter your Second mark :" << endl;
    cin >> Mark2;

    cout << "Please enter your Third mark :" << endl;
    cin >> Mark3;
}
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float AverageOfMarks(int Mark1, int Mark2, int Mark3)
{
    return (float) SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}
void PrintAverage(float Average)
{
    cout << "The Average of the three Marks is : " << Average << endl;
}
int main()
{
    int Mark1,  Mark2,  Mark3;
    ReadMarks( Mark1, Mark2, Mark3);
    PrintAverage(AverageOfMarks(Mark1, Mark2, Mark3));

    return 0;  
}

