#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cout << "Enter the size: ";
    cin >> s;

    vector<int> v;

    while (s--)
    {
        int e;
        cin >> e;

        v.push_back(e);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int element : v)
    {
        cout << element << " ";
    }

    return 0;
}
