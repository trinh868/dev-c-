#include <iostream>

using namespace std;

/*
 * Ở trong bài này ta thấy 
 * 10 * 11 = 110
 * 100 * 110 = 11000
 * Vì thế ta sẽ cho nó ở mức giá trị nào đó nó sẽ dừng 
 */
int main()
{
      int n;
      cin >> n;
      double result = 1;
      for (double i = 2; i <= n; i++)
      {
            result += 1.f / i * (i + 1);
      }
      cout << result;
      return 0;
}