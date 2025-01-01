#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    float a = 9.2*30.48;
    float b = 1.3*160934;

    cout << fixed;
    cout.precision(1);

    cout << a << "ft = " << a << "cm" << endl;
    cout << b << "ft = " << b << "cm" << endl;

    return 0;
}