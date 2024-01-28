#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;

    vector<int> v;

    cin >> s;

    while (s--)
    {
        int e;

        cin >> e;

        v.push_back(e);
    }

    int total_sum = 0;

    for (auto sum : v)
    {
        total_sum += sum;
    }

    cout << total_sum << "\n";

    return 0;
}