#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int dem = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
                dem++;
            else
            {
                cout << s[i] << dem;
                dem = 1;
            }
        }
        cout << endl;
    }
    return 0;
}