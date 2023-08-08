#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool cmp1(char a, char b){
    return a>b;
}
bool cmp2(int a, int b){
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        string x;
        cin>>x;
        sort(x.begin(), x.end(), cmp1);
        a.push_back(stoi(x));
    }   
    sort(a.begin(), a.end(), cmp2);
    for (auto i:a){
        cout<<i<<" ";
    }
    return 0;
}