#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #22 Circle Area Inscribed in an Isosceles Triangle
void ReadTriangleInfo(float& A, float& B)
{
    cout << "Please enter triangle side A : " << endl;
    cin >> A;
    cout << "Please enter triangle side B : " << endl;
    cin >> B;
}
float CircleArea(float A, float B)
{
    const float Pi = 3.14;
    float Area = Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
    
}
void PrintArea(float Area)
{
    cout << "The Area of the circle is : " << Area << endl;
}

int main()
{   
    float A, B;
    ReadTriangleInfo(A, B);
    PrintArea(CircleArea(A, B));
    return 0;  
}

