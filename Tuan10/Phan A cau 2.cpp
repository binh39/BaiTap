int* p = new int;   // Cấp phát bộ nhớ động cho con trỏ p để lưu trữ một số nguyên
*p = 10;            // Gán giá trị 10 vào vùng nhớ mà p đang trỏ tới

delete p;           // Giải phóng bộ nhớ mà p đang trỏ tới
p = nullptr;        // Đặt con trỏ p về nullptr sau khi đã giải phóng

int* p2 = new int;  // Cấp phát bộ nhớ mới cho con trỏ p2
*p2 = 100;          // Gán giá trị 100 vào vùng nhớ mà p2 đang trỏ tới

cout << *p2;        // In ra giá trị mà p2 đang trỏ tới

delete p2;          // Giải phóng bộ nhớ mà p2 đang trỏ tới
p2 = nullptr;       // Đặt con trỏ p2 về nullptr sau khi đã giải phóng
