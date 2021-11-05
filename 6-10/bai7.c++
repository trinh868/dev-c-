#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      double result = 0;
      for (double i = 1; i <= n; i++)
      {
            result += i / i + 1;
      }
      cout << result;
      return 0;
}