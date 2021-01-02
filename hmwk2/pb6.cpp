#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double sphereSurfaceArea (double radius){{

double volume;
    double surfArea;
    surfArea = (4 * M_PI * pow(radius, 2));
    cout << "surface area: " << surfArea << endl;
    }   
return 0;
}
int main(){
    sphereSurfaceArea (5);
    sphereSurfaceArea (10);

}