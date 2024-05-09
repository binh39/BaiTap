#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimalNumber) {
    string binaryResult = "";

    if (decimalNumber == 0) {
        return "0";
    }

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryResult = to_string(remainder) + binaryResult;
        decimalNumber /= 2;
    }

    return binaryResult;
}

int main() {
    int decimalNumber;
   	cin >> decimalNumber;

    string binaryResult = decimalToBinary(decimalNumber);
    cout << binaryResult << endl;

    return 0;
}
