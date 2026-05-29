#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#43 - Seconds To Days Hours To Minutes. 
struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumbers(string Message)
{
    float Number;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;
    
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;  

    return TaskDuration;
}
void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
    cout << "\n";  
 
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << "\n";
}
int main()
{
    int TotalSeconds = ReadPositiveNumbers("Please Enter Total Seconds?");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));


    return 0;  
}
