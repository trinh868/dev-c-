#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      // Cách 1
      int result = 0;
      for (int i = 1; i <= n; i++)
      {
            result += i;
      }
      cout << result;
      // Cách 2
      cout << (n + 1) * n / 2;
      return 0;
}