#include <iostream>   
#include <string>
#include <cmath>
using namespace std;  
//Problem #23 - Circle Area circle Described Around an Arbitrary Triangle
void ReadTriangleInfo(float& A, float& B, float& C)
{
    cout << "Please enter the Side A : " << endl;
    cin >> A;

    cout << "Please enter the Side B : " << endl;
    cin >> B;

    cout << "Please enter the Side C : " << endl;
    cin >> C;
}
float AreaOfCircle(float A, float B, float C)
{
    const float PI = 3.14;
    float P = (A + B + C) / 2;

    // Compute the radius (T) of the inscribed circle using:
    // T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    // Compute the area of the inscribed circle: Area = π * T².
    float Area = PI * pow(T, 2);

    return Area;  // Return the computed area.
}
void PrintResult(float Area)
{
  
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{   
    float A, B, C;
    ReadTriangleInfo(A, B, C);
    PrintResult(AreaOfCircle(A, B, C));

    return 0;  
}

