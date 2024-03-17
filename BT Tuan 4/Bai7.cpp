#include <iostream>
#include <string>

using namespace std;

void veChuTo(string tu) {
  // Kiểm tra độ dài của từ
  if (tu.length() > 12) {
    cout << "Độ dài của từ không được quá 12 ký tự!" << endl;
    return;
  }

  // Chuyển đổi chuỗi sang chữ hoa
  for (char& c : tu) {
    c = toupper(c);
  }

  // Vẽ từng ký tự trong chuỗi
  for (char ch : tu) {
    // Xác định ký tự đặc biệt
    if (ch == ' ') {
      cout << " ";
    } else {
      // Vẽ ký tự chữ cái
      for (int i = 0; i < 5; i++) {
        if (i == 0 || i == 4) {
          cout << "#";
        } else if (i == 2 && (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
          cout << " ";
        } else {
          cout << ch;
        }
      }
      cout << endl;
    }
  }
}

int main() {
  // Nhập từ tiếng Anh từ người dùng
  string tu;
  cout << "Nhập từ tiếng Anh: ";
  cin >> tu;

  // Vẽ chữ to từ từ tiếng Anh
  veChuTo(tu);

  return 0;
}