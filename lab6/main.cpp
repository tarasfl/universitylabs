#include "lab6.cpp"
#include <string>
using namespace std;

int main() {
    Cube c1(6.0), c2(5.0), c3;
    c2 < c1;
    cout << "First cube : " << c1 << endl;
    c1 *= 9;
    cout << "Second cube : " << c1 << endl;
    c1.square();
    return 0;
}