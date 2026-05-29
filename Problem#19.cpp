#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #19 - Circle Area Through Diameter

float ReadDiameter()
{   
    float Diameter;
    cout << "Please enter the Diameter of the circle : " << endl;
    cin >> Diameter;
    return Diameter;
}

float CalculateArea(float Diameter)
{
    const float PI = 3.14;
    float Area = (pow(Diameter, 2) * PI) / 4;
    return Area;
}

void PrintResult(float Aera)
{
    cout << "The area of the circle is : " << Aera << endl;
}
int main()
{   
    PrintResult(CalculateArea(ReadDiameter()));
    return 0;  
}

