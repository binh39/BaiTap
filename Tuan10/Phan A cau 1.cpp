#include <iostream>
#include <string>

using namespace std;

string cong(const char* str1, const char* str2) {
    
    string result(str1); 
    result += str2; 
    return result;
}

int main() {
    const char* s1 = "Hello";
    const char* s2 = "World";
    string concatenatedString = cong(s1, s2);
    cout << concatenatedString << endl;

    return 0;
}
