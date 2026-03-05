#include <iostream>   
#include <string>     
using namespace std;  
//Problem 16 Area of rectangle
void ReadNumbers(float& Diagonal, float& Side)
{
    cout << "Please enter the diagonal of the rectangle : " << endl;
    cin >> Diagonal;

    cout << "Please enter the Side of the rectangle : " << endl;
    cin >> Side;
}
float AreaOfRectangle(float Diagonal, float Side)
{
    return (Side) * (sqrt(pow(Diagonal, 2) - pow(Side, 2)));
}
void PrintArea(float Area)
{
    cout << "The area of the rectangle is : "<< Area << endl;
}
int main()
{   
    float Diagonal, Side;
    ReadNumbers(Diagonal, Side);
    PrintArea(AreaOfRectangle(Diagonal, Side));
    return 0;  
}

