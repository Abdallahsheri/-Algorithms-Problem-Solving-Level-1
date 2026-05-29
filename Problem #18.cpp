#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem 18 Area of Cirlce
void ReadNumbers(float& Raduis)
{
    cout << "Please enter the Raduis of the circle : " << endl;
    cin >> Raduis;
}
float AreaOfCircle(float Raduis)
{
    const float PI =  3.14;
    float Area = pow(Raduis, 2) * PI;
    return Area;
}

void PrintArea(float Area)
{
    cout << "\n The area of the circle is : " << Area << endl;

}
int main()
{   
    float Raduis;
    ReadNumbers(Raduis);
    PrintArea(AreaOfCircle(Raduis));
    return 0;  
}

