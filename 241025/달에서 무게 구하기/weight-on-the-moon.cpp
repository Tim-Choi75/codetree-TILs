#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    cout.precision(6);
    cout << fixed;
    int chu = 13;
    double gravity =  0.165;

    cout << chu << " * " << gravity << " = " << chu * gravity;
    return 0;
}