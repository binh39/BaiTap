#include <iostream>
#include <cmath> 

using namespace std;
int roundToNearestInt(double x) {
    if (x >= 0.0) {
        return (int)(x + 0.5);
    } else {
        return (int)(x - 0.5);
    }
}

int main() {
    double number;
    cin >> number;

    int rounded = roundToNearestInt(number);
    cout << rounded << endl;

    return 0;
}
