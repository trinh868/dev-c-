#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      double result = 1;
      for (double i = 2; i <= n; i++)
      {
            result += 1.f / i * 2;
      }
      cout << result;
      return 0;
}