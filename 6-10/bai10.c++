#include <iostream>

using namespace std;

int main()
{
      int n;
      cin >> n;
      long long result = n;
      for (int i = 2; i <= n; i++)
      {
            result *= n;
      }
      cout << result;
      return 0;
}