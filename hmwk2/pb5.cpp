#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double sphereVolume (double radius){{
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    
    cout << "volume: " << volume << endl;
    
       
    } 
    return 0;
}
int main () {
    sphereVolume(5);
    sphereVolume(10);
    

}