#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = (s[i] - 'A' + 2) % 26 + 'A';
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] == 'a') 
                s[i] = 'y';
            else if(s[i] == 'b') 
                s[i] = 'z';
            else
                s[i] = (s[i] - 'a' - 2) % 26 + 'a';
        }
    }   
    cout<<s;
    return 0;
}