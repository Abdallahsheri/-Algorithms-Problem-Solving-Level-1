#include <iostream>   
#include <string>
#include <cmath>
using namespace std;
//Problem#44 - Day Of Week 
enum enDayOfWeek {Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thur = 6, Fri = 7};
int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}
enDayOfWeek ReaddayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number : (Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thur = 6, Fri = 7)",1,7);
}
string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thur:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Not A Valid Day :( ";

    }

}
int main()
{
      
    cout << GetDayOfWeek(ReaddayOfWeek()) << endl;

    return 0;  
}
