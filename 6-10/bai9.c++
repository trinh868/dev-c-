#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      long long result = 1;
      for (int i = 2; i <= n; i++)
      {
            result *= i;
      }
      cout << result;
      return 0;
}