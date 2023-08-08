#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by KMA dil and man
struct phim{
    string id;
    string tl;
    int ngay;
    int thang;
    int nam;
    string ten;
    int soTap;
};
bool cmp(phim a, phim b){
    if(a.nam<b.nam)
        return true;
    if(a.nam>b.nam)
        return false;
    if(a.thang<b.thang)
        return true;
    if(a.thang>b.thang)
        return false;
    if(a.ngay<b.ngay)
        return true;
    if(a.ngay>b.ngay)
        return false;
    if(a.ten<b.ten)
        return true;
    if(a.ten>b.ten)
        return false;
    return a.soTap<b.soTap;
}
int main()
{
    int n, m;
    cin>>n>>m;
    vector<phim> a;
    phim aa;
    vector<pair<string, string>> TL;
    int tl=0;
    cin.ignore();
    for(int i=0;i<n;i++){
        string x;
        getline(cin, x);
        tl++;
        string tll="TL";
        if(tl<10){
            tll=tll+"00"+to_string(tl);
        }
        else if(tl<100){
            tll=tll+"0"+to_string(tl);
        }
        else
            tll=tll+to_string(tl);
        TL.push_back(make_pair(x, tll));
    }
    for(int i=1;i<=m;i++){
        string x;
        cin>>x;
        int xx=(x[2]-'0')*100+(x[3]-'0')*10+(x[4]-'0');
        aa.tl=TL[xx-1].first;
        string q;
        cin>>q;
        aa.ngay=(q[0]-'0')*10+(q[1]-'0');
        aa.thang=(q[3]-'0')*10+(q[4]-'0');
        aa.nam=(q[6]-'0')*1000+(q[7]-'0')*100+(q[8]-'0')*10+(q[9]-'0');
        cin.ignore();
        string name;
        getline(cin, name);
        aa.ten=name;
        int tap;
        cin>>tap;
        aa.soTap=tap;
        string ma="P";
        if(i<10){
            ma=ma+"00"+to_string(i);
        }
        else if(i<100){
            ma=ma+"0"+to_string(i);
        }
        else
            ma=ma+to_string(i);
        aa.id=ma;
        a.push_back(aa);
    }
    sort(a.begin(), a.end(),cmp);
    for(auto i: a){
        cout<<i.id<<" "<<i.tl<<" ";
        if(i.ngay<10)
            cout<<"0"<<i.ngay<<"/";
        else
            cout<<i.ngay<<"/";
        if(i.thang<10)
            cout<<"0"<<i.thang<<"/";
        else
            cout<<i.thang<<"/";
        cout<<i.nam<<" "<<i.ten<<" "<<i.soTap<<endl;
    }
    return 0;
}