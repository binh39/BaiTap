char* a = new char[10];   // Cấp phát bộ nhớ động cho con trỏ a để lưu trữ một mảng kí tự có độ dài là 10
char* c = a + 3;           // Con trỏ c trỏ tới phần tử thứ 3 của mảng kí tự được cấp phát

for (int i = 0; i < 9; i++) 
    a[i] = 'a';            // Gán kí tự 'a' vào các phần tử của mảng kí tự a
a[9] = '\0';               // Đặt ký tự kết thúc chuỗi vào phần tử thứ 9 của mảng a

cerr << "a: " << "-" << a << "-" << endl;  // In nội dung của mảng a ra màn hình
cerr << "c: " << "-" << c << "-" << endl;  // In nội dung của mảng c (bắt đầu từ phần tử thứ 3 của a) ra màn hình

delete c;                  // Giải phóng bộ nhớ mà con trỏ c đang trỏ tới (không được phép vì c trỏ vào trong mảng a)
cerr << "a after deleting c: " << "-" << a << "-" << endl;  // In nội dung của mảng a ra màn hình sau khi giải phóng bộ nhớ bằng delete c
