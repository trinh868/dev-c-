#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      double result = 0.5;
      for (double i = 1; i <= n; i++)
      {
            result += 2.f * i + 1.f / 2.f * i + 2.f;
      }
      cout << result;
      return 0;
}