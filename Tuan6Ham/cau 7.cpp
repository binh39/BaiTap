#include <iostream>
using namespace std;
void printSpacesAndStars(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}
void printHollowTriangle(int numRows) {
    for (int i = 0; i < numRows; ++i) {
        int spaces = numRows - 1 - i;
        int stars = 2 * i + 1;
        printSpacesAndStars(spaces, stars);
    }
}

int main() {
    int numRows;
    cout << "Nhap so dong cua tam giac hoa thi: ";
    cin >> numRows;
    printHollowTriangle(numRows);
    return 0;
}