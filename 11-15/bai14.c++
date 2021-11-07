#include <iostream>

using namespace std;

long long Tinh(int n, int x)
{
      long long result = x;
      long long remember = x;
      for (int i = 1; i <= n; i++)
      {
            remember *= x * x;
            result += remember;
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