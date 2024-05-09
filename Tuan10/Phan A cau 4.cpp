//Đây là một ví dụ minh họa về lỗi khi sử dụng bộ nhớ động không đúng cách trong C++. 
//Trong ví dụ này, chúng ta sẽ tạo một con trỏ trỏ tới vùng nhớ của một biến địa phương (cục bộ), sau đó giải phóng con trỏ đó. 
//Chương trình sẽ thực hiện hành động không hợp lệ và dẫn đến lỗi.
#include <iostream>

using namespace std;

int main() {
    int localVariable = 5;  // Khai báo và khởi tạo biến địa phương localVariable

    int* ptr = &localVariable;  // Khởi tạo con trỏ ptr trỏ đến địa chỉ của biến localVariable

    // Giải phóng bộ nhớ mà con trỏ ptr đang trỏ tới
    delete ptr;  // Lỗi: Không được phép giải phóng bộ nhớ của biến địa phương localVariable bằng delete

    cout << "Gia tri cua bien LocalVariable: " << localVariable << endl;
    return 0;
}
// Lỗi thực thi runtime "pointer being freed was not allocated"
