#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cout << "Using Size: ";
    cin >> s;

    vector<int> v;

    cout << "Before Reverse: ";

    while (s--)
    {
        int e;

        cin >> e;

        v.push_back(e);
    }

    cout << "After Reverse: ";

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}