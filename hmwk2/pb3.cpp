//header files for included libraries
#include <iostream>
using namespace std;

int classGreeting(int courseNum){
    cout << "Hello, CS " << courseNum << " World!" << endl;

    return 0;
}

int main() {
    classGreeting(696969);
    classGreeting(80085);

}