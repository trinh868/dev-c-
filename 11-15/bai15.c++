#include <iostream>

using namespace std;

long long Tinh(int n, int x)
{
      double result = 0;
      double remember = 0;
      for (double i = 1; i <= n; i++)
      {
            remember += i;
            result += 1 / remember;
      }
      return result;
}
int main()
{
      int n;
      int x;
      cin >> n >> x;
      cout << Tinh(n, x);
      return 0;
}