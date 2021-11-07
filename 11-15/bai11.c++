/*
 * Ở bài này ta thấy 
 * Dãy số nó ghi liên tiếp 
 * Ta có thẻ khai báo thêm 1 biến nữa để nhớ cái phép tính nớ
 */

#include <iostream>

using namespace std;

// Cách 1
long long Tinh(int n)
{
      // Đây là cách đơn giản nhất
      long long result = 0;
      for (int i = 1; i <= n; i++)
      {
            int a = 1;
            for (int j = 1; j <= i; j++)
            {
                  a *= j;
            }
            result += i;
      }
      // Uy điểm đơn giản và ko tốn bộ nhớ
      // Nhược điểm thời gian chạy lau
      return result;
}

// Cách 2
long long Tinh2(int n)
{
      long long result = 0;
      long long remeber = 1;
      for (int i = 1; i <= n; i++)
      {
            remeber *= i;
            result += remeber;
      }
      // Uy điểm Nhanh
      // Nhược điểm  tốn bộ nhớ
      return result;
}
int main()
{
      int n;
      cin >> n;
      cout << Tinh(n) << endl;
      cout << Tinh2(n) << endl;
}