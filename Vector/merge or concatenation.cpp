#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2;
    cout << "Enter First Size: ";
    cin >> s1;
    cout << "Enter Second Size: ";
    cin >> s2;

    int s3 = s1 + s2;

    vector<int> v1;
    vector<int> v2;

    cout << "Enter First Element: ";
    while (s1--)
    {
        int e1;
        cin >> e1;
        v1.push_back(e1);
    }

    cout << "Enter Second Element: ";
    while (s2--)
    {
        int e2;
        cin >> e2;
        v2.push_back(e2);
    }

    vector<int> m(s3);

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), m.begin());

    cout << "After Merge or Concatenation: ";
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }

    return 0;
}
