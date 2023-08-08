#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string a;
    string s;
    while(cin>>a){
        s+=a;
        s+=" ";
    }
    for (int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    if(s[0]>='a' && s[0]<='z')
        s[0]=toupper(s[0]);
    stringstream ss(s);
    string tmp;
    int cc=0;
    while(ss>>tmp){
        if(cc==1){
            tmp[0]=toupper(tmp[0]);
            cc=0;
        }
        for (int i=0;i<tmp.size()-1;i++)
            cout<<tmp[i];
        if(tmp[tmp.size() - 1] == '.' || tmp[tmp.size() - 1] == '?' || tmp[tmp.size() - 1] == '!'){
			cout << endl;
			cc = 1;
		}
		else{	
			cout<<tmp[tmp.size() - 1];
			cout<< " ";
		}
    }
    return 0;
}