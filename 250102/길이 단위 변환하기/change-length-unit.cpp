#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    float a = 9.2*30.48;
    float b = 1.3*160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2" << "ft = " << a << "cm" << endl;
    cout << "1.3" << "mi = " << b << "cm" << endl;

    return 0;
}