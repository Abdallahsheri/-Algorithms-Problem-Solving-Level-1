#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #21 - Circle Area Along the Circumference
float ReadCircumference()
{
    float Circumference;
    cout << "Please enter the Circumference of the Circle : " << endl;
    cin >> Circumference;
    return Circumference;
}
float AreaOfCircle(float Circumference)
{
    const float Pi = 3.14;
    float Aera = (pow(Circumference, 2)) / (4 * Pi);
    return Aera;
}

void PrintArea(float Area)
{
    cout << "The area of the Circle is : " << Area << endl;

}
int main()
{   
    PrintArea(AreaOfCircle(ReadCircumference()));
    return 0;  
}

