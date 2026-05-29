#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #20 Circle Area Inscribed in a Square

float ReadAreaOfSquare()
{
    float AreaOfSquare;
    cout << "Please enter the value of the area of the square : " << endl;
    cin >> AreaOfSquare;
    return AreaOfSquare;
}

float AreaOfCircle(float AreaOfSquare)
{
    const float PI = 3.14;
    float Area = (PI * pow(AreaOfSquare, 2)) / 4;
    return Area;

}
void PrintTheArea(float Area)
{
    cout << "The Area of the circle is : " << Area << endl;
}
int main()
{   
    PrintTheArea(AreaOfCircle(ReadAreaOfSquare()));
    return 0;  
}

