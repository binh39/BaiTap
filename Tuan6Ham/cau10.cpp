#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

const int ARRAY_SIZE = 10; 

void createRandomArray(int arr[], int N) {
    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 50;
    }
}

void printTripletsWithSumDivisibleBy25(int arr[], int N) {
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum % 25 == 0) {
                	cout  << arr[i]<<" "<< arr[j]  <<" "<< arr[k] <<" "<< sum << endl;
                }
            }
        }
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    
    srand(time(nullptr));
    createRandomArray(array, N);
    printTripletsWithSumDivisibleBy25(array, N);

    return 0;
}
