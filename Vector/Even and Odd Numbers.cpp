#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;

    cout << "Using Number of Size: ";
    cin >> s;

    vector<int> v;

    for (int i = 1; i <= s; i++)
    {
        v.push_back(i);
    }

    cout << "Even are: ";

    for (auto sum : v)
    {
        if (sum % 2 == 0)
        {
            cout << sum << " ";
        }
    }

    cout << "\n";

    cout << "Odd are: ";

    for (auto sum : v)
    {
        if (sum % 2 != 0)
        {
            cout << sum << " ";
        }
    }

    return 0;
}