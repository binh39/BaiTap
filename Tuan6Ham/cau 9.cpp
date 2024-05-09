#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int randomLessThanN(int N) {
    srand(time(nullptr));
    return rand() % N;
}

int main() {
    int N;
    cin >> N;
    int randomNumber = randomLessThanN(N);
    cout << randomNumber << endl;

    return 0;
}
