// Apart from having lots of holidays throughout the year, residents of Berland also have whole lucky years. Year is considered lucky if it has
// no more than 1 non-zero digit in its number. So years 100, 40000, 5 are lucky and 12, 3001 and 12345 are not.

// You are given current year in Berland. Your task is to find how long will residents of Berland wait till the next lucky year.

// Input
// The first line contains integer number n (1 ≤ n ≤ 109) — current year in Berland.

// Output
// Output amount of years from the current year to the next lucky one.

// Examples
// inputCopy
// 4
// outputCopy
// 1
// inputCopy
// 201
// outputCopy
// 99
// inputCopy
// 4000
// outputCopy
// 1000

#include <bits/stdc++.h>
using namespace std;

int count(int x)
{
    int cnt = 0;
    while (x != 0)
    {
        x /= 10;
        cnt++;
    }

    return cnt;
}
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 9)
        cout << "1\n";
    else
    {
        int ans = pow(10, count(n) - 1);
        cout << (((n / ans) + 1) * (ans)) - n << "\n";
    }
    return 0;
}