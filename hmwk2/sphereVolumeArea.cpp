#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius;
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "volume: " << volume << endl;

    
    //your code goes here
    double surfArea;
    surfArea = (4 * M_PI * pow(radius, 2));
    cout << "surface area: " << surfArea << endl;
} 